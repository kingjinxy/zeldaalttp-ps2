	THUMB_FUNC_START sub_080D84B0
sub_080D84B0: @ 0x080D84B0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D84C4
	b _080D85F0
_080D84C4:
	ldr r6, _080D8500  @ =gRam
	ldr r1, _080D8504  @ =0x00001052
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	beq _080D84E2
	b _080D85F0
_080D84E2:
	add r0, r4, #0
	bl sub_080C5044
	ldr r2, _080D8508  @ =0x00001042
	add r0, r6, r2
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	bne _080D850C
	add r0, r4, #0
	bl Sprite3_Move
	b _080D8524
_080D8500:
	.4byte gRam
_080D8504:
	.4byte 0x00001052
_080D8508:
	.4byte 0x00001042
_080D850C:
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	beq _080D851C
	ldr r1, _080D859C  @ =0x00000F22
	add r0, r6, r1
	add r0, r4, r0
	strb r5, [r0]
_080D851C:
	ldr r2, _080D85A0  @ =0x00000F12
	add r0, r6, r2
	add r0, r4, r0
	strb r5, [r0]
_080D8524:
	add r0, r4, #0
	bl sub_080C6F48
	ldr r5, _080D85A4  @ =gRam
	ldr r0, _080D85A8  @ =0x00000996
	add r6, r5, r0
	ldrb r0, [r6]
	add r1, r4, #0
	eor r1, r1, r0
	mov r0, #31
	and r1, r1, r0
	cmp r1, #0
	bne _080D856A
	ldr r1, _080D85AC  @ =0x00000F62
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r0, r4, #0
	bl sub_080C2CB4
	ldr r2, _080D85B0  @ =0x00000F72
	add r0, r5, r2
	add r0, r4, r0
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080D85B4  @ =0x00000F82
	add r0, r5, r1
	add r0, r4, r0
	add r2, r2, #1
	add r1, r5, r2
	ldrb r1, [r1]
	strb r1, [r0]
_080D856A:
	ldrb r0, [r6]
	add r1, r4, #0
	eor r1, r1, r0
	ldr r2, _080D85B8  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	and r1, r1, r0
	cmp r1, #0
	bne _080D85F0
	ldr r1, _080D85A0  @ =0x00000F12
	add r0, r5, r1
	add r3, r4, r0
	add r2, r2, #32
	add r0, r5, r2
	add r0, r4, r0
	ldrb r2, [r3]
	ldrb r0, [r0]
	sub r0, r2, r0
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080D85BC
	sub r0, r2, #1
	b _080D85BE
_080D859C:
	.4byte 0x00000F22
_080D85A0:
	.4byte 0x00000F12
_080D85A4:
	.4byte gRam
_080D85A8:
	.4byte 0x00000996
_080D85AC:
	.4byte 0x00000F62
_080D85B0:
	.4byte 0x00000F72
_080D85B4:
	.4byte 0x00000F82
_080D85B8:
	.4byte 0x00000F52
_080D85BC:
	add r0, r2, #1
_080D85BE:
	strb r0, [r3]
	ldr r0, _080D85E0  @ =gRam
	ldr r2, _080D85E4  @ =0x00000F22
	add r1, r0, r2
	add r3, r4, r1
	ldr r1, _080D85E8  @ =0x00000F82
	add r0, r0, r1
	add r0, r4, r0
	ldrb r2, [r3]
	ldrb r0, [r0]
	sub r0, r2, r0
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080D85EC
	sub r0, r2, #1
	b _080D85EE
_080D85E0:
	.4byte gRam
_080D85E4:
	.4byte 0x00000F22
_080D85E8:
	.4byte 0x00000F82
_080D85EC:
	add r0, r2, #1
_080D85EE:
	strb r0, [r3]
_080D85F0:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080D84B0

	.byte 0x00
	.byte 0x00

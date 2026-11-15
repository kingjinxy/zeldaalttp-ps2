	THUMB_FUNC_START sub_080D4578
sub_080D4578: @ 0x080D4578
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080D45AC  @ =gRam
	ldr r1, _080D45B0  @ =0x00000FD2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080D4656
	sub r1, r1, #176
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080D45B8
	ldr r1, _080D45B4  @ =0x00001122
	add r0, r2, r1
	add r0, r4, r0
	ldrb r2, [r0]
	mov r1, #191
	and r1, r1, r2
	strb r1, [r0]
	b _080D45CA
_080D45AC:
	.4byte gRam
_080D45B0:
	.4byte 0x00000FD2
_080D45B4:
	.4byte 0x00001122
_080D45B8:
	ldr r0, _080D4638  @ =0x00001122
	add r2, r2, r0
	add r2, r4, r2
	ldrb r1, [r2]
	mov r0, #191
	and r0, r0, r1
	mov r1, #64
	orr r0, r0, r1
	strb r0, [r2]
_080D45CA:
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D4656
	add r0, r4, #0
	bl sub_080C841C
	add r6, r0, #0
	cmp r6, #0
	bne _080D4656
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r5, _080D463C  @ =gRam
	ldr r1, _080D4640  @ =0x00001152
	add r0, r5, r1
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #2
	strb r0, [r2]
	sub r1, r1, #16
	add r0, r5, r1
	add r3, r4, r0
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080D4622
	strb r6, [r3]
	mov r0, #16
	strb r0, [r2]
	ldr r2, _080D4644  @ =0x00000FC2
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #12
	strb r1, [r0]
_080D4622:
	ldr r1, _080D4644  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _080D464C
	ldr r2, _080D4648  @ =0x00000F92
	add r0, r5, r2
	add r0, r4, r0
	b _080D4654
	.byte 0x00
	.byte 0x00
_080D4638:
	.4byte 0x00001122
_080D463C:
	.4byte gRam
_080D4640:
	.4byte 0x00001152
_080D4644:
	.4byte 0x00000FC2
_080D4648:
	.4byte 0x00000F92
_080D464C:
	ldr r1, _080D465C  @ =0x00000F92
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #1
_080D4654:
	strb r1, [r0]
_080D4656:
	pop {r4-r6}
	pop {r0}
	bx r0
_080D465C:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080D4578


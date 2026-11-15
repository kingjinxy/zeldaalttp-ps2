	THUMB_FUNC_START sub_080D9FD0
sub_080D9FD0: @ 0x080D9FD0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r3, r4, #0
	ldr r6, _080DA044  @ =gRam
	ldr r1, _080DA048  @ =0x00000F82
	add r0, r6, r1
	add r0, r4, r0
	ldrb r5, [r0]
	cmp r5, #0
	bne _080DA05C
	add r0, r4, #0
	bl sub_080DA660
	add r0, r4, #0
	bl sub_080DA390
	ldr r2, _080DA04C  @ =0x000010D2
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080DA020
	ldr r1, _080DA050  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	strb r5, [r0]
	ldr r2, _080DA054  @ =0x00000F72
	add r0, r6, r2
	add r0, r4, r0
	strb r5, [r0]
	add r1, r1, #64
	add r0, r6, r1
	add r0, r4, r0
	strb r5, [r0]
	add r2, r2, #80
	add r0, r6, r2
	add r0, r4, r0
	mov r1, #64
	strb r1, [r0]
_080DA020:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DA080
	ldr r1, _080DA058  @ =gUnknown_081759FC
	ldr r5, _080DA050  @ =0x00000F52
	add r0, r6, r5
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	b _080DA080
_080DA044:
	.4byte gRam
_080DA048:
	.4byte 0x00000F82
_080DA04C:
	.4byte 0x000010D2
_080DA050:
	.4byte 0x00000F52
_080DA054:
	.4byte 0x00000F72
_080DA058:
	.4byte gUnknown_081759FC
_080DA05C:
	ldr r1, _080DA088  @ =0x00000FC2
	add r0, r6, r1
	add r1, r4, r0
	ldrb r2, [r1]
	cmp r2, #0
	bne _080DA070
	ldr r5, _080DA08C  @ =0x00000FA2
	add r0, r6, r5
	add r0, r4, r0
	strb r2, [r0]
_080DA070:
	ldrb r1, [r1]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080DA080
	add r0, r3, #0
	bl sub_080DA660
_080DA080:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DA088:
	.4byte 0x00000FC2
_080DA08C:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080D9FD0


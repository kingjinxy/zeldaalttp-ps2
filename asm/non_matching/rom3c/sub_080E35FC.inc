	THUMB_FUNC_START sub_080E35FC
sub_080E35FC: @ 0x080E35FC
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r0, r6, #0
	bl sub_080E2614
	ldr r7, _080E3660  @ =gRam
	ldr r1, _080E3664  @ =0x00000FC2
	add r0, r7, r1
	add r4, r6, r0
	ldrb r0, [r4]
	cmp r0, #0
	bne _080E3658
	ldr r0, _080E3668  @ =0x00000F52
	add r1, r7, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl GetRandomInt
	mov r1, #127
	and r1, r1, r0
	add r1, r1, #80
	strb r1, [r4]
	ldr r1, _080E366C  @ =0x00000FB2
	add r4, r7, r1
	add r4, r6, r4
	ldrb r5, [r4]
	bl GetRandomInt
	mov r1, #3
	and r1, r1, r0
	strb r1, [r4]
	cmp r5, r1
	beq _080E3658
	eor r5, r5, r1
	mov r0, #2
	and r5, r5, r0
	cmp r5, #0
	bne _080E3658
	ldr r1, _080E3670  @ =0x00000FD2
	add r0, r7, r1
	add r0, r6, r0
	mov r1, #12
	strb r1, [r0]
_080E3658:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E3660:
	.4byte gRam
_080E3664:
	.4byte 0x00000FC2
_080E3668:
	.4byte 0x00000F52
_080E366C:
	.4byte 0x00000FB2
_080E3670:
	.4byte 0x00000FD2
	THUMB_FUNC_END sub_080E35FC


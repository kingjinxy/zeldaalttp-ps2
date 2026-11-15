	THUMB_FUNC_START sub_0802416C
sub_0802416C: @ 0x0802416C
	add r3, r0, #0
	ldrb r0, [r3, #23]
	sub r0, r0, #1
	strb r0, [r3, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080241AA
	mov r0, #3
	strb r0, [r3, #20]
	mov r0, #90
	strb r0, [r3, #23]
	ldr r1, _080241AC  @ =gUnknown_08427692
	ldr r0, _080241B0  @ =gUnknown_03006C80
	ldrb r0, [r0, #6]
	sub r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	str r0, [r3, #12]
	ldr r2, [r3, #84]
	add r2, r2, #125
	ldr r1, _080241B4  @ =gUnknown_08137B10
	add r0, r3, #0
	add r0, r0, #126
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldrb r1, [r2]
	orr r0, r0, r1
	strb r0, [r2]
_080241AA:
	bx lr
_080241AC:
	.4byte gUnknown_08427692
_080241B0:
	.4byte gUnknown_03006C80
_080241B4:
	.4byte gUnknown_08137B10
	THUMB_FUNC_END sub_0802416C


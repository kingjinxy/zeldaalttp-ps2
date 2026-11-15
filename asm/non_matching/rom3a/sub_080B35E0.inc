	THUMB_FUNC_START sub_080B35E0
sub_080B35E0: @ 0x080B35E0
	push {r4-r7,lr}
	ldr r6, [sp, #24]
	ldr r7, [sp, #28]
	lsl r0, r0, #3
	ldr r4, _080B3658  @ =gUnknown_03002780
	add r0, r0, r4
	ldr r5, _080B365C  @ =0x000001FF
	add r4, r5, #0
	and r1, r1, r4
	ldrh r5, [r0, #2]
	ldr r4, _080B3660  @ =0xFFFFFE00
	and r4, r4, r5
	orr r4, r4, r1
	strh r4, [r0, #2]
	strb r2, [r0]
	ldr r2, _080B3664  @ =0x000003FF
	add r1, r2, #0
	and r3, r3, r1
	ldrh r2, [r0, #4]
	ldr r1, _080B3668  @ =0xFFFFFC00
	and r1, r1, r2
	orr r1, r1, r3
	strh r1, [r0, #4]
	ldr r4, [sp, #20]
	lsl r2, r4, #4
	ldrb r1, [r0, #5]
	mov r3, #15
	and r3, r3, r1
	orr r3, r3, r2
	mov r4, #1
	and r6, r6, r4
	lsl r6, r6, #4
	ldrb r2, [r0, #3]
	mov r1, #17
	neg r1, r1
	and r1, r1, r2
	orr r1, r1, r6
	and r7, r7, r4
	lsl r4, r7, #5
	mov r2, #33
	neg r2, r2
	and r1, r1, r2
	orr r1, r1, r4
	ldr r5, [sp, #32]
	lsl r4, r5, #6
	mov r2, #63
	and r1, r1, r2
	orr r1, r1, r4
	strb r1, [r0, #3]
	sub r2, r2, #76
	mov r1, #0
	strb r1, [r0, #1]
	and r3, r3, r2
	mov r1, #8
	orr r3, r3, r1
	strb r3, [r0, #5]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B3658:
	.4byte gUnknown_03002780
_080B365C:
	.4byte 0x000001FF
_080B3660:
	.4byte 0xFFFFFE00
_080B3664:
	.4byte 0x000003FF
_080B3668:
	.4byte 0xFFFFFC00
	THUMB_FUNC_END sub_080B35E0


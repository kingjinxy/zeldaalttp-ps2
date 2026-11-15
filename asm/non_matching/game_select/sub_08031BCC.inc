	THUMB_FUNC_START sub_08031BCC
sub_08031BCC: @ 0x08031BCC
	push {lr}
	lsl r0, r0, #16
	lsr r0, r0, #16
	bl sub_0800D67C
	ldr r3, _08031BFC  @ =gUnknown_02000010
	ldrb r2, [r3, #3]
	mov r1, #32
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #1
	orr r0, r0, r2
	strb r0, [r3, #3]
	ldrb r0, [r3, #4]
	and r1, r1, r0
	mov r0, #14
	orr r1, r1, r0
	strb r1, [r3, #4]
	bl sub_08031F08
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08031BFC:
	.4byte gUnknown_02000010
	THUMB_FUNC_END sub_08031BCC


	THUMB_FUNC_START sub_0812A5D0
sub_0812A5D0: @ 0x0812A5D0
	push {lr}
	ldr r0, _0812A5EC  @ =0x0000FFFF
	add r3, r0, #0
	ldr r1, _0812A5F0  @ =gUnknown_03000118
	mov r2, #18
_0812A5DA:
	ldrh r0, [r1]
	orr r0, r0, r3
	strh r0, [r1]
	add r1, r1, #2
	sub r2, r2, #1
	cmp r2, #0
	bge _0812A5DA
	pop {r0}
	bx r0
_0812A5EC:
	.4byte 0x0000FFFF
_0812A5F0:
	.4byte gUnknown_03000118
	THUMB_FUNC_END sub_0812A5D0


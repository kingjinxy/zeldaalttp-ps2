	THUMB_FUNC_START sub_0802D954
sub_0802D954: @ 0x0802D954
	push {lr}
	ldr r0, _0802D968  @ =gUnknown_0201EF18
	mov r1, #8
	bl zero_memory
	ldr r1, _0802D96C  @ =gUnknown_03000E20
	mov r0, #0
	strb r0, [r1, #17]
	pop {r0}
	bx r0
_0802D968:
	.4byte gUnknown_0201EF18
_0802D96C:
	.4byte gUnknown_03000E20
	THUMB_FUNC_END sub_0802D954


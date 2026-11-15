	THUMB_FUNC_START sub_0800D1A0
sub_0800D1A0: @ 0x0800D1A0
	push {r4,lr}
	ldr r4, _0800D1BC  @ =gUnknown_0201EDA8
	add r0, r4, #0
	mov r1, #8
	bl zero_memory
	mov r0, #0
	strh r0, [r4, #2]
	mov r0, #128
	lsl r0, r0, #1
	strh r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
_0800D1BC:
	.4byte gUnknown_0201EDA8
	THUMB_FUNC_END sub_0800D1A0


	THUMB_FUNC_START sub_0802B74C
sub_0802B74C: @ 0x0802B74C
	push {lr}
	ldr r0, _0802B76C  @ =gUnknown_03000E20
	ldrb r0, [r0, #18]
	cmp r0, #0
	bne _0802B766
	ldr r1, _0802B770  @ =gUnknown_0813D678
	ldr r0, _0802B774  @ =gUnknown_0202A770
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
_0802B766:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802B76C:
	.4byte gUnknown_03000E20
_0802B770:
	.4byte gUnknown_0813D678
_0802B774:
	.4byte gUnknown_0202A770
	THUMB_FUNC_END sub_0802B74C


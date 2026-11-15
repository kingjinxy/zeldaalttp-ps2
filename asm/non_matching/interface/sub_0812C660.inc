	THUMB_FUNC_START sub_0812C660
sub_0812C660: @ 0x0812C660
	push {lr}
	ldr r2, _0812C67C  @ =gUnknown_030003C0
	ldr r0, [r2]
	add r0, r0, #12
	str r0, [r2]
	ldr r1, _0812C680  @ =gUnknown_030003C8
	ldr r1, [r1]
	cmp r0, r1
	bne _0812C676
	ldr r0, _0812C684  @ =gUnknown_03000188
	str r0, [r2]
_0812C676:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812C67C:
	.4byte gUnknown_030003C0
_0812C680:
	.4byte gUnknown_030003C8
_0812C684:
	.4byte gUnknown_03000188
	THUMB_FUNC_END sub_0812C660


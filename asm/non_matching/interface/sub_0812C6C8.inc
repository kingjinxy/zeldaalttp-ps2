	THUMB_FUNC_START sub_0812C6C8
sub_0812C6C8: @ 0x0812C6C8
	push {lr}
	ldr r3, _0812C6DC  @ =gUnknown_030003BC
	ldr r2, [r3]
	ldr r0, _0812C6E0  @ =gUnknown_030003C4
	ldr r0, [r0]
	cmp r2, r0
	bne _0812C6E4
	mov r0, #0
	b _0812C6F8
	.byte 0x00
	.byte 0x00
_0812C6DC:
	.4byte gUnknown_030003BC
_0812C6E0:
	.4byte gUnknown_030003C4
_0812C6E4:
	add r0, r2, #0
	add r0, r0, #12
	str r0, [r3]
	ldr r1, _0812C6FC  @ =gUnknown_030003C8
	ldr r1, [r1]
	cmp r0, r1
	bne _0812C6F6
	ldr r0, _0812C700  @ =gUnknown_03000188
	str r0, [r3]
_0812C6F6:
	add r0, r2, #0
_0812C6F8:
	pop {r1}
	bx r1
_0812C6FC:
	.4byte gUnknown_030003C8
_0812C700:
	.4byte gUnknown_03000188
	THUMB_FUNC_END sub_0812C6C8


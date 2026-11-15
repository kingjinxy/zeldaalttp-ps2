	THUMB_FUNC_START sub_0812C688
sub_0812C688: @ 0x0812C688
	ldr r0, _0812C6AC  @ =gUnknown_030003BC
	ldr r1, _0812C6B0  @ =gUnknown_03000188
	str r1, [r0]
	ldr r0, _0812C6B4  @ =gUnknown_030003C0
	str r1, [r0]
	ldr r0, _0812C6B8  @ =gUnknown_030003C4
	str r1, [r0]
	ldr r0, _0812C6BC  @ =gUnknown_030003C8
	mov r2, #138
	lsl r2, r2, #2
	add r1, r1, r2
	str r1, [r0]
	ldr r0, _0812C6C0  @ =gUnknown_03000180
	mov r1, #0
	str r1, [r0]
	ldr r0, _0812C6C4  @ =gUnknown_03000184
	str r1, [r0]
	bx lr
_0812C6AC:
	.4byte gUnknown_030003BC
_0812C6B0:
	.4byte gUnknown_03000188
_0812C6B4:
	.4byte gUnknown_030003C0
_0812C6B8:
	.4byte gUnknown_030003C4
_0812C6BC:
	.4byte gUnknown_030003C8
_0812C6C0:
	.4byte gUnknown_03000180
_0812C6C4:
	.4byte gUnknown_03000184
	THUMB_FUNC_END sub_0812C688


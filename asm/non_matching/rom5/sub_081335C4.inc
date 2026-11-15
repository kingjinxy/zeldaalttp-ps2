	THUMB_FUNC_START sub_081335C4
sub_081335C4: @ 0x081335C4
	push {lr}
	mov r0, #32
	mov r1, #128
	bl sub_081318E0
	mov r0, #128
	lsl r0, r0, #1
	mov r1, #192
	lsl r1, r1, #1
	bl sub_081318E0
	ldr r1, _081335EC  @ =gUnknown_02000C00
	ldr r0, _081335F0  @ =gUnknown_02000C40
	ldrh r0, [r0]
	strh r0, [r1]
	bl sub_08131A50
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081335EC:
	.4byte gUnknown_02000C00
_081335F0:
	.4byte gUnknown_02000C40
	THUMB_FUNC_END sub_081335C4


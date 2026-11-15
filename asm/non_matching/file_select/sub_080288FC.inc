	THUMB_FUNC_START sub_080288FC
sub_080288FC: @ 0x080288FC
	add r2, r0, #0
	ldr r1, _0802891C  @ =gUnknown_0201F000
	add r0, r0, #82
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r1, [r2, #96]
	and r0, r0, r1
	cmp r0, r1
	bne _08028918
	ldrb r0, [r2, #20]
	add r0, r0, #1
	strb r0, [r2, #20]
_08028918:
	bx lr
	.byte 0x00
	.byte 0x00
_0802891C:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_080288FC


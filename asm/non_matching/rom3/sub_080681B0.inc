	THUMB_FUNC_START sub_080681B0
sub_080681B0: @ 0x080681B0
	ldr r3, _080681C8  @ =gUnknown_0814C6B4
	ldr r2, _080681CC  @ =gUnknown_03000009
	mov r1, #7
_080681B6:
	ldrb r0, [r3]
	strb r0, [r2]
	add r3, r3, #1
	add r2, r2, #1
	sub r1, r1, #1
	cmp r1, #0
	bne _080681B6
	bx lr
	.byte 0x00
	.byte 0x00
_080681C8:
	.4byte gUnknown_0814C6B4
_080681CC:
	.4byte gUnknown_03000009
	THUMB_FUNC_END sub_080681B0


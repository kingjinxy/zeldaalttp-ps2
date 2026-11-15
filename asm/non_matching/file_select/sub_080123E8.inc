	THUMB_FUNC_START sub_080123E8
sub_080123E8: @ 0x080123E8
	ldr r1, _08012400  @ =gEntityList
	mov r2, #232
	lsl r2, r2, #6
	add r0, r1, r2
	cmp r1, r0
	bcs _0801240A
	add r2, r0, #0
_080123F6:
	ldr r0, [r1]
	cmp r0, #0
	bne _08012404
	add r0, r1, #0
	b _0801240C
_08012400:
	.4byte gEntityList
_08012404:
	add r1, r1, #128
	cmp r1, r2
	bcc _080123F6
_0801240A:
	mov r0, #0
_0801240C:
	bx lr
	THUMB_FUNC_END sub_080123E8

	.byte 0x00
	.byte 0x00

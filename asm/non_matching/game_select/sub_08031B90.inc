	THUMB_FUNC_START sub_08031B90
sub_08031B90: @ 0x08031B90
	ldr r0, _08031BA0  @ =gUnknown_03006C80
	ldr r1, [r0, #8]
	ldr r0, _08031BA4  @ =0x000003E7
	cmp r1, r0
	bhi _08031BA8
	mov r0, #0
	b _08031BCA
	.byte 0x00
	.byte 0x00
_08031BA0:
	.4byte gUnknown_03006C80
_08031BA4:
	.4byte 0x000003E7
_08031BA8:
	ldr r0, _08031BB4  @ =0x00000BB7
	cmp r1, r0
	bhi _08031BB8
	mov r0, #1
	b _08031BCA
	.byte 0x00
	.byte 0x00
_08031BB4:
	.4byte 0x00000BB7
_08031BB8:
	ldr r0, _08031BC4  @ =0x00001387
	cmp r1, r0
	bls _08031BC8
	mov r0, #3
	b _08031BCA
	.byte 0x00
	.byte 0x00
_08031BC4:
	.4byte 0x00001387
_08031BC8:
	mov r0, #2
_08031BCA:
	bx lr
	THUMB_FUNC_END sub_08031B90


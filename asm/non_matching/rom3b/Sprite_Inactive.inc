	THUMB_FUNC_START Sprite_Inactive
Sprite_Inactive: @ 0x080C3858
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080C387C  @ =gRam
	ldr r3, _080C3880  @ =0x000009B2
	add r0, r1, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080C388C
	lsl r0, r2, #1
	ldr r2, _080C3884  @ =0x00001192
	add r1, r1, r2
	add r0, r0, r1
	ldr r1, _080C3888  @ =0x0000FFFF
	b _080C3896
	.byte 0x00
	.byte 0x00
_080C387C:
	.4byte gRam
_080C3880:
	.4byte 0x000009B2
_080C3884:
	.4byte 0x00001192
_080C3888:
	.4byte 0x0000FFFF
_080C388C:
	lsl r0, r2, #1
	ldr r3, _080C389C  @ =0x00001192
	add r1, r1, r3
	add r0, r0, r1
	mov r1, #255
_080C3896:
	strh r1, [r0]
	pop {r0}
	bx r0
_080C389C:
	.4byte 0x00001192
	THUMB_FUNC_END Sprite_Inactive


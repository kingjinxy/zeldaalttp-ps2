	THUMB_FUNC_START sub_080B8270
sub_080B8270: @ 0x080B8270
	push {lr}
	bl sub_08072F1C
	ldr r1, _080B82A0  @ =gRam
	ldr r0, _080B82A4  @ =0x00000A3E
	add r2, r1, r0
	mov r0, #255
	strb r0, [r2]
	ldr r0, _080B82A8  @ =0x00000A3C
	add r2, r1, r0
	mov r0, #31
	strh r0, [r2]
	ldr r0, _080B82AC  @ =0x000009AD
	add r2, r1, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	ldr r0, _080B82B0  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r0}
	bx r0
_080B82A0:
	.4byte gRam
_080B82A4:
	.4byte 0x00000A3E
_080B82A8:
	.4byte 0x00000A3C
_080B82AC:
	.4byte 0x000009AD
_080B82B0:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_080B8270


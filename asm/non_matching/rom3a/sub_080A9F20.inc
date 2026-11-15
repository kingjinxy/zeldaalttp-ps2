	THUMB_FUNC_START sub_080A9F20
sub_080A9F20: @ 0x080A9F20
	push {lr}
	ldr r3, _080A9F48  @ =gRam
	ldr r0, _080A9F4C  @ =0x0000095A
	add r2, r3, r0
	ldrh r0, [r2]
	sub r0, r0, #8
	strh r0, [r2]
	lsl r0, r0, #16
	ldr r1, _080A9F50  @ =0xFF4C0000
	cmp r0, r1
	bne _080A9F44
	ldr r0, _080A9F54  @ =0x0000FF48
	strh r0, [r2]
	ldr r0, _080A9F58  @ =0x00000A4C
	add r1, r3, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_080A9F44:
	pop {r0}
	bx r0
_080A9F48:
	.4byte gRam
_080A9F4C:
	.4byte 0x0000095A
_080A9F50:
	.4byte 0xFF4C0000
_080A9F54:
	.4byte 0x0000FF48
_080A9F58:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_080A9F20


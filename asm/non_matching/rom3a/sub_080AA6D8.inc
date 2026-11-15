	THUMB_FUNC_START sub_080AA6D8
sub_080AA6D8: @ 0x080AA6D8
	push {lr}
	ldr r0, _080AA6F0  @ =gRam
	ldr r1, _080AA6F4  @ =0x00000A4C
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _080AA6EA
	bl sub_080A7228
_080AA6EA:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AA6F0:
	.4byte gRam
_080AA6F4:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_080AA6D8


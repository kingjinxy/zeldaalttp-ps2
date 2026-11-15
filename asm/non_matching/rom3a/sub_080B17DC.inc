	THUMB_FUNC_START sub_080B17DC
sub_080B17DC: @ 0x080B17DC
	push {lr}
	ldr r1, _080B17F4  @ =gRam
	ldr r0, _080B17F8  @ =0x000009AD
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl sub_080B0C28
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B17F4:
	.4byte gRam
_080B17F8:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080B17DC


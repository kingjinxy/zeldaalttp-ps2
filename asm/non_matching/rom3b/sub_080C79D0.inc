	THUMB_FUNC_START sub_080C79D0
sub_080C79D0: @ 0x080C79D0
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080C6F48
	ldr r0, _080C79F0  @ =gRam
	ldr r1, _080C79F4  @ =0x00001042
	add r0, r0, r1
	add r4, r4, r0
	ldrb r0, [r4]
	pop {r4}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080C79F0:
	.4byte gRam
_080C79F4:
	.4byte 0x00001042
	THUMB_FUNC_END sub_080C79D0


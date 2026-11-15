	THUMB_FUNC_START sub_080C5298
sub_080C5298: @ 0x080C5298
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080C52D0  @ =gRam
	ldr r3, _080C52D4  @ =0x00000FF2
	add r1, r2, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #4
	ldr r3, _080C52D8  @ =0x00000EC5
	add r2, r2, r3
	ldrb r2, [r2]
	orr r1, r1, r2
	ldr r3, _080C52DC  @ =gUnknown_0200BBA0
	add r1, r1, r3
	ldrb r1, [r1]
	ldr r3, _080C52E0  @ =gUnknown_0817E924
	lsl r2, r2, #3
	orr r1, r1, r2
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r1, r1, r3
	ldrb r1, [r1]
	bl sub_080C414C
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C52D0:
	.4byte gRam
_080C52D4:
	.4byte 0x00000FF2
_080C52D8:
	.4byte 0x00000EC5
_080C52DC:
	.4byte gUnknown_0200BBA0
_080C52E0:
	.4byte gUnknown_0817E924
	THUMB_FUNC_END sub_080C5298


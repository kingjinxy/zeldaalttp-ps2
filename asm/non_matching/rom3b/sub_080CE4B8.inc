	THUMB_FUNC_START sub_080CE4B8
sub_080CE4B8: @ 0x080CE4B8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080CE4D4  @ =gRam
	ldr r2, _080CE4D8  @ =0x000012FE
	add r1, r1, r2
	add r1, r0, r1
	ldrb r1, [r1]
	lsr r1, r1, #1
	bl sub_080CE6E4
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CE4D4:
	.4byte gRam
_080CE4D8:
	.4byte 0x000012FE
	THUMB_FUNC_END sub_080CE4B8


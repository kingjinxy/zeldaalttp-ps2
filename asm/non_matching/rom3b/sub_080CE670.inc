	THUMB_FUNC_START sub_080CE670
sub_080CE670: @ 0x080CE670
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080CE688  @ =gRam
	ldr r2, _080CE68C  @ =0x000012FE
	add r1, r1, r2
	add r1, r0, r1
	ldrb r1, [r1]
	bl sub_080CE690
	pop {r0}
	bx r0
_080CE688:
	.4byte gRam
_080CE68C:
	.4byte 0x000012FE
	THUMB_FUNC_END sub_080CE670


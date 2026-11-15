	THUMB_FUNC_START sub_080CE62C
sub_080CE62C: @ 0x080CE62C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080CE648  @ =gRam
	ldr r2, _080CE64C  @ =0x000012FE
	add r1, r1, r2
	add r1, r0, r1
	ldrb r1, [r1]
	lsr r1, r1, #1
	bl sub_080CE690
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CE648:
	.4byte gRam
_080CE64C:
	.4byte 0x000012FE
	THUMB_FUNC_END sub_080CE62C


	THUMB_FUNC_START sub_080DF2E8
sub_080DF2E8: @ 0x080DF2E8
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080DF3FC
	ldr r0, _080DF30C  @ =gRam
	ldr r1, _080DF310  @ =0x00001172
	add r0, r0, r1
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DF30C:
	.4byte gRam
_080DF310:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080DF2E8


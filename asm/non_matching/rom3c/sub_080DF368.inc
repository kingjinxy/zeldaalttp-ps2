	THUMB_FUNC_START sub_080DF368
sub_080DF368: @ 0x080DF368
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080DF38C  @ =gRam
	ldr r1, _080DF390  @ =0x00000FC2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _080DF384
	ldr r4, _080DF394  @ =0x00000F52
	add r0, r3, r4
	add r0, r2, r0
	strb r1, [r0]
_080DF384:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DF38C:
	.4byte gRam
_080DF390:
	.4byte 0x00000FC2
_080DF394:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DF368


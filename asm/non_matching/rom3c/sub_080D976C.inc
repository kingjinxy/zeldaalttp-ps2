	THUMB_FUNC_START sub_080D976C
sub_080D976C: @ 0x080D976C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080ED830
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D9792
	ldr r1, _080D9798  @ =gRam
	ldr r0, _080D979C  @ =0x00001172
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080D97A0
_080D9792:
	pop {r4}
	pop {r0}
	bx r0
_080D9798:
	.4byte gRam
_080D979C:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080D976C


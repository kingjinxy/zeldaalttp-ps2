	THUMB_FUNC_START sub_080D2A6C
sub_080D2A6C: @ 0x080D2A6C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080D2AA4  @ =gRam
	ldr r1, _080D2AA8  @ =0x00000EE2
	add r5, r3, r1
	add r5, r0, r5
	ldrb r2, [r5]
	add r1, r1, #32
	add r4, r3, r1
	add r4, r0, r4
	ldrb r1, [r4]
	lsl r1, r1, #8
	add r2, r2, r1
	sub r2, r2, #8
	ldr r1, _080D2AAC  @ =0x00001172
	add r3, r3, r1
	add r0, r0, r3
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	strb r2, [r5]
	lsr r2, r2, #8
	strb r2, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D2AA4:
	.4byte gRam
_080D2AA8:
	.4byte 0x00000EE2
_080D2AAC:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080D2A6C


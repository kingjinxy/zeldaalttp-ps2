	THUMB_FUNC_START sub_080ED938
sub_080ED938: @ 0x080ED938
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r3, _080ED96C  @ =gRam
	ldr r4, _080ED970  @ =0x00000FC2
	add r2, r3, r4
	add r2, r0, r2
	strb r1, [r2]
	ldr r4, _080ED974  @ =0x000010C2
	add r2, r3, r4
	add r2, r0, r2
	strb r1, [r2]
	ldr r1, _080ED978  @ =0x00001649
	add r3, r3, r1
	ldrb r1, [r3]
	add r1, r1, #1
	strb r1, [r3]
	mov r1, #96
	bl sub_080CF140
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080ED96C:
	.4byte gRam
_080ED970:
	.4byte 0x00000FC2
_080ED974:
	.4byte 0x000010C2
_080ED978:
	.4byte 0x00001649
	THUMB_FUNC_END sub_080ED938


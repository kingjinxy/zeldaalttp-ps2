	THUMB_FUNC_START sub_080DD314
sub_080DD314: @ 0x080DD314
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl Sprite3_Move
	ldr r1, _080DD340  @ =gUnknown_08176168
	ldr r0, _080DD344  @ =gRam
	ldr r2, _080DD348  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	pop {r4}
	pop {r0}
	bx r0
_080DD340:
	.4byte gUnknown_08176168
_080DD344:
	.4byte gRam
_080DD348:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DD314


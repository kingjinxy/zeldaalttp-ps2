	THUMB_FUNC_START sub_080DD264
sub_080DD264: @ 0x080DD264
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080DD1CC
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DD294
	ldr r1, _080DD29C  @ =gUnknown_08176154
	ldr r0, _080DD2A0  @ =gRam
	ldr r2, _080DD2A4  @ =0x00001052
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080DD294:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DD29C:
	.4byte gUnknown_08176154
_080DD2A0:
	.4byte gRam
_080DD2A4:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080DD264


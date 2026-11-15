	THUMB_FUNC_START sub_080DD948
sub_080DD948: @ 0x080DD948
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080DD968  @ =gUnknown_08176220
	ldr r1, _080DD96C  @ =gRam
	ldr r3, _080DD970  @ =0x00001052
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080DD968:
	.4byte gUnknown_08176220
_080DD96C:
	.4byte gRam
_080DD970:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080DD948


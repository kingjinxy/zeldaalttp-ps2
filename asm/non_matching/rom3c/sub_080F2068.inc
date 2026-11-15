	THUMB_FUNC_START sub_080F2068
sub_080F2068: @ 0x080F2068
	push {r4,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r4, r1, #0
	ldr r0, _080F2090  @ =gRam
	ldr r2, _080F2094  @ =0x00000F52
	add r0, r0, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #1
	bhi _080F2084
	add r0, r1, #0
	bl sub_080F2098
_080F2084:
	add r0, r4, #0
	bl sub_080F11D4
	pop {r4}
	pop {r0}
	bx r0
_080F2090:
	.4byte gRam
_080F2094:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F2068


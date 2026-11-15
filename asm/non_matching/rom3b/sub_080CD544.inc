	THUMB_FUNC_START sub_080CD544
sub_080CD544: @ 0x080CD544
	push {r4,r5,lr}
	add r5, r0, #0
	add r4, r1, #0
	lsl r5, r5, #24
	lsr r5, r5, #24
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r5, #0
	bl sub_080CBFA0
	ldr r0, _080CD570  @ =gUnknown_08172978
	sub r4, r4, #1
	lsl r4, r4, #2
	add r4, r4, r0
	ldr r1, [r4]
	add r0, r5, #0
	bl _call_via_r1
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CD570:
	.4byte gUnknown_08172978
	THUMB_FUNC_END sub_080CD544


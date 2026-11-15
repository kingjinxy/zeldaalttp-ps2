	THUMB_FUNC_START sub_080F3904
sub_080F3904: @ 0x080F3904
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080F3924  @ =gUnknown_081792C8
	ldr r1, _080F3928  @ =gRam
	ldr r3, _080F392C  @ =0x00000F52
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080F3924:
	.4byte gUnknown_081792C8
_080F3928:
	.4byte gRam
_080F392C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F3904


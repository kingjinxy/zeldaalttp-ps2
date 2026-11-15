	THUMB_FUNC_START sub_080F17D4
sub_080F17D4: @ 0x080F17D4
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080F17F4  @ =gUnknown_08178E6C
	ldr r1, _080F17F8  @ =gRam
	ldr r3, _080F17FC  @ =0x00000F52
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080F17F4:
	.4byte gUnknown_08178E6C
_080F17F8:
	.4byte gRam
_080F17FC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F17D4


	THUMB_FUNC_START sub_08126E10
sub_08126E10: @ 0x08126E10
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r0, _08126E38  @ =gUnknown_03000050
	add r0, r0, #16
	add r1, r2, r0
	ldrb r0, [r1]
	cmp r0, #0
	beq _08126E32
	ldr r0, _08126E3C  @ =gUnknown_08180758
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r2, #0
	bl _call_via_r1
_08126E32:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08126E38:
	.4byte gUnknown_03000050
_08126E3C:
	.4byte gUnknown_08180758
	THUMB_FUNC_END sub_08126E10


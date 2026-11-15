	THUMB_FUNC_START sub_080F41E0
sub_080F41E0: @ 0x080F41E0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080F40C0
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F422A
	add r0, r4, #0
	bl sub_080C5080
	add r0, r4, #0
	bl sub_080C90F4
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F4212
	add r0, r4, #0
	bl Sprite3_Move
_080F4212:
	ldr r1, _080F4230  @ =gUnknown_08179578
	ldr r0, _080F4234  @ =gRam
	ldr r2, _080F4238  @ =0x00001052
	add r0, r0, r2
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
_080F422A:
	pop {r4,r5}
	pop {r0}
	bx r0
_080F4230:
	.4byte gUnknown_08179578
_080F4234:
	.4byte gRam
_080F4238:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080F41E0


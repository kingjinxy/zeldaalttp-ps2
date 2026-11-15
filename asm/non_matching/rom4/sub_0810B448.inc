	THUMB_FUNC_START sub_0810B448
sub_0810B448: @ 0x0810B448
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_0810B154
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810B47E
	ldr r0, _0810B484  @ =gRam
	ldr r1, _0810B488  @ =0x00000F52
	add r0, r0, r1
	add r1, r4, r0
	ldrb r0, [r1]
	cmp r0, #2
	beq _0810B47E
	ldr r0, _0810B48C  @ =gUnknown_0817CAB4
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r4, #0
	bl _call_via_r1
_0810B47E:
	pop {r4}
	pop {r0}
	bx r0
_0810B484:
	.4byte gRam
_0810B488:
	.4byte 0x00000F52
_0810B48C:
	.4byte gUnknown_0817CAB4
	THUMB_FUNC_END sub_0810B448


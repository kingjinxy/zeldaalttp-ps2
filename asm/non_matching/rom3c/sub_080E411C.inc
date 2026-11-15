	THUMB_FUNC_START sub_080E411C
sub_080E411C: @ 0x080E411C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _080E4144  @ =gRam
	ldr r2, _080E4148  @ =0x00000F52
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E4152
	add r2, r2, #64
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #13
	bhi _080E414C
	add r0, r4, #0
	bl sub_080E4018
	b _080E4152
_080E4144:
	.4byte gRam
_080E4148:
	.4byte 0x00000F52
_080E414C:
	add r0, r4, #0
	bl sub_080E4240
_080E4152:
	add r0, r4, #0
	bl sub_080E4160
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E411C

	.byte 0x00
	.byte 0x00

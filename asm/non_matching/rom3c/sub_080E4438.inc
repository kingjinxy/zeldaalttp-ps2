	THUMB_FUNC_START sub_080E4438
sub_080E4438: @ 0x080E4438
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _080E4458  @ =gRam
	ldr r1, _080E445C  @ =0x00000F52
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E4466
	cmp r0, #2
	beq _080E4460
	add r0, r4, #0
	bl sub_080E4018
	b _080E4466
_080E4458:
	.4byte gRam
_080E445C:
	.4byte 0x00000F52
_080E4460:
	add r0, r4, #0
	bl sub_080E4354
_080E4466:
	add r0, r4, #0
	bl sub_080E4160
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E4438

	.byte 0x00
	.byte 0x00

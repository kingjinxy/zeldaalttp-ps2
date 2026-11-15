	THUMB_FUNC_START sub_080E15E0
sub_080E15E0: @ 0x080E15E0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E163E
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E163E
	ldr r1, _080E1618  @ =gRam
	ldr r2, _080E161C  @ =0x00000FE2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E1620
	add r0, r4, #0
	bl sub_080E15A8
	b _080E163E
	.byte 0x00
	.byte 0x00
_080E1618:
	.4byte gRam
_080E161C:
	.4byte 0x00000FE2
_080E1620:
	ldr r2, _080E1634  @ =0x00000F52
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #2
	beq _080E1638
	add r0, r4, #0
	bl sub_080E1190
	b _080E163E
_080E1634:
	.4byte 0x00000F52
_080E1638:
	add r0, r5, #0
	bl sub_080E1264
_080E163E:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E15E0


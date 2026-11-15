	THUMB_FUNC_START sub_08128634
sub_08128634: @ 0x08128634
	push {r4,r5,lr}
	ldr r4, _08128660  @ =gUnknown_03003D12
_08128638:
	mov r5, #0
	ldrb r0, [r4]
	cmp r0, #31
	bls _08128642
	strb r5, [r4]
_08128642:
	ldrb r1, [r4]
	ldr r2, _08128664  @ =gBow
	add r0, r1, r2
	ldrb r2, [r0]
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	bne _08128656
	cmp r2, #0
	bne _08128682
_08128656:
	cmp r1, #32
	beq _08128668
	add r0, r1, #1
	strb r0, [r4]
	b _08128638
_08128660:
	.4byte gUnknown_03003D12
_08128664:
	.4byte gBow
_08128668:
	ldr r0, _08128678  @ =gUnknown_02002341
	ldrb r0, [r0]
	cmp r0, #0
	beq _0812867C
	mov r0, #32
	bl sub_08128694
	b _08128688
_08128678:
	.4byte gUnknown_02002341
_0812867C:
	mov r0, #33
	strb r0, [r4]
	b _08128638
_08128682:
	add r0, r1, #0
	bl sub_08128694
_08128688:
	cmp r5, #0
	bne _08128638
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08128634

	.byte 0x00
	.byte 0x00

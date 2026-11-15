	THUMB_FUNC_START sub_08013754
sub_08013754: @ 0x08013754
	push {r4-r7,lr}
	lsl r0, r0, #16
	lsr r6, r0, #16
	lsl r1, r1, #16
	lsr r5, r1, #16
	lsl r2, r2, #16
	lsr r4, r2, #16
	mov r2, #0
	ldr r1, _0801379C  @ =gUnknown_0202A580
_08013766:
	lsl r0, r2, #1
	add r0, r0, r2
	lsl r0, r0, #2
	add r0, r0, r1
	ldrh r3, [r0, #4]
	cmp r6, r3
	bne _08013780
	ldrb r3, [r0, #6]
	cmp r5, r3
	bne _08013780
	ldrb r3, [r0, #7]
	cmp r4, r3
	beq _080137D0
_08013780:
	add r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
	cmp r2, #7
	bls _08013766
	add r0, r6, #0
	add r1, r5, #0
	add r2, r4, #0
	bl sub_080136D4
	add r3, r0, #0
	cmp r3, #0
	bne _080137AC
	b _080137CE
_0801379C:
	.4byte gUnknown_0202A580
_080137A0:
	str r3, [r0]
	strh r6, [r0, #4]
	strb r5, [r0, #6]
	strb r4, [r0, #7]
	strh r1, [r0, #8]
	b _080137D0
_080137AC:
	mov r2, #0
	ldr r7, _080137D8  @ =gUnknown_0202A580
_080137B0:
	lsl r0, r2, #1
	add r0, r0, r2
	lsl r0, r0, #2
	add r0, r0, r7
	ldr r1, [r0]
	cmp r1, #0
	beq _080137A0
	add r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
	cmp r2, #7
	bls _080137B0
	add r0, r3, #0
	bl sub_0800BE50
_080137CE:
	mov r0, #0
_080137D0:
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080137D8:
	.4byte gUnknown_0202A580
	THUMB_FUNC_END sub_08013754


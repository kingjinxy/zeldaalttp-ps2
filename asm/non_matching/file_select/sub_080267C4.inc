	THUMB_FUNC_START sub_080267C4
sub_080267C4: @ 0x080267C4
	push {r4-r6,lr}
	add r6, r0, #0
	bl sub_080269F8
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	beq _080268C8
	ldr r3, _0802687C  @ =gUnknown_03006A30
	mov r0, #1
	and r0, r0, r2
	cmp r0, #0
	beq _080267EC
	ldrh r1, [r3, #54]
	mov r0, #144
	and r0, r0, r1
	cmp r0, #0
	beq _080267EC
	mov r0, #254
	and r2, r2, r0
_080267EC:
	add r3, r3, #144
	mov r0, #2
	and r0, r0, r2
	cmp r0, #0
	beq _08026804
	ldrh r1, [r3, #54]
	mov r0, #144
	and r0, r0, r1
	cmp r0, #0
	beq _08026804
	mov r0, #253
	and r2, r2, r0
_08026804:
	add r3, r3, #144
	mov r0, #4
	and r0, r0, r2
	cmp r0, #0
	beq _0802681C
	ldrh r1, [r3, #54]
	mov r0, #144
	and r0, r0, r1
	cmp r0, #0
	beq _0802681C
	mov r0, #251
	and r2, r2, r0
_0802681C:
	add r3, r3, #144
	mov r0, #8
	and r0, r0, r2
	cmp r0, #0
	beq _08026834
	ldrh r1, [r3, #54]
	mov r0, #144
	and r0, r0, r1
	cmp r0, #0
	beq _08026834
	mov r0, #247
	and r2, r2, r0
_08026834:
	cmp r2, #0
	beq _080268C8
	ldr r0, _08026880  @ =gUnknown_0201F000
	add r1, r6, #0
	add r1, r1, #82
	ldrb r2, [r1]
	lsl r2, r2, #2
	add r2, r2, r0
	ldr r1, _08026884  @ =gUnknown_08137B10
	ldrb r0, [r6, #10]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r2]
	ldr r0, [r0]
	orr r1, r1, r0
	str r1, [r2]
	add r0, r6, #0
	mov r1, #18
	bl 0x08003E10
	ldrb r0, [r6, #11]
	cmp r0, #0
	beq _0802688C
	mov r0, #2
	strb r0, [r6, #20]
	ldr r0, _08026888  @ =0x00000149
	add r5, r6, #0
	add r5, r5, #124
	ldrh r1, [r5]
	add r4, r6, #0
	add r4, r4, #80
	ldrh r2, [r4]
	bl sub_08014658
	b _080268A4
	.byte 0x00
	.byte 0x00
_0802687C:
	.4byte gUnknown_03006A30
_08026880:
	.4byte gUnknown_0201F000
_08026884:
	.4byte gUnknown_08137B10
_08026888:
	.4byte 0x00000149
_0802688C:
	ldr r0, _080268D0  @ =0x0000014B
	add r5, r6, #0
	add r5, r5, #124
	ldrh r1, [r5]
	add r4, r6, #0
	add r4, r4, #80
	ldrh r2, [r4]
	bl sub_08014658
	add r0, r6, #0
	bl DeleteThisEntity
_080268A4:
	add r2, r6, #0
	add r2, r2, #120
	ldrh r1, [r2]
	ldr r0, _080268D4  @ =0x0000FFFF
	cmp r1, r0
	beq _080268C8
	add r0, r1, #0
	ldrh r1, [r5]
	ldrh r2, [r4]
	bl 0x08008F48
	add r0, r6, #0
	add r0, r0, #126
	ldrb r0, [r0]
	ldrh r1, [r5]
	ldrh r2, [r4]
	bl 0x08008F3C
_080268C8:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080268D0:
	.4byte 0x0000014B
_080268D4:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_080267C4


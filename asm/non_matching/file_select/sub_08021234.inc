	THUMB_FUNC_START sub_08021234
sub_08021234: @ 0x08021234
	push {r4-r7,lr}
	add r6, r0, #0
	ldr r0, _0802124C  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r0, #3
	beq _08021272
	cmp r0, #3
	bgt _08021250
	cmp r0, #2
	beq _08021290
	b _080212AC
	.byte 0x00
	.byte 0x00
_0802124C:
	.4byte gUnknown_03006C80
_08021250:
	cmp r0, #4
	bne _080212AC
	ldr r0, _080212E0  @ =gUnknown_03006A30
	mov r1, #236
	lsl r1, r1, #1
	add r4, r0, r1
	ldr r0, [r4]
	bl sub_08021154
	lsl r0, r0, #24
	cmp r0, #0
	beq _08021272
	ldr r1, [r4]
	ldrh r2, [r6, #12]
	add r0, r6, #0
	bl sub_08021190
_08021272:
	ldr r0, _080212E0  @ =gUnknown_03006A30
	mov r1, #164
	lsl r1, r1, #1
	add r4, r0, r1
	ldr r0, [r4]
	bl sub_08021154
	lsl r0, r0, #24
	cmp r0, #0
	beq _08021290
	ldr r1, [r4]
	ldrh r2, [r6, #12]
	add r0, r6, #0
	bl sub_08021190
_08021290:
	ldr r0, _080212E0  @ =gUnknown_03006A30
	add r4, r0, #0
	add r4, r4, #184
	ldr r0, [r4]
	bl sub_08021154
	lsl r0, r0, #24
	cmp r0, #0
	beq _080212AC
	ldr r1, [r4]
	ldrh r2, [r6, #12]
	add r0, r6, #0
	bl sub_08021190
_080212AC:
	ldr r4, _080212E0  @ =gUnknown_03006A30
	ldr r0, [r4, #40]
	bl sub_08021154
	lsl r0, r0, #24
	cmp r0, #0
	beq _080212C4
	ldr r1, [r4, #40]
	ldrh r2, [r6, #12]
	add r0, r6, #0
	bl sub_08021190
_080212C4:
	ldr r0, _080212E4  @ =gEntityLinks
	ldr r5, [r0, #20]
	add r7, r5, #0
	cmp r5, #0
	beq _08021348
_080212CE:
	ldrb r0, [r5, #9]
	cmp r0, #3
	beq _080212F0
	cmp r0, #3
	bgt _080212E8
	cmp r0, #2
	beq _080212F6
	b _08021342
	.byte 0x00
	.byte 0x00
_080212E0:
	.4byte gUnknown_03006A30
_080212E4:
	.4byte gEntityLinks
_080212E8:
	cmp r0, #4
	beq _08021312
	cmp r0, #5
	bne _08021342
_080212F0:
	ldr r0, [r5, #12]
	cmp r0, #0
	beq _08021342
_080212F6:
	ldr r4, [r6, #12]
	add r4, r4, #128
	add r0, r5, #0
	add r1, r6, #0
	bl sub_0803CECC
	add r2, r0, #0
	lsl r2, r2, #24
	lsr r2, r2, #24
	add r0, r5, #0
	add r1, r4, #0
	bl 0x08002E70
	b _08021342
_08021312:
	add r0, r5, #0
	add r0, r0, #100
	ldrh r0, [r0]
	cmp r0, #0
	bne _08021342
	ldrb r0, [r5, #20]
	cmp r0, #2
	bne _08021328
	ldrb r0, [r5, #21]
	cmp r0, #1
	bls _08021342
_08021328:
	ldr r2, [r6, #12]
	add r2, r2, #128
	lsl r2, r2, #16
	lsr r2, r2, #16
	add r0, r6, #0
	add r1, r5, #0
	bl sub_08021190
	lsl r0, r0, #24
	cmp r0, #0
	beq _08021342
	mov r0, #3
	strb r0, [r5, #21]
_08021342:
	ldr r5, [r5, #4]
	cmp r7, r5
	bne _080212CE
_08021348:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08021234

	.byte 0x00
	.byte 0x00

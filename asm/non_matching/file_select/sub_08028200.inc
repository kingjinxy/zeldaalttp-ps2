	THUMB_FUNC_START sub_08028200
sub_08028200: @ 0x08028200
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r4, r0, #0
	ldr r7, [r4, #96]
	mov r0, #15
	and r7, r7, r0
	ldrh r0, [r4, #50]
	mov r1, #124
	add r1, r1, r4
	mov r8, r1
	strh r0, [r1]
	ldrh r0, [r4, #54]
	add r6, r4, #0
	add r6, r6, #126
	strh r0, [r6]
	add r0, r4, #0
	add r0, r0, #43
	ldrb r0, [r0]
	lsr r0, r0, #3
	add r5, r0, #0
	cmp r0, #1
	beq _080282F8
	cmp r0, #1
	bgt _08028238
	cmp r0, #0
	beq _08028246
	b _080284FA
_08028238:
	cmp r0, #2
	bne _0802823E
	b _080283A8
_0802823E:
	cmp r0, #3
	bne _08028244
	b _08028454
_08028244:
	b _080284FA
_08028246:
	add r0, r4, #0
	bl sub_0803CC20
	ldrh r0, [r6]
	ldrh r1, [r4, #54]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r4, r0, #16
	cmp r4, #0
	bne _0802825C
	b _080284FA
_0802825C:
	mov r0, #1
	and r0, r0, r7
	cmp r0, #0
	beq _0802827C
	ldr r5, _080282F4  @ =gUnknown_03006A30
	ldr r0, [r5, #40]
	bl sub_08003FB0
	lsl r0, r0, #24
	cmp r0, #0
	beq _0802827C
	ldr r0, [r5, #40]
	add r1, r4, #0
	mov r2, #0
	bl sub_08002E70
_0802827C:
	mov r0, #2
	and r0, r0, r7
	cmp r0, #0
	beq _080282A0
	ldr r0, _080282F4  @ =gUnknown_03006A30
	add r5, r0, #0
	add r5, r5, #184
	ldr r0, [r5]
	bl sub_08003FB0
	lsl r0, r0, #24
	cmp r0, #0
	beq _080282A0
	ldr r0, [r5]
	add r1, r4, #0
	mov r2, #0
	bl sub_08002E70
_080282A0:
	mov r0, #4
	and r0, r0, r7
	cmp r0, #0
	beq _080282C6
	ldr r0, _080282F4  @ =gUnknown_03006A30
	mov r2, #164
	lsl r2, r2, #1
	add r5, r0, r2
	ldr r0, [r5]
	bl sub_08003FB0
	lsl r0, r0, #24
	cmp r0, #0
	beq _080282C6
	ldr r0, [r5]
	add r1, r4, #0
	mov r2, #0
	bl sub_08002E70
_080282C6:
	mov r0, #8
	and r7, r7, r0
	cmp r7, #0
	bne _080282D0
	b _080284FA
_080282D0:
	ldr r0, _080282F4  @ =gUnknown_03006A30
	mov r1, #236
	lsl r1, r1, #1
	add r5, r0, r1
	ldr r0, [r5]
	bl sub_08003FB0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080282E6
	b _080284FA
_080282E6:
	ldr r0, [r5]
	add r1, r4, #0
	mov r2, #0
	bl sub_08002E70
	b _080284FA
	.byte 0x00
	.byte 0x00
_080282F4:
	.4byte gUnknown_03006A30
_080282F8:
	add r0, r4, #0
	bl sub_0803CC20
	ldrh r0, [r4, #50]
	mov r2, r8
	ldrh r1, [r2]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r4, r0, #16
	cmp r4, #0
	bne _08028310
	b _080284FA
_08028310:
	and r5, r5, r7
	cmp r5, #0
	beq _0802832E
	ldr r5, _080283A4  @ =gUnknown_03006A30
	ldr r0, [r5, #40]
	bl sub_08003FB0
	lsl r0, r0, #24
	cmp r0, #0
	beq _0802832E
	ldr r0, [r5, #40]
	add r1, r4, #0
	mov r2, #8
	bl sub_08002E70
_0802832E:
	mov r0, #2
	and r0, r0, r7
	cmp r0, #0
	beq _08028352
	ldr r0, _080283A4  @ =gUnknown_03006A30
	add r5, r0, #0
	add r5, r5, #184
	ldr r0, [r5]
	bl sub_08003FB0
	lsl r0, r0, #24
	cmp r0, #0
	beq _08028352
	ldr r0, [r5]
	add r1, r4, #0
	mov r2, #8
	bl sub_08002E70
_08028352:
	mov r0, #4
	and r0, r0, r7
	cmp r0, #0
	beq _08028378
	ldr r0, _080283A4  @ =gUnknown_03006A30
	mov r1, #164
	lsl r1, r1, #1
	add r5, r0, r1
	ldr r0, [r5]
	bl sub_08003FB0
	lsl r0, r0, #24
	cmp r0, #0
	beq _08028378
	ldr r0, [r5]
	add r1, r4, #0
	mov r2, #8
	bl sub_08002E70
_08028378:
	mov r0, #8
	and r7, r7, r0
	cmp r7, #0
	bne _08028382
	b _080284FA
_08028382:
	ldr r0, _080283A4  @ =gUnknown_03006A30
	mov r2, #236
	lsl r2, r2, #1
	add r5, r0, r2
	ldr r0, [r5]
	bl sub_08003FB0
	lsl r0, r0, #24
	cmp r0, #0
	bne _08028398
	b _080284FA
_08028398:
	ldr r0, [r5]
	add r1, r4, #0
	mov r2, #8
	bl sub_08002E70
	b _080284FA
_080283A4:
	.4byte gUnknown_03006A30
_080283A8:
	add r0, r4, #0
	bl sub_0803CC20
	ldrh r0, [r4, #54]
	ldrh r1, [r6]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r4, r0, #16
	cmp r4, #0
	bne _080283BE
	b _080284FA
_080283BE:
	mov r0, #1
	and r0, r0, r7
	cmp r0, #0
	beq _080283DE
	ldr r5, _08028450  @ =gUnknown_03006A30
	ldr r0, [r5, #40]
	bl sub_08003FB0
	lsl r0, r0, #24
	cmp r0, #0
	beq _080283DE
	ldr r0, [r5, #40]
	add r1, r4, #0
	mov r2, #16
	bl sub_08002E70
_080283DE:
	mov r0, #2
	and r0, r0, r7
	cmp r0, #0
	beq _08028402
	ldr r0, _08028450  @ =gUnknown_03006A30
	add r5, r0, #0
	add r5, r5, #184
	ldr r0, [r5]
	bl sub_08003FB0
	lsl r0, r0, #24
	cmp r0, #0
	beq _08028402
	ldr r0, [r5]
	add r1, r4, #0
	mov r2, #16
	bl sub_08002E70
_08028402:
	mov r0, #4
	and r0, r0, r7
	cmp r0, #0
	beq _08028428
	ldr r0, _08028450  @ =gUnknown_03006A30
	mov r1, #164
	lsl r1, r1, #1
	add r5, r0, r1
	ldr r0, [r5]
	bl sub_08003FB0
	lsl r0, r0, #24
	cmp r0, #0
	beq _08028428
	ldr r0, [r5]
	add r1, r4, #0
	mov r2, #16
	bl sub_08002E70
_08028428:
	mov r0, #8
	and r7, r7, r0
	cmp r7, #0
	beq _080284FA
	ldr r0, _08028450  @ =gUnknown_03006A30
	mov r2, #236
	lsl r2, r2, #1
	add r5, r0, r2
	ldr r0, [r5]
	bl sub_08003FB0
	lsl r0, r0, #24
	cmp r0, #0
	beq _080284FA
	ldr r0, [r5]
	add r1, r4, #0
	mov r2, #16
	bl sub_08002E70
	b _080284FA
_08028450:
	.4byte gUnknown_03006A30
_08028454:
	add r0, r4, #0
	bl sub_0803CC20
	mov r1, r8
	ldrh r0, [r1]
	ldrh r1, [r4, #50]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r4, r0, #16
	cmp r4, #0
	beq _080284FA
	mov r0, #1
	and r0, r0, r7
	cmp r0, #0
	beq _0802848A
	ldr r5, _08028504  @ =gUnknown_03006A30
	ldr r0, [r5, #40]
	bl sub_08003FB0
	lsl r0, r0, #24
	cmp r0, #0
	beq _0802848A
	ldr r0, [r5, #40]
	add r1, r4, #0
	mov r2, #24
	bl sub_08002E70
_0802848A:
	mov r0, #2
	and r0, r0, r7
	cmp r0, #0
	beq _080284AE
	ldr r0, _08028504  @ =gUnknown_03006A30
	add r5, r0, #0
	add r5, r5, #184
	ldr r0, [r5]
	bl sub_08003FB0
	lsl r0, r0, #24
	cmp r0, #0
	beq _080284AE
	ldr r0, [r5]
	add r1, r4, #0
	mov r2, #24
	bl sub_08002E70
_080284AE:
	mov r0, #4
	and r0, r0, r7
	cmp r0, #0
	beq _080284D4
	ldr r0, _08028504  @ =gUnknown_03006A30
	mov r2, #164
	lsl r2, r2, #1
	add r5, r0, r2
	ldr r0, [r5]
	bl sub_08003FB0
	lsl r0, r0, #24
	cmp r0, #0
	beq _080284D4
	ldr r0, [r5]
	add r1, r4, #0
	mov r2, #24
	bl sub_08002E70
_080284D4:
	mov r0, #8
	and r7, r7, r0
	cmp r7, #0
	beq _080284FA
	ldr r0, _08028504  @ =gUnknown_03006A30
	mov r1, #236
	lsl r1, r1, #1
	add r5, r0, r1
	ldr r0, [r5]
	bl sub_08003FB0
	lsl r0, r0, #24
	cmp r0, #0
	beq _080284FA
	ldr r0, [r5]
	add r1, r4, #0
	mov r2, #24
	bl sub_08002E70
_080284FA:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08028504:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_08028200


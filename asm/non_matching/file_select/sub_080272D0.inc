	THUMB_FUNC_START sub_080272D0
sub_080272D0: @ 0x080272D0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r4, r0, #0
	add r0, r0, #80
	ldrh r0, [r0]
	bl sub_08015DC0
	mov r8, r0
	ldrh r1, [r4, #50]
	add r0, r4, #0
	add r0, r0, #124
	mov r2, #0
	strh r1, [r0]
	ldrh r0, [r4, #54]
	add r1, r4, #0
	add r1, r1, #126
	strh r0, [r1]
	strh r2, [r4, #44]
	ldr r6, [r4, #96]
	mov r0, #15
	and r6, r6, r0
	cmp r6, #0
	bne _08027302
	b _080275EA
_08027302:
	add r0, r4, #0
	add r0, r0, #43
	ldrb r0, [r0]
	lsr r7, r0, #2
	cmp r7, #7
	bls _08027310
	b _080275EA
_08027310:
	lsl r0, r7, #2
	ldr r1, _0802731C  @ =0x08027320
	add r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
	.byte 0x00
	.byte 0x00
_0802731C:
	.4byte _0802731C+0x4
	.4byte _08027340
	.4byte _08027340
	.4byte _080273CA
	.4byte _080273CA
	.4byte _08027454
	.4byte _08027454
	.4byte _080274DE
	.4byte _080274DE
_08027340:
	add r0, r4, #0
	mov r1, r8
	bl sub_080276CC
	ldr r1, [r4, #12]
	ldrh r3, [r4, #44]
	add r0, r4, #0
	mov r2, #0
	bl sub_08002E84
	add r0, r4, #0
	add r0, r0, #126
	ldrh r0, [r0]
	ldrh r1, [r4, #54]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r5, r0, #16
	cmp r5, #0
	beq _080273C4
	mov r0, #1
	and r0, r0, r6
	cmp r0, #0
	beq _0802737A
	ldr r0, _080275F4  @ =gUnknown_03006A30
	ldr r0, [r0, #40]
	add r1, r5, #0
	mov r2, #0
	bl sub_08002E70
_0802737A:
	mov r0, #2
	and r0, r0, r6
	cmp r0, #0
	beq _08027390
	ldr r0, _080275F4  @ =gUnknown_03006A30
	add r0, r0, #184
	ldr r0, [r0]
	add r1, r5, #0
	mov r2, #0
	bl sub_08002E70
_08027390:
	mov r0, #4
	and r0, r0, r6
	cmp r0, #0
	beq _080273AA
	ldr r0, _080275F4  @ =gUnknown_03006A30
	mov r1, #164
	lsl r1, r1, #1
	add r0, r0, r1
	ldr r0, [r0]
	add r1, r5, #0
	mov r2, #0
	bl sub_08002E70
_080273AA:
	mov r0, #8
	and r0, r0, r6
	cmp r0, #0
	beq _080273C4
	ldr r0, _080275F4  @ =gUnknown_03006A30
	mov r1, #236
	lsl r1, r1, #1
	add r0, r0, r1
	ldr r0, [r0]
	add r1, r5, #0
	mov r2, #0
	bl sub_08002E70
_080273C4:
	cmp r7, #1
	beq _080273CA
	b _080275EA
_080273CA:
	add r0, r4, #0
	mov r1, r8
	bl sub_0802782C
	ldr r1, [r4, #12]
	ldrh r3, [r4, #44]
	add r0, r4, #0
	mov r2, #8
	bl sub_08002E84
	add r1, r4, #0
	add r1, r1, #124
	ldrh r0, [r4, #50]
	ldrh r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r5, r0, #16
	cmp r5, #0
	beq _0802744E
	mov r0, #1
	and r0, r0, r6
	cmp r0, #0
	beq _08027404
	ldr r0, _080275F4  @ =gUnknown_03006A30
	ldr r0, [r0, #40]
	add r1, r5, #0
	mov r2, #8
	bl sub_08002E70
_08027404:
	mov r0, #2
	and r0, r0, r6
	cmp r0, #0
	beq _0802741A
	ldr r0, _080275F4  @ =gUnknown_03006A30
	add r0, r0, #184
	ldr r0, [r0]
	add r1, r5, #0
	mov r2, #8
	bl sub_08002E70
_0802741A:
	mov r0, #4
	and r0, r0, r6
	cmp r0, #0
	beq _08027434
	ldr r0, _080275F4  @ =gUnknown_03006A30
	mov r1, #164
	lsl r1, r1, #1
	add r0, r0, r1
	ldr r0, [r0]
	add r1, r5, #0
	mov r2, #8
	bl sub_08002E70
_08027434:
	mov r0, #8
	and r0, r0, r6
	cmp r0, #0
	beq _0802744E
	ldr r0, _080275F4  @ =gUnknown_03006A30
	mov r1, #236
	lsl r1, r1, #1
	add r0, r0, r1
	ldr r0, [r0]
	add r1, r5, #0
	mov r2, #8
	bl sub_08002E70
_0802744E:
	cmp r7, #3
	beq _08027454
	b _080275EA
_08027454:
	add r0, r4, #0
	mov r1, r8
	bl sub_08027780
	ldr r1, [r4, #12]
	ldrh r3, [r4, #44]
	add r0, r4, #0
	mov r2, #16
	bl sub_08002E84
	add r1, r4, #0
	add r1, r1, #126
	ldrh r0, [r4, #54]
	ldrh r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r5, r0, #16
	cmp r5, #0
	beq _080274D8
	mov r0, #1
	and r0, r0, r6
	cmp r0, #0
	beq _0802748E
	ldr r0, _080275F4  @ =gUnknown_03006A30
	ldr r0, [r0, #40]
	add r1, r5, #0
	mov r2, #16
	bl sub_08002E70
_0802748E:
	mov r0, #2
	and r0, r0, r6
	cmp r0, #0
	beq _080274A4
	ldr r0, _080275F4  @ =gUnknown_03006A30
	add r0, r0, #184
	ldr r0, [r0]
	add r1, r5, #0
	mov r2, #16
	bl sub_08002E70
_080274A4:
	mov r0, #4
	and r0, r0, r6
	cmp r0, #0
	beq _080274BE
	ldr r0, _080275F4  @ =gUnknown_03006A30
	mov r1, #164
	lsl r1, r1, #1
	add r0, r0, r1
	ldr r0, [r0]
	add r1, r5, #0
	mov r2, #16
	bl sub_08002E70
_080274BE:
	mov r0, #8
	and r0, r0, r6
	cmp r0, #0
	beq _080274D8
	ldr r0, _080275F4  @ =gUnknown_03006A30
	mov r1, #236
	lsl r1, r1, #1
	add r0, r0, r1
	ldr r0, [r0]
	add r1, r5, #0
	mov r2, #16
	bl sub_08002E70
_080274D8:
	cmp r7, #5
	beq _080274DE
	b _080275EA
_080274DE:
	add r0, r4, #0
	mov r1, r8
	bl sub_080278E8
	ldr r1, [r4, #12]
	ldrh r3, [r4, #44]
	add r0, r4, #0
	mov r2, #24
	bl sub_08002E84
	add r0, r4, #0
	add r0, r0, #124
	ldrh r0, [r0]
	ldrh r1, [r4, #50]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r5, r0, #16
	cmp r5, #0
	beq _08027562
	mov r0, #1
	and r0, r0, r6
	cmp r0, #0
	beq _08027518
	ldr r0, _080275F4  @ =gUnknown_03006A30
	ldr r0, [r0, #40]
	add r1, r5, #0
	mov r2, #24
	bl sub_08002E70
_08027518:
	mov r0, #2
	and r0, r0, r6
	cmp r0, #0
	beq _0802752E
	ldr r0, _080275F4  @ =gUnknown_03006A30
	add r0, r0, #184
	ldr r0, [r0]
	add r1, r5, #0
	mov r2, #24
	bl sub_08002E70
_0802752E:
	mov r0, #4
	and r0, r0, r6
	cmp r0, #0
	beq _08027548
	ldr r0, _080275F4  @ =gUnknown_03006A30
	mov r1, #164
	lsl r1, r1, #1
	add r0, r0, r1
	ldr r0, [r0]
	add r1, r5, #0
	mov r2, #24
	bl sub_08002E70
_08027548:
	mov r0, #8
	and r0, r0, r6
	cmp r0, #0
	beq _08027562
	ldr r0, _080275F4  @ =gUnknown_03006A30
	mov r1, #236
	lsl r1, r1, #1
	add r0, r0, r1
	ldr r0, [r0]
	add r1, r5, #0
	mov r2, #24
	bl sub_08002E70
_08027562:
	cmp r7, #7
	bne _080275EA
	add r0, r4, #0
	mov r1, r8
	bl sub_080276CC
	ldr r1, [r4, #12]
	ldrh r3, [r4, #44]
	add r0, r4, #0
	mov r2, #0
	bl sub_08002E84
	add r0, r4, #0
	add r0, r0, #126
	ldrh r0, [r0]
	ldrh r1, [r4, #54]
	sub r0, r0, r1
	lsl r0, r0, #24
	lsr r5, r0, #16
	cmp r5, #0
	beq _080275EA
	mov r0, #1
	and r0, r0, r6
	cmp r0, #0
	beq _080275A0
	ldr r0, _080275F4  @ =gUnknown_03006A30
	ldr r0, [r0, #40]
	add r1, r5, #0
	mov r2, #0
	bl sub_08002E70
_080275A0:
	mov r0, #2
	and r0, r0, r6
	cmp r0, #0
	beq _080275B6
	ldr r0, _080275F4  @ =gUnknown_03006A30
	add r0, r0, #184
	ldr r0, [r0]
	add r1, r5, #0
	mov r2, #0
	bl sub_08002E70
_080275B6:
	mov r0, #4
	and r0, r0, r6
	cmp r0, #0
	beq _080275D0
	ldr r0, _080275F4  @ =gUnknown_03006A30
	mov r1, #164
	lsl r1, r1, #1
	add r0, r0, r1
	ldr r0, [r0]
	add r1, r5, #0
	mov r2, #0
	bl sub_08002E70
_080275D0:
	mov r0, #8
	and r6, r6, r0
	cmp r6, #0
	beq _080275EA
	ldr r0, _080275F4  @ =gUnknown_03006A30
	mov r1, #236
	lsl r1, r1, #1
	add r0, r0, r1
	ldr r0, [r0]
	add r1, r5, #0
	mov r2, #0
	bl sub_08002E70
_080275EA:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080275F4:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_080272D0


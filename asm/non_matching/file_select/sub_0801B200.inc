	THUMB_FUNC_START sub_0801B200
sub_0801B200: @ 0x0801B200
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	add r7, r0, #0
	add r0, r0, #113
	ldrb r0, [r0]
	cmp r0, #0
	bne _0801B2B6
	ldr r1, [r7, #88]
	add r0, r7, #0
	bl sub_0801B1A0
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801B22E
	ldr r1, [r7, #88]
	add r0, r7, #0
	bl sub_0803CECC
	b _0801B4DC
_0801B22E:
	ldr r0, _0801B290  @ =gUnknown_03000E20
	ldrh r0, [r0]
	mov r3, #3
	and r3, r3, r0
	add r6, r3, #0
	add r5, r7, #0
	add r5, r5, #43
	ldr r0, _0801B294  @ =gUnknown_03006A58
	mov r8, r0
	mov r1, #0
	mov r9, r1
_0801B244:
	ldr r0, _0801B298  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r0, r6
	bls _0801B26A
	lsl r0, r6, #3
	add r0, r0, r6
	lsl r0, r0, #4
	mov r2, r8
	add r4, r0, r2
	ldr r1, [r4]
	add r0, r7, #0
	str r3, [sp]
	bl sub_0801B1A0
	lsl r0, r0, #24
	ldr r3, [sp]
	cmp r0, #0
	beq _0801B26A
	b _0801B4B2
_0801B26A:
	add r6, r6, #1
	mov r0, #3
	and r6, r6, r0
	cmp r3, r6
	bne _0801B244
	add r1, r7, #0
	add r1, r1, #113
	mov r0, #1
	strb r0, [r1]
	add r0, r7, #0
	add r0, r0, #114
	mov r3, r9
	strb r3, [r0]
	mov r4, #50
	ldrsh r0, [r7, r4]
	mov r2, #54
	ldrsh r1, [r7, r2]
	b _0801B49A
	.byte 0x00
	.byte 0x00
_0801B290:
	.4byte gUnknown_03000E20
_0801B294:
	.4byte gUnknown_03006A58
_0801B298:
	.4byte gUnknown_03006C80
_0801B29C:
	add r1, r7, #0
	add r1, r1, #113
	mov r0, #0
	strb r0, [r1]
	ldr r1, [r4]
	str r1, [r7, #88]
	add r0, r7, #0
	bl sub_0803CECC
	add r1, r7, #0
	add r1, r1, #43
	strb r0, [r1]
	b _0801B2EC
_0801B2B6:
	mov r6, #4
	ldr r0, _0801B340  @ =gUnknown_03000E20
	ldrh r0, [r0]
	mov r3, #3
	and r3, r3, r0
	ldr r5, _0801B344  @ =gUnknown_03006A58
_0801B2C2:
	lsl r0, r3, #3
	add r0, r0, r3
	lsl r0, r0, #4
	add r4, r0, r5
	ldr r1, [r4]
	add r0, r7, #0
	str r3, [sp]
	bl sub_0801B1A0
	lsl r0, r0, #24
	ldr r3, [sp]
	cmp r0, #0
	bne _0801B29C
	sub r0, r6, #1
	lsl r0, r0, #16
	lsr r6, r0, #16
	add r3, r3, #1
	mov r0, #3
	and r3, r3, r0
	cmp r6, #0
	bne _0801B2C2
_0801B2EC:
	cmp r6, #0
	beq _0801B2F2
	b _0801B4E2
_0801B2F2:
	add r0, r7, #0
	add r0, r0, #114
	ldrb r2, [r0]
	add r1, r2, #0
	mov r8, r0
	cmp r1, #0
	bne _0801B302
	b _0801B4C0
_0801B302:
	cmp r1, #1
	bne _0801B358
	mov r1, #50
	ldrsh r0, [r7, r1]
	mov r2, #54
	ldrsh r1, [r7, r2]
	add r2, r7, #0
	add r2, r2, #116
	mov r3, #0
	ldrsh r2, [r2, r3]
	add r3, r7, #0
	add r3, r3, #118
	mov r4, #0
	ldrsh r3, [r3, r4]
	bl 0x08003F54
	add r2, r7, #0
	add r2, r2, #43
	strb r0, [r2]
	add r0, r0, #4
	mov r3, #24
	and r0, r0, r3
	add r1, r7, #0
	add r1, r1, #115
	strb r0, [r1]
	add r5, r2, #0
	ldrb r1, [r5]
	cmp r0, r1
	bcs _0801B348
	add r0, r0, #8
	b _0801B34A
_0801B340:
	.4byte gUnknown_03000E20
_0801B344:
	.4byte gUnknown_03006A58
_0801B348:
	sub r0, r0, #8
_0801B34A:
	and r0, r0, r3
	strb r0, [r5]
	mov r2, r8
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	b _0801B36A
_0801B358:
	mov r0, #2
	and r0, r0, r2
	cmp r0, #0
	beq _0801B36C
	add r2, r7, #0
	add r2, r2, #43
	ldrb r0, [r2]
	mov r1, #16
	eor r0, r0, r1
_0801B36A:
	strb r0, [r2]
_0801B36C:
	mov r3, r8
	ldrb r2, [r3]
	mov r0, #112
	and r0, r0, r2
	lsl r0, r0, #24
	cmp r0, #0
	beq _0801B3AC
	lsr r1, r0, #25
	mov r0, #135
	and r0, r0, r2
	orr r1, r1, r0
	strb r1, [r3]
	mov r0, #16
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	beq _0801B39C
	add r0, r7, #0
	add r0, r0, #115
	ldrb r1, [r0]
	sub r0, r0, #72
	strb r1, [r0]
	b _0801B4E2
_0801B39C:
	mov r0, #8
	and r1, r1, r0
	cmp r1, #0
	bne _0801B3A6
	b _0801B4E2
_0801B3A6:
	mov r4, r8
	strb r2, [r4]
	b _0801B4E2
_0801B3AC:
	add r0, r7, #0
	add r0, r0, #115
	ldrb r0, [r0]
	lsr r6, r0, #1
	mov r3, #1
	ldr r0, _0801B440  @ =gUnknown_08139F48
	mov r10, r0
	ldr r4, _0801B444  @ =gUnknown_08139F38
	add r0, r6, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r7, #50]
	add r0, r0, r1
	lsl r0, r0, #16
	asr r0, r0, #16
	add r1, r6, #1
	add r1, r1, r4
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r7, #54]
	add r1, r1, r2
	lsl r1, r1, #16
	asr r1, r1, #16
	add r5, r7, #0
	add r5, r5, #80
	ldrh r2, [r5]
	str r3, [sp]
	bl 0x08009310
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r9, r0
	add r0, r6, #2
	add r0, r0, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r7, #50]
	add r0, r0, r1
	lsl r0, r0, #16
	asr r0, r0, #16
	add r1, r6, #3
	add r1, r1, r4
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r7, #54]
	add r1, r1, r2
	lsl r1, r1, #16
	asr r1, r1, #16
	ldrh r2, [r5]
	bl 0x08009310
	lsl r0, r0, #16
	lsr r2, r0, #16
	ldr r1, _0801B448  @ =gUnknown_0814AB24
	mov r4, r9
	add r0, r4, r1
	ldrb r0, [r0]
	ldr r3, [sp]
	cmp r0, #0
	bne _0801B436
	add r0, r2, r1
	ldrb r1, [r0]
	neg r0, r1
	orr r0, r0, r1
	lsr r3, r0, #31
_0801B436:
	mov r0, #11
	add r5, r7, #0
	add r5, r5, #43
	b _0801B45A
	.byte 0x00
	.byte 0x00
_0801B440:
	.4byte gUnknown_08139F48
_0801B444:
	.4byte gUnknown_08139F38
_0801B448:
	.4byte gUnknown_0814AB24
_0801B44C:
	sub r0, r0, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, #2
	add r10, r10, r1
	cmp r0, #0
	beq _0801B468
_0801B45A:
	mov r4, r10
	ldrh r1, [r4]
	cmp r1, r9
	beq _0801B466
	cmp r1, r2
	bne _0801B44C
_0801B466:
	mov r3, #1
_0801B468:
	cmp r3, #0
	beq _0801B492
	ldrb r0, [r5]
	add r1, r7, #0
	add r1, r1, #42
	lsr r0, r0, #3
	ldrb r1, [r1]
	cmp r0, r1
	bne _0801B486
	mov r0, r8
	ldrb r1, [r0]
	mov r0, #32
	orr r0, r0, r1
	mov r1, r8
	b _0801B4E0
_0801B486:
	mov r2, r8
	ldrb r1, [r2]
	mov r0, #64
	orr r0, r0, r1
	strb r0, [r2]
	b _0801B4E2
_0801B492:
	mov r3, #50
	ldrsh r0, [r7, r3]
	mov r4, #54
	ldrsh r1, [r7, r4]
_0801B49A:
	add r2, r7, #0
	add r2, r2, #116
	mov r3, #0
	ldrsh r2, [r2, r3]
	add r3, r7, #0
	add r3, r3, #118
	mov r4, #0
	ldrsh r3, [r3, r4]
	bl 0x08003F54
	strb r0, [r5]
	b _0801B4E2
_0801B4B2:
	ldr r1, [r4]
	str r1, [r7, #88]
	add r0, r7, #0
	bl sub_0803CECC
	strb r0, [r5]
	b _0801B4E2
_0801B4C0:
	mov r1, #50
	ldrsh r0, [r7, r1]
	mov r2, #54
	ldrsh r1, [r7, r2]
	add r2, r7, #0
	add r2, r2, #116
	mov r3, #0
	ldrsh r2, [r2, r3]
	add r3, r7, #0
	add r3, r3, #118
	mov r4, #0
	ldrsh r3, [r3, r4]
	bl 0x08003F54
_0801B4DC:
	add r1, r7, #0
	add r1, r1, #43
_0801B4E0:
	strb r0, [r1]
_0801B4E2:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801B200

	.byte 0x00
	.byte 0x00

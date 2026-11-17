	THUMB_FUNC_START sub_08134350
sub_08134350: @ 0x08134350
	push {r4-r7,lr}
	mov r4, r8
	mov r5, r9
	mov r6, r10
	mov r7, r11
	push {r4-r7}
	sub sp, sp, #24
	str r1, [sp]
	add r5, r2, #0
	ldr r1, _08134548  @ =gUnknown_03007FF0
	ldr r1, [r1]
	str r1, [sp, #4]
	ldr r1, _0813454C  @ =gUnknown_083C28C8
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r5, #4]
	ldr r3, [r5, #64]
	ldrb r0, [r3]
	cmp r0, #128
	bcs _08134396
	strb r0, [r5, #5]
	add r3, r3, #1
	ldrb r0, [r3]
	cmp r0, #128
	bcs _08134394
	strb r0, [r5, #6]
	add r3, r3, #1
	ldrb r0, [r3]
	cmp r0, #128
	bcs _08134394
	ldrb r1, [r5, #4]
	add r1, r1, r0
	strb r1, [r5, #4]
	add r3, r3, #1
_08134394:
	str r3, [r5, #64]
_08134396:
	mov r0, #0
	str r0, [sp, #20]
	add r4, r5, #0
	add r4, r4, #36
	ldrb r2, [r4]
	mov r0, #192
	tst r0, r2
	beq _081343E8
	ldrb r3, [r5, #5]
	mov r0, #64
	tst r0, r2
	beq _081343B6
	ldr r1, [r5, #44]
	add r1, r1, r3
	ldrb r0, [r1]
	b _081343B8
_081343B6:
	add r0, r3, #0
_081343B8:
	lsl r1, r0, #1
	add r1, r1, r0
	lsl r1, r1, #2
	ldr r0, [r5, #40]
	add r1, r1, r0
	mov r9, r1
	mov r6, r9
	ldrb r1, [r6]
	mov r0, #192
	tst r0, r1
	beq _081343D0
	b _08134536
_081343D0:
	mov r0, #128
	tst r0, r2
	beq _081343EC
	ldrb r1, [r6, #3]
	mov r0, #128
	tst r0, r1
	beq _081343E4
	sub r1, r1, #192
	lsl r1, r1, #1
	str r1, [sp, #20]
_081343E4:
	ldrb r3, [r6, #1]
	b _081343EC
_081343E8:
	mov r9, r4
	ldrb r3, [r5, #5]
_081343EC:
	str r3, [sp, #8]
	ldr r6, [sp]
	ldrb r1, [r6, #9]
	ldrb r0, [r5, #29]
	add r0, r0, r1
	cmp r0, #255
	bls _081343FC
	mov r0, #255
_081343FC:
	str r0, [sp, #16]
	mov r6, r9
	ldrb r0, [r6]
	mov r6, #7
	and r6, r6, r0
	str r6, [sp, #12]
	beq _0813443C
	ldr r0, [sp, #4]
	ldr r4, [r0, #28]
	cmp r4, #0
	bne _08134414
	b _08134536
_08134414:
	sub r6, r6, #1
	lsl r0, r6, #6
	add r4, r4, r0
	ldrb r1, [r4]
	mov r0, #199
	tst r0, r1
	beq _08134490
	mov r0, #64
	tst r0, r1
	bne _08134490
	ldrb r1, [r4, #19]
	ldr r0, [sp, #16]
	cmp r1, r0
	bcc _08134490
	beq _08134434
	b _08134536
_08134434:
	ldr r0, [r4, #44]
	cmp r0, r5
	bcs _08134490
	b _08134536
_0813443C:
	ldr r6, [sp, #16]
	add r7, r5, #0
	mov r2, #0
	mov r8, r2
	ldr r4, [sp, #4]
	ldrb r3, [r4, #6]
	add r4, r4, #80
_0813444A:
	ldrb r1, [r4]
	mov r0, #199
	tst r0, r1
	beq _08134490
	mov r0, #64
	tst r0, r1
	beq _08134464
	cmp r2, #0
	bne _08134468
	add r2, r2, #1
	ldrb r6, [r4, #19]
	ldr r7, [r4, #44]
	b _08134482
_08134464:
	cmp r2, #0
	bne _08134484
_08134468:
	ldrb r0, [r4, #19]
	cmp r0, r6
	bcs _08134474
	add r6, r0, #0
	ldr r7, [r4, #44]
	b _08134482
_08134474:
	bhi _08134484
	ldr r0, [r4, #44]
	cmp r0, r7
	bls _08134480
	add r7, r0, #0
	b _08134482
_08134480:
	bcc _08134484
_08134482:
	mov r8, r4
_08134484:
	add r4, r4, #64
	sub r3, r3, #1
	bgt _0813444A
	mov r4, r8
	cmp r4, #0
	beq _08134536
_08134490:
	add r0, r4, #0
	bl sub_08134A5C
	mov r1, #0
	str r1, [r4, #48]
	ldr r3, [r5, #32]
	str r3, [r4, #52]
	cmp r3, #0
	beq _081344A4
	str r4, [r3, #48]
_081344A4:
	str r4, [r5, #32]
	str r5, [r4, #44]
	ldrb r0, [r5, #27]
	strb r0, [r5, #28]
	cmp r0, r1
	beq _081344B6
	add r1, r5, #0
	bl sub_08134590
_081344B6:
	ldr r0, [sp]
	add r1, r5, #0
	bl sub_08135028
	ldr r0, [r5, #4]
	str r0, [r4, #16]
	ldr r0, [sp, #16]
	strb r0, [r4, #19]
	ldr r0, [sp, #8]
	strb r0, [r4, #8]
	ldr r0, [sp, #20]
	strb r0, [r4, #20]
	mov r6, r9
	ldrb r0, [r6]
	strb r0, [r4, #1]
	ldr r7, [r6, #4]
	str r7, [r4, #36]
	ldr r0, [r6, #8]
	str r0, [r4, #4]
	ldrh r0, [r5, #30]
	strh r0, [r4, #12]
	bl sub_08134320
	ldrb r1, [r4, #8]
	mov r0, #8
	ldrsb r0, [r5, r0]
	add r3, r1, r0
	bpl _081344F0
	mov r3, #0
_081344F0:
	ldr r6, [sp, #12]
	cmp r6, #0
	beq _0813451E
	mov r6, r9
	ldrb r0, [r6, #2]
	strb r0, [r4, #30]
	ldrb r1, [r6, #3]
	mov r0, #128
	tst r0, r1
	bne _0813450A
	mov r0, #112
	tst r0, r1
	bne _0813450C
_0813450A:
	mov r1, #8
_0813450C:
	strb r1, [r4, #31]
	ldrb r2, [r5, #9]
	add r1, r3, #0
	ldr r0, [sp, #12]
	ldr r3, [sp, #4]
	ldr r3, [r3, #48]
	bl sub_08134074+0x258
	b _08134528
_0813451E:
	ldrb r2, [r5, #9]
	add r1, r3, #0
	add r0, r7, #0
	bl sub_081345B8+0x28
_08134528:
	str r0, [r4, #32]
	mov r0, #128
	strb r0, [r4]
	ldrb r1, [r5]
	mov r0, #240
	and r0, r0, r1
	strb r0, [r5]
_08134536:
	add sp, sp, #24
	pop {r0-r7}
	mov r8, r0
	mov r9, r1
	mov r10, r2
	mov r11, r3
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08134548:
	.4byte gUnknown_03007FF0
_0813454C:
	.4byte gUnknown_083C28C8
	THUMB_FUNC_END sub_08134350


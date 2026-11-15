	THUMB_FUNC_START sub_080591D4
sub_080591D4: @ 0x080591D4
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r2, #16
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, _080592BC  @ =gUnknown_08140DFC
	ldr r2, [r7]
	ldrb r3, [r2, #10]
	add r2, r3, #0
	lsl r3, r2, #2
	add r1, r1, r3
	ldr r2, [r1]
	str r2, [r0, #72]
	ldr r0, [r7]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, [r7]
	ldrb r3, [r2, #10]
	lsl r2, r3, #3
	sub r1, r1, r2
	ldr r2, _080592C0  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, [r7]
	ldrb r4, [r3, #10]
	lsl r3, r4, #3
	sub r2, r2, r3
	ldr r3, _080592C0  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	add r2, r3, #0
	lsl r3, r2, #6
	add r2, r3, #0
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #120
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #80
	ldrh r2, [r1]
	add r0, r2, #0
	bl sub_08015DC0
	str r0, [r7, #4]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #120
	ldrh r2, [r3]
	add r3, r1, #0
	ldr r3, _080592C4  @ =0x00002004
	add r4, r1, r3
	add r1, r4, r2
	add r2, r0, #0
	add r0, r0, #123
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	bl sub_080597A8
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _080592A4
	b _080594FE
_080592A4:
	ldr r1, [r7]
	ldrb r0, [r1, #10]
	cmp r0, #1
	bne _080592AE
	b _08059468
_080592AE:
	cmp r0, #1
	bgt _080592C8
	cmp r0, #0
	bne _080592B8
	b _080594CC
_080592B8:
	b _080594E8
	.byte 0x00
	.byte 0x00
_080592BC:
	.4byte gUnknown_08140DFC
_080592C0:
	.4byte gUnknown_03000450
_080592C4:
	.4byte 0x00002004
_080592C8:
	cmp r0, #2
	bne _080592CE
	b _080593C0
_080592CE:
	cmp r0, #3
	beq _080592D4
	b _080594E8
_080592D4:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldrh r0, [r1]
	add r1, r0, #3
	add r2, r1, #0
	lsl r0, r2, #16
	lsr r1, r0, #16
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #0
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldrh r0, [r1]
	add r1, r0, #0
	add r1, r1, #67
	add r2, r1, #0
	lsl r0, r2, #16
	lsr r1, r0, #16
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #0
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldrh r0, [r1]
	add r1, r0, #0
	add r1, r1, #131
	add r2, r1, #0
	lsl r0, r2, #16
	lsr r1, r0, #16
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #0
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldrh r0, [r1]
	add r1, r0, #0
	add r1, r1, #192
	add r2, r1, #0
	lsl r0, r2, #16
	lsr r1, r0, #16
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #0
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldrh r0, [r1]
	add r1, r0, #0
	add r1, r1, #193
	add r2, r1, #0
	lsl r0, r2, #16
	lsr r1, r0, #16
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #0
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldrh r0, [r1]
	add r1, r0, #0
	add r1, r1, #194
	add r2, r1, #0
	lsl r0, r2, #16
	lsr r1, r0, #16
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #0
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldrh r0, [r1]
	add r1, r0, #0
	add r1, r1, #195
	add r2, r1, #0
	lsl r0, r2, #16
	lsr r1, r0, #16
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #0
	bl sub_08008F3C
_080593C0:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldrh r0, [r1]
	add r1, r0, #2
	add r2, r1, #0
	lsl r0, r2, #16
	lsr r1, r0, #16
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #0
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldrh r0, [r1]
	add r1, r0, #0
	add r1, r1, #66
	add r2, r1, #0
	lsl r0, r2, #16
	lsr r1, r0, #16
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #0
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldrh r0, [r1]
	add r1, r0, #0
	add r1, r1, #128
	add r2, r1, #0
	lsl r0, r2, #16
	lsr r1, r0, #16
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #0
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldrh r0, [r1]
	add r1, r0, #0
	add r1, r1, #129
	add r2, r1, #0
	lsl r0, r2, #16
	lsr r1, r0, #16
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #0
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldrh r0, [r1]
	add r1, r0, #0
	add r1, r1, #130
	add r2, r1, #0
	lsl r0, r2, #16
	lsr r1, r0, #16
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #0
	bl sub_08008F3C
_08059468:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldrh r0, [r1]
	add r1, r0, #1
	add r2, r1, #0
	lsl r0, r2, #16
	lsr r1, r0, #16
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #0
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldrh r0, [r1]
	add r1, r0, #0
	add r1, r1, #64
	add r2, r1, #0
	lsl r0, r2, #16
	lsr r1, r0, #16
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #0
	bl sub_08008F3C
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #120
	ldrh r0, [r1]
	add r1, r0, #0
	add r1, r1, #65
	add r2, r1, #0
	lsl r0, r2, #16
	lsr r1, r0, #16
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #0
	bl sub_08008F3C
_080594CC:
	ldr r1, [r7]
	add r0, r1, #0
	add r2, r1, #0
	add r2, r2, #120
	ldrh r1, [r2]
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #80
	ldrh r2, [r3]
	mov r0, #0
	bl sub_08008F3C
	b _080594E8
_080594E8:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	b _08059504
_080594FE:
	ldr r0, [r7]
	bl DeleteThisEntity
_08059504:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080591D4


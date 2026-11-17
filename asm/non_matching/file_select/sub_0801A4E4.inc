	THUMB_FUNC_START sub_0801A4E4
sub_0801A4E4: @ 0x0801A4E4
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r3, r4, #0
	add r3, r3, #41
	ldrb r2, [r3]
	add r1, r2, #0
	cmp r1, #1
	bne _0801A520
	ldrb r0, [r4, #23]
	add r2, r0, #1
	strb r2, [r4, #23]
	and r1, r1, r2
	cmp r1, #0
	beq _0801A588
	ldr r1, _0801A51C  @ =gUnknown_08139D50
	mov r0, #6
	and r2, r2, r0
	lsr r0, r2, #1
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r4, #50]
	add r0, r0, r1
	strh r0, [r4, #50]
	b _0801A588
_0801A51C:
	.4byte gUnknown_08139D50
_0801A520:
	cmp r1, #2
	bne _0801A54C
	mov r0, #0
	strb r0, [r3]
	add r1, r4, #0
	add r1, r1, #92
	ldr r0, _0801A544  @ =0x000021FF
	strh r0, [r1]
	sub r1, r1, #29
	mov r0, #28
	strb r0, [r1]
	ldr r0, _0801A548  @ =gUnknown_08139E50
	str r0, [r4, #72]
	add r0, r4, #0
	bl sub_0801A754
	b _0801A588
	.byte 0x00
	.byte 0x00
_0801A544:
	.4byte 0x000021FF
_0801A548:
	.4byte gUnknown_08139E50
_0801A54C:
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	beq _0801A588
	mov r0, #3
	strb r0, [r4, #20]
	mov r0, #16
	strb r0, [r4, #24]
	add r1, r4, #0
	add r1, r1, #124
	mov r0, #150
	lsl r0, r0, #2
	strh r0, [r1]
	ldr r1, [r4, #100]
	add r0, r4, #0
	bl sub_08009EA4
	add r0, r0, #4
	mov r1, #24
	and r0, r0, r1
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	lsr r0, r0, #3
	sub r1, r1, #1
	strb r0, [r1]
	ldrb r1, [r1]
	add r0, r4, #0
	bl sub_08003870
_0801A588:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801A4E4

	.byte 0x00
	.byte 0x00

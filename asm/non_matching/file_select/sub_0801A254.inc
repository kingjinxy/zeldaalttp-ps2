	THUMB_FUNC_START sub_0801A254
sub_0801A254: @ 0x0801A254
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r5, r0, #0
	add r4, r5, #0
	add r4, r4, #127
	ldrb r1, [r4]
	mov r7, #128
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _0801A2F6
	mov r1, #192
	lsl r1, r1, #5
	add r0, r5, #0
	bl sub_08003594
	ldr r1, _0801A2AC  @ =gUnknown_08139B44
	add r0, r5, #0
	add r0, r0, #124
	ldrb r0, [r0]
	add r0, r0, r1
	mov r1, #0
	ldrsb r1, [r0, r1]
	mov r2, #58
	ldrsh r0, [r5, r2]
	cmp r1, r0
	ble _0801A292
	b _0801A3F8
_0801A292:
	cmp r0, #0
	beq _0801A2B0
	strh r1, [r5, #58]
	strh r6, [r5, #56]
	ldrb r0, [r4]
	orr r0, r0, r7
	strb r0, [r4]
	add r1, r5, #0
	add r1, r1, #119
	mov r0, #180
	strb r0, [r1]
	b _0801A3F8
	.byte 0x00
	.byte 0x00
_0801A2AC:
	.4byte gUnknown_08139B44
_0801A2B0:
	mov r0, #16
	strb r0, [r5, #20]
	add r1, r5, #0
	add r1, r1, #63
	mov r0, #26
	strb r0, [r1]
	add r1, r1, #49
	mov r2, #0
	mov r0, #240
	strh r0, [r1]
	strb r2, [r4]
	ldrb r2, [r5, #31]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	orr r0, r0, r7
	strb r0, [r5, #31]
	ldrb r0, [r5, #29]
	and r1, r1, r0
	orr r1, r1, r7
	strb r1, [r5, #29]
	add r2, r5, #0
	add r2, r2, #94
	ldrb r1, [r2]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r2]
	add r0, r5, #0
	mov r1, #2
	bl sub_08003870
	b _0801A3F8
_0801A2F6:
	ldr r2, [r5, #56]
	ldr r0, _0801A330  @ =0xFFC00000
	cmp r2, r0
	bne _0801A338
	add r1, r5, #0
	add r1, r1, #119
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	bne _0801A3F8
	strb r0, [r4]
	mov r0, #1
	strb r0, [r5, #23]
	ldr r1, _0801A334  @ =gUnknown_08139B34
	add r0, r5, #0
	add r0, r0, #118
	ldrb r0, [r0]
	lsr r0, r0, #4
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
	b _0801A3F8
	.byte 0x00
	.byte 0x00
_0801A330:
	.4byte 0xFFC00000
_0801A334:
	.4byte gUnknown_08139B34
_0801A338:
	add r0, r5, #0
	add r0, r0, #119
	ldrb r1, [r0]
	add r3, r0, #0
	cmp r1, #0
	beq _0801A348
	sub r0, r1, #1
	b _0801A3F6
_0801A348:
	ldr r1, _0801A3A0  @ =0xFFFF8000
	add r0, r2, r1
	str r0, [r5, #56]
	mov r0, #56
	ldrsh r2, [r5, r0]
	mov r8, r2
	cmp r2, #0
	bne _0801A3F8
	mov r2, #58
	ldrsh r1, [r5, r2]
	mov r0, #33
	neg r0, r0
	ldrh r2, [r5, #58]
	cmp r1, r0
	bne _0801A3A4
	add r7, r5, #0
	add r7, r7, #124
	ldrb r6, [r7]
	cmp r6, #1
	bne _0801A3A4
	mov r0, #41
	bl sub_08012468
	add r4, r0, #0
	cmp r4, #0
	beq _0801A3F8
	ldr r0, [r5, #84]
	mov r1, r8
	strb r1, [r0, #11]
	strb r6, [r4, #10]
	strb r6, [r4, #11]
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0803D3D0
	str r5, [r4, #84]
	ldr r0, [r5, #84]
	str r0, [r4, #88]
	str r4, [r5, #84]
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	b _0801A3F8
	.byte 0x00
	.byte 0x00
_0801A3A0:
	.4byte 0xFFFF8000
_0801A3A4:
	lsl r0, r2, #16
	asr r0, r0, #16
	mov r1, #49
	neg r1, r1
	cmp r0, r1
	bne _0801A3E8
	add r6, r5, #0
	add r6, r6, #124
	ldrb r0, [r6]
	cmp r0, #2
	bne _0801A3E8
	mov r0, #41
	bl sub_08012468
	add r4, r0, #0
	cmp r4, #0
	beq _0801A3F8
	ldr r1, [r5, #84]
	mov r0, #0
	strb r0, [r1, #11]
	mov r0, #1
	strb r0, [r4, #11]
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0803D3D0
	str r5, [r4, #84]
	ldr r0, [r5, #84]
	str r0, [r4, #88]
	str r4, [r5, #84]
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	b _0801A3F8
_0801A3E8:
	lsl r0, r2, #16
	asr r0, r0, #16
	mov r1, #64
	neg r1, r1
	cmp r0, r1
	bne _0801A3F8
	mov r0, #90
_0801A3F6:
	strb r0, [r3]
_0801A3F8:
	add r0, r5, #0
	bl GetNextFrame
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801A254


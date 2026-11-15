	THUMB_FUNC_START sub_0802C53C
sub_0802C53C: @ 0x0802C53C
	push {r4-r6,lr}
	add r6, r0, #0
	lsl r1, r1, #16
	lsr r5, r1, #16
	asr r1, r1, #16
	cmp r1, #0
	bge _0802C55C
	ldr r0, _0802C558  @ =gUnknown_03006C80
	ldr r2, [r0, #8]
	add r0, r2, r1
	cmp r0, #0
	bge _0802C55C
	neg r4, r2
	b _0802C560
_0802C558:
	.4byte gUnknown_03006C80
_0802C55C:
	lsl r0, r5, #16
	asr r4, r0, #16
_0802C560:
	ldr r0, _0802C588  @ =gUnknown_03006C80
	add r0, r0, #36
	ldrb r1, [r0]
	cmp r1, #0
	beq _0802C58C
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _0802C58C
	lsl r0, r5, #16
	asr r0, r0, #16
	cmp r0, #0
	ble _0802C58C
	lsl r0, r0, #17
	lsr r5, r0, #16
	asr r4, r0, #16
	mov r0, #143
	bl play_sound
	b _0802C592
_0802C588:
	.4byte gUnknown_03006C80
_0802C58C:
	mov r0, #8
	bl play_sound
_0802C592:
	ldr r2, _0802C5BC  @ =gUnknown_03000420
	mov r1, #0
	mov r0, #1
	strb r0, [r2, #2]
	cmp r4, #0
	blt _0802C5C4
	ldr r1, [r2, #24]
	add r1, r1, r4
	str r1, [r2, #24]
	mov r0, #120
	strh r0, [r2, #32]
	ldr r0, _0802C5C0  @ =0x0000270F
	cmp r1, r0
	ble _0802C5B0
	str r0, [r2, #24]
_0802C5B0:
	ldrh r0, [r2, #34]
	cmp r0, #0
	bne _0802C5DE
	ldr r0, [r2, #24]
	b _0802C5DC
	.byte 0x00
	.byte 0x00
_0802C5BC:
	.4byte gUnknown_03000420
_0802C5C0:
	.4byte 0x0000270F
_0802C5C4:
	strh r1, [r2, #32]
	str r1, [r2, #24]
	ldr r1, [r2, #28]
	add r1, r1, r4
	str r1, [r2, #28]
	mov r0, #60
	strh r0, [r2, #34]
	ldr r0, _0802C640  @ =0xFFFFD8F1
	cmp r1, r0
	bge _0802C5DA
	str r0, [r2, #24]
_0802C5DA:
	ldr r0, [r2, #28]
_0802C5DC:
	str r0, [r2, #20]
_0802C5DE:
	lsl r0, r5, #16
	asr r1, r0, #16
	cmp r1, #0
	bge _0802C5EE
	ldr r0, _0802C644  @ =gUnknown_03006C80
	ldr r0, [r0, #8]
	cmp r0, #0
	beq _0802C69C
_0802C5EE:
	ldr r5, _0802C644  @ =gUnknown_03006C80
	ldrb r0, [r6, #10]
	lsl r0, r0, #2
	add r4, r5, #0
	add r4, r4, #12
	add r0, r0, r4
	ldr r3, [r0]
	add r0, r3, r1
	cmp r0, #0
	bge _0802C65C
	add r0, r1, #0
	bl sub_0800B830
	ldrb r2, [r6, #10]
	lsl r2, r2, #2
	add r2, r2, r4
	ldr r1, [r2]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r1, r0, #16
	mov r0, #0
	str r0, [r2]
	add r3, r5, #0
	add r3, r3, #37
	add r6, r4, #0
	mov r5, #3
_0802C622:
	mov r2, #4
	sub r4, r1, #1
_0802C626:
	ldrb r0, [r3]
	add r0, r0, #1
	and r0, r0, r5
	strb r0, [r3]
	ldrb r0, [r3]
	lsl r0, r0, #2
	add r1, r0, r6
	ldr r0, [r1]
	cmp r0, #0
	beq _0802C648
	sub r0, r0, #1
	str r0, [r1]
	b _0802C652
_0802C640:
	.4byte 0xFFFFD8F1
_0802C644:
	.4byte gUnknown_03006C80
_0802C648:
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _0802C626
_0802C652:
	lsl r0, r4, #16
	lsr r1, r0, #16
	cmp r1, #0
	bne _0802C622
	b _0802C66C
_0802C65C:
	ldr r2, _0802C6A4  @ =0x0001869F
	add r0, r3, #0
	bl sub_0802C528
	ldrb r1, [r6, #10]
	lsl r1, r1, #2
	add r1, r1, r4
	str r0, [r1]
_0802C66C:
	ldr r1, _0802C6A8  @ =gUnknown_03006C80
	mov r0, #0
	str r0, [r1, #8]
	mov r2, #0
	ldrb r0, [r1]
	cmp r2, r0
	bcs _0802C698
	add r3, r1, #0
	add r5, r3, #0
	add r5, r5, #12
	add r4, r0, #0
_0802C682:
	lsl r0, r2, #2
	add r0, r0, r5
	ldr r1, [r3, #8]
	ldr r0, [r0]
	add r1, r1, r0
	str r1, [r3, #8]
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, r4
	bcc _0802C682
_0802C698:
	bl sub_0802CF20
_0802C69C:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0802C6A4:
	.4byte 0x0001869F
_0802C6A8:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_0802C53C


	THUMB_FUNC_START sub_08026390
sub_08026390: @ 0x08026390
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	add r0, r4, #0
	bl sub_08009FB8
	cmp r0, #0
	beq _080263AE
	ldrb r0, [r4, #23]
	cmp r0, #0
	bne _080263B6
_080263AE:
	add r0, r4, #0
	bl sub_080264E0
	b _080263E6
_080263B6:
	add r0, r4, #0
	bl sub_08008E50
	ldrb r0, [r4, #23]
	cmp r0, #30
	bne _080263CE
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
_080263CE:
	ldrb r0, [r4, #23]
	cmp r0, #29
	bhi _080263E6
	ldrb r2, [r4, #28]
	lsl r1, r2, #30
	lsr r1, r1, #30
	mov r0, #1
	eor r1, r1, r0
	sub r0, r0, #5
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #28]
_080263E6:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08026390


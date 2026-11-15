	THUMB_FUNC_START sub_08024728
sub_08024728: @ 0x08024728
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _08024738
	sub r0, r0, #1
	strb r0, [r4, #23]
	b _08024770
_08024738:
	mov r0, #20
	strb r0, [r4, #20]
	mov r0, #120
	strb r0, [r4, #23]
	add r0, r0, #168
	str r0, [r4, #12]
	bl sub_08044594
	add r1, r0, #0
	str r1, [r4, #100]
	add r0, r4, #0
	bl 0x08009EA4
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	ldrb r1, [r1]
	add r1, r1, #2
	asr r1, r1, #2
	mov r0, #7
	and r1, r1, r0
	add r0, r4, #0
	add r0, r0, #42
	strb r1, [r0]
	add r1, r1, #20
	add r0, r4, #0
	bl 0x08003870
_08024770:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08024728

	.byte 0x00
	.byte 0x00

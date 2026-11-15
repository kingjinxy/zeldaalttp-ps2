	THUMB_FUNC_START sub_08135028
sub_08135028: @ 0x08135028
	push {r4,lr}
	add r2, r1, #0
	mov r0, #1
	ldrb r1, [r2]
	and r0, r0, r1
	cmp r0, #0
	beq _0813508C
	ldrb r3, [r2, #19]
	ldrb r1, [r2, #18]
	add r0, r3, #0
	mul r0, r1, r0
	lsr r3, r0, #5
	ldrb r4, [r2, #24]
	cmp r4, #1
	bne _08135050
	mov r0, #22
	ldrsb r0, [r2, r0]
	add r0, r0, #128
	mul r0, r3, r0
	lsr r3, r0, #7
_08135050:
	mov r0, #20
	ldrsb r0, [r2, r0]
	lsl r0, r0, #1
	mov r1, #21
	ldrsb r1, [r2, r1]
	add r1, r0, r1
	cmp r4, #2
	bne _08135066
	mov r0, #22
	ldrsb r0, [r2, r0]
	add r1, r1, r0
_08135066:
	mov r0, #128
	neg r0, r0
	cmp r1, r0
	bge _08135072
	add r1, r0, #0
	b _08135078
_08135072:
	cmp r1, #127
	ble _08135078
	mov r1, #127
_08135078:
	add r0, r1, #0
	add r0, r0, #128
	mul r0, r3, r0
	lsr r0, r0, #8
	strb r0, [r2, #16]
	mov r0, #127
	sub r0, r0, r1
	mul r0, r3, r0
	lsr r0, r0, #8
	strb r0, [r2, #17]
_0813508C:
	ldrb r1, [r2]
	mov r0, #4
	and r0, r0, r1
	add r3, r1, #0
	cmp r0, #0
	beq _081350D0
	mov r0, #14
	ldrsb r0, [r2, r0]
	ldrb r1, [r2, #15]
	mul r0, r1, r0
	mov r1, #12
	ldrsb r1, [r2, r1]
	add r1, r1, r0
	lsl r1, r1, #2
	mov r0, #10
	ldrsb r0, [r2, r0]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r0, #11
	ldrsb r0, [r2, r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldrb r0, [r2, #13]
	add r1, r0, r1
	ldrb r0, [r2, #24]
	cmp r0, #0
	bne _081350CA
	mov r0, #22
	ldrsb r0, [r2, r0]
	lsl r0, r0, #4
	add r1, r1, r0
_081350CA:
	asr r0, r1, #8
	strb r0, [r2, #8]
	strb r1, [r2, #9]
_081350D0:
	mov r0, #250
	and r0, r0, r3
	strb r0, [r2]
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08135028


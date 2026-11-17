	THUMB_FUNC_START sub_080207D8
sub_080207D8: @ 0x080207D8
	push {lr}
	add r2, r0, #0
	ldrb r0, [r2, #23]
	sub r0, r0, #1
	strb r0, [r2, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0802084A
	ldrb r0, [r2, #24]
	sub r0, r0, #1
	strb r0, [r2, #24]
	ldrb r0, [r2, #24]
	cmp r0, #1
	beq _08020810
	cmp r0, #1
	bgt _080207FE
	cmp r0, #0
	beq _0802080C
	b _08020806
_080207FE:
	cmp r0, #2
	beq _0802083A
	cmp r0, #3
	beq _08020810
_08020806:
	add r1, r2, #0
	add r1, r1, #116
	b _08020842
_0802080C:
	mov r0, #1
	b _08020848
_08020810:
	mov r0, #2
	strb r0, [r2, #20]
	add r0, r2, #0
	add r0, r0, #116
	ldrb r0, [r0]
	strb r0, [r2, #23]
	add r3, r2, #0
	add r3, r3, #43
	ldrb r0, [r3]
	mov r1, #16
	eor r0, r0, r1
	strb r0, [r3]
	lsr r0, r0, #3
	add r1, r2, #0
	add r1, r1, #42
	strb r0, [r1]
	ldrb r1, [r1]
	add r0, r2, #0
	bl sub_08003870
	b _0802084A
_0802083A:
	add r1, r2, #0
	add r1, r1, #116
	mov r0, #60
	strb r0, [r1]
_08020842:
	ldrb r0, [r1]
	strb r0, [r2, #23]
	mov r0, #2
_08020848:
	strb r0, [r2, #20]
_0802084A:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080207D8

	.byte 0x00
	.byte 0x00

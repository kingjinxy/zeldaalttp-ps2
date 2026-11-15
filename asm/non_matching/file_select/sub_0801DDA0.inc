	THUMB_FUNC_START sub_0801DDA0
sub_0801DDA0: @ 0x0801DDA0
	push {r4,r5,lr}
	add r4, r0, #0
	mov r1, #16
	bl sub_0801DEC0
	add r5, r4, #0
	add r5, r5, #113
	ldrb r0, [r5]
	cmp r0, #0
	beq _0801DDB8
	sub r0, r0, #1
	strb r0, [r5]
_0801DDB8:
	add r0, r4, #0
	bl 0x0800963C
	lsl r0, r0, #16
	cmp r0, #0
	bne _0801DDC8
	mov r0, #1
	strb r0, [r4, #23]
_0801DDC8:
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	ldrb r0, [r5]
	cmp r0, #0
	bne _0801DE00
	add r0, r4, #0
	mov r1, #16
	bl 0x0800997C
	lsl r1, r0, #24
	lsr r2, r1, #24
	mov r1, #128
	and r1, r1, r0
	cmp r1, #0
	beq _0801DE00
	mov r0, #3
	strb r0, [r4, #20]
	mov r0, #16
	strb r0, [r4, #23]
	mov r0, #1
	strb r0, [r4, #24]
	mov r0, #24
	and r0, r0, r2
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	b _0801DE0C
_0801DE00:
	ldrb r0, [r4, #23]
	cmp r0, #0
	bne _0801DE0C
	add r0, r4, #0
	bl sub_0801DF24
_0801DE0C:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801DDA0

	.byte 0x00
	.byte 0x00

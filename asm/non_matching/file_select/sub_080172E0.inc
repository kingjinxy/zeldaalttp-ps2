	THUMB_FUNC_START sub_080172E0
sub_080172E0: @ 0x080172E0
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #24]
	cmp r0, #0
	beq _08017312
	sub r0, r0, #1
	strb r0, [r4, #24]
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _08017312
	mov r0, #4
	strb r0, [r4, #20]
	mov r0, #32
	strb r0, [r4, #23]
	strb r1, [r4, #24]
	add r1, r4, #0
	add r1, r1, #63
	mov r0, #6
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #12
	bl 0x08003870
	b _0801733C
_08017312:
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08017330
	bl 0x0800099C
	mov r1, #28
	and r0, r0, r1
	add r0, r0, #30
	strb r0, [r4, #23]
	add r0, r4, #0
	bl sub_0801740C
_08017330:
	add r0, r4, #0
	bl 0x0800963C
	add r0, r4, #0
	bl 0x08003828
_0801733C:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080172E0

	.byte 0x00
	.byte 0x00

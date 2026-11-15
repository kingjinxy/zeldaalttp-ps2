	THUMB_FUNC_START sub_08016EF0
sub_08016EF0: @ 0x08016EF0
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #24]
	cmp r0, #0
	bne _08016F36
	add r0, r4, #0
	mov r1, #12
	bl 0x0800997C
	lsl r1, r0, #24
	lsr r2, r1, #24
	mov r1, #128
	and r1, r1, r0
	cmp r1, #0
	beq _08016F3A
	mov r0, #3
	strb r0, [r4, #20]
	mov r0, #16
	strb r0, [r4, #23]
	mov r0, #208
	lsl r0, r0, #1
	str r0, [r4, #12]
	mov r1, #24
	and r1, r1, r2
	add r0, r4, #0
	add r0, r0, #43
	strb r1, [r0]
	lsr r1, r1, #3
	sub r0, r0, #1
	strb r1, [r0]
	add r1, r1, #4
	add r0, r4, #0
	bl 0x08003870
	b _08016F56
_08016F36:
	sub r0, r0, #1
	strb r0, [r4, #24]
_08016F3A:
	ldrb r0, [r4, #23]
	cmp r0, #0
	bne _08016F46
	mov r0, #1
	strb r0, [r4, #20]
	b _08016F56
_08016F46:
	sub r0, r0, #1
	strb r0, [r4, #23]
	add r0, r4, #0
	bl 0x0800963C
	add r0, r4, #0
	bl 0x08003828
_08016F56:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08016EF0


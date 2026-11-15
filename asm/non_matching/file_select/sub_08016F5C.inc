	THUMB_FUNC_START sub_08016F5C
sub_08016F5C: @ 0x08016F5C
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _08016F6C
	sub r0, r0, #1
	strb r0, [r4, #23]
	b _08016F96
_08016F6C:
	add r0, r4, #0
	bl 0x08003828
	add r0, r4, #0
	bl 0x0800963C
	lsl r0, r0, #16
	cmp r0, #0
	bne _08016F96
	mov r0, #1
	strb r0, [r4, #20]
	mov r0, #128
	str r0, [r4, #12]
	mov r0, #20
	strb r0, [r4, #24]
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r0, r4, #0
	bl 0x08003870
_08016F96:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08016F5C


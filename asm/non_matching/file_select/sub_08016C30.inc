	THUMB_FUNC_START sub_08016C30
sub_08016C30: @ 0x08016C30
	push {r4,lr}
	add r4, r0, #0
	bl sub_0800963C
	mov r1, #128
	lsl r1, r1, #6
	add r0, r4, #0
	bl sub_08003594
	cmp r0, #0
	bne _08016C54
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	add r0, r4, #0
	mov r1, #4
	bl sub_08003870
_08016C54:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08016C30

	.byte 0x00
	.byte 0x00

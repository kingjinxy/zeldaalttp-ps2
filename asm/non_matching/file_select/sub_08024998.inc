	THUMB_FUNC_START sub_08024998
sub_08024998: @ 0x08024998
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080249B4
	mov r0, #3
	strb r0, [r4, #20]
	add r0, r4, #0
	mov r1, #9
	bl 0x08003870
_080249B4:
	add r0, r4, #0
	add r0, r0, #60
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080249C6
	mov r0, #1
	strb r0, [r4, #20]
_080249C6:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08024998


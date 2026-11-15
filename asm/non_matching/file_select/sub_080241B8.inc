	THUMB_FUNC_START sub_080241B8
sub_080241B8: @ 0x080241B8
	push {r4,lr}
	add r4, r0, #0
	bl sub_08024FEC
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080241E2
	mov r0, #4
	strb r0, [r4, #20]
	add r0, r4, #0
	bl sub_08024BDC
	ldr r2, [r4, #112]
	ldrb r1, [r4, #30]
	lsr r1, r1, #4
	lsl r0, r1, #4
	orr r0, r0, r1
	strb r0, [r2, #30]
_080241E2:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080241B8


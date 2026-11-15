	THUMB_FUNC_START sub_0801E690
sub_0801E690: @ 0x0801E690
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801E6BA
	mov r0, #3
	strb r0, [r4, #20]
	mov r0, #120
	strb r0, [r4, #23]
	mov r0, #224
	lsl r0, r0, #1
	str r0, [r4, #12]
	add r0, r4, #0
	mov r1, #8
	bl 0x08003870
_0801E6BA:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801E690


	THUMB_FUNC_START sub_080189F4
sub_080189F4: @ 0x080189F4
	push {r4,lr}
	add r4, r0, #0
	bl sub_0800963C
	lsl r0, r0, #16
	cmp r0, #0
	bne _08018A0E
	ldrb r0, [r4, #20]
	sub r0, r0, #2
	strb r0, [r4, #20]
	ldr r0, [r4, #12]
	lsl r0, r0, #1
	str r0, [r4, #12]
_08018A0E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080189F4


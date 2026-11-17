	THUMB_FUNC_START sub_0801C044
sub_0801C044: @ 0x0801C044
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801C062
	mov r0, #6
	strb r0, [r4, #20]
	add r0, r4, #0
	bl sub_0801BAAC
_0801C062:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801C044


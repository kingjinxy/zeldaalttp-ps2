	THUMB_FUNC_START sub_0801BBE8
sub_0801BBE8: @ 0x0801BBE8
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	bl sub_0801BA38
	ldrb r0, [r4, #23]
	cmp r0, #0
	bne _0801BC10
	mov r0, #4
	strb r0, [r4, #20]
	mov r0, #16
	strb r0, [r4, #23]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
_0801BC10:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801BBE8

	.byte 0x00
	.byte 0x00

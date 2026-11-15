	THUMB_FUNC_START sub_080232D4
sub_080232D4: @ 0x080232D4
	add r1, r0, #0
	add r0, r0, #125
	ldrb r0, [r0]
	cmp r0, #3
	bne _080232E6
	mov r0, #4
	strb r0, [r1, #20]
	mov r0, #180
	strb r0, [r1, #23]
_080232E6:
	bx lr
	THUMB_FUNC_END sub_080232D4


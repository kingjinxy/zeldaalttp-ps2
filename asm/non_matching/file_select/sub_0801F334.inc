	THUMB_FUNC_START sub_0801F334
sub_0801F334: @ 0x0801F334
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r0, r4, #0
	bl 0x080096C4
	mov r1, #192
	lsl r1, r1, #5
	add r0, r4, #0
	bl 0x08003594
	cmp r0, #0
	bne _0801F37E
	mov r0, #5
	strb r0, [r4, #20]
	mov r0, #16
	strb r0, [r4, #23]
	mov r0, #128
	str r0, [r4, #12]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #127
	and r0, r0, r1
	strb r0, [r2]
	add r1, r4, #0
	add r1, r1, #63
	mov r0, #50
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #12
	bl 0x08003870
	add r0, r4, #0
	bl sub_0804CA4C
_0801F37E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801F334


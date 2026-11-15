	THUMB_FUNC_START sub_08022004
sub_08022004: @ 0x08022004
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #255
	bne _08022026
	mov r0, #10
	strb r0, [r4, #20]
	mov r0, #240
	strb r0, [r4, #23]
	add r0, r4, #0
	mov r1, #32
	bl 0x08003870
_08022026:
	add r0, r4, #0
	add r0, r0, #35
	ldrb r0, [r0]
	cmp r0, #32
	beq _08022038
	add r0, r4, #0
	mov r1, #32
	bl 0x08003870
_08022038:
	add r0, r4, #0
	bl sub_08022734
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08022004


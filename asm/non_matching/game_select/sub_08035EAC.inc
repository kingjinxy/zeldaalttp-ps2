	THUMB_FUNC_START sub_08035EAC
sub_08035EAC: @ 0x08035EAC
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08035ECE
	mov r0, #1
	mov r1, #8
	bl sub_0800C0B0
	mov r0, #11
	bl set_main_state
_08035ECE:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08035EAC


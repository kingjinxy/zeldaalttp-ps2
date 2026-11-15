	THUMB_FUNC_START sub_08021F38
sub_08021F38: @ 0x08021F38
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _08021F48
	sub r0, r0, #1
	strb r0, [r4, #23]
	b _08021F5E
_08021F48:
	mov r0, #11
	strb r0, [r4, #20]
	mov r0, #240
	strb r0, [r4, #23]
	add r0, r4, #0
	mov r1, #31
	bl 0x08003870
	add r0, r4, #0
	bl sub_08022998
_08021F5E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08021F38


	THUMB_FUNC_START sub_08034C28
sub_08034C28: @ 0x08034C28
	push {r4,lr}
	add r4, r0, #0
	mov r1, #144
	lsl r1, r1, #6
	bl 0x08003594
	cmp r0, #0
	bne _08034C3E
	ldr r1, [r4, #96]
	mov r0, #1
	strb r0, [r1, #4]
_08034C3E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08034C28


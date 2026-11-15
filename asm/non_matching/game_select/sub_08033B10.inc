	THUMB_FUNC_START sub_08033B10
sub_08033B10: @ 0x08033B10
	push {r4,r5,lr}
	add r5, r0, #0
	mov r0, #88
	mov r1, #4
	mov r2, #0
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	beq _08033B46
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0803D3D0
	str r5, [r4, #84]
	add r0, r5, #0
	bl sub_08034238
	ldrb r1, [r5, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r5, #28]
	mov r0, #0
	strb r0, [r5, #24]
_08033B46:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08033B10


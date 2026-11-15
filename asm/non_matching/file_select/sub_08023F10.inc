	THUMB_FUNC_START sub_08023F10
sub_08023F10: @ 0x08023F10
	push {r4,lr}
	add r4, r0, #0
	mov r0, #44
	bl sub_08012468
	add r1, r0, #0
	cmp r1, #0
	beq _08023F2E
	mov r0, #4
	strb r0, [r1, #10]
	ldrb r0, [r4, #23]
	strb r0, [r1, #23]
	add r0, r4, #0
	bl sub_0803D3D0
_08023F2E:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08023F10


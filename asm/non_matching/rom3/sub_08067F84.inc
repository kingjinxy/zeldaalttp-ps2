	THUMB_FUNC_START sub_08067F84
sub_08067F84: @ 0x08067F84
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	mov r8, r0
	add r5, r2, #0
	lsl r1, r1, #16
	lsr r4, r1, #16
	mov r6, #0
	mov r7, #0
	mov r0, #1
	mov r1, r8
	and r0, r0, r1
	cmp r0, #0
	beq _08067FC6
	add r0, r4, #0
	add r1, r5, #0
	mov r2, #8
	bl sub_08068074
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _08067FC6
	add r0, r4, #0
	add r0, r0, #8
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r1, r5, #0
	mov r2, #8
	bl sub_08068074
	lsl r0, r0, #24
	lsr r6, r0, #24
_08067FC6:
	mov r0, #2
	mov r1, r8
	and r0, r0, r1
	cmp r0, #0
	beq _08068000
	mov r1, #128
	lsl r1, r1, #5
	add r0, r4, r1
	lsl r0, r0, #16
	lsr r4, r0, #16
	add r0, r4, #0
	add r1, r5, #0
	mov r2, #8
	bl sub_08068074
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #0
	bne _08068000
	add r0, r4, #0
	add r0, r0, #8
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r1, r5, #0
	mov r2, #8
	bl sub_08068074
	lsl r0, r0, #24
	lsr r7, r0, #24
_08068000:
	lsl r0, r7, #1
	orr r6, r6, r0
	lsl r0, r6, #24
	lsr r0, r0, #24
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08067F84

	.byte 0x00
	.byte 0x00

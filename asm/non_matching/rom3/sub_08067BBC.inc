	THUMB_FUNC_START sub_08067BBC
sub_08067BBC: @ 0x08067BBC
	push {r4-r7,lr}
	sub sp, sp, #8
	add r7, r1, #0
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_08068014
	add r6, r0, #0
	ldr r0, _08067CB4  @ =0x54463453
	mov r5, sp
	str r0, [sp, #4]
	add r0, sp, #4
	mov r1, #4
	bl sub_080679B0
	add r4, r0, #0
	lsl r4, r4, #16
	lsr r4, r4, #16
	ldrh r1, [r6]
	add r0, r7, #0
	bl sub_080679B0
	add r4, r4, r0
	lsl r4, r4, #16
	lsr r4, r4, #16
	mov r0, sp
	strh r4, [r0]
	lsl r4, r4, #16
	asr r4, r4, #16
	neg r4, r4
	strh r4, [r5, #2]
	ldrh r0, [r6, #6]
	ldrh r2, [r6]
	add r1, r7, #0
	bl sub_08068074
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	beq _08067C1E
	ldrh r1, [r6, #2]
	mov r0, #1
	mov r2, sp
	bl sub_08067F84
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	bne _08067C46
_08067C1E:
	ldrh r1, [r6, #4]
	ldr r0, _08067CB8  @ =0x0000FFFF
	cmp r1, r0
	beq _08067C46
	ldrh r0, [r6, #8]
	ldrh r2, [r6]
	add r1, r7, #0
	bl sub_08068074
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	beq _08067C46
	ldrh r1, [r6, #4]
	mov r0, #1
	mov r2, sp
	bl sub_08067F84
	lsl r0, r0, #24
	lsr r4, r0, #24
_08067C46:
	mov r0, #128
	lsl r0, r0, #5
	add r5, r0, #0
	ldrh r1, [r6, #6]
	add r0, r5, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldrh r2, [r6]
	add r1, r7, #0
	bl sub_08068074
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	beq _08067C76
	ldrh r1, [r6, #2]
	mov r0, #2
	mov r2, sp
	bl sub_08067F84
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _08067CA4
_08067C76:
	ldrh r1, [r6, #4]
	ldr r0, _08067CB8  @ =0x0000FFFF
	cmp r1, r0
	beq _08067CA4
	ldrh r1, [r6, #8]
	add r0, r5, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldrh r2, [r6]
	add r1, r7, #0
	bl sub_08068074
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	beq _08067CA4
	ldrh r1, [r6, #4]
	mov r0, #2
	mov r2, sp
	bl sub_08067F84
	lsl r0, r0, #24
	lsr r2, r0, #24
_08067CA4:
	lsl r0, r2, #1
	orr r4, r4, r0
	lsl r0, r4, #24
	lsr r0, r0, #24
	add sp, sp, #8
	pop {r4-r7}
	pop {r1}
	bx r1
_08067CB4:
	.4byte 0x54463453
_08067CB8:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_08067BBC


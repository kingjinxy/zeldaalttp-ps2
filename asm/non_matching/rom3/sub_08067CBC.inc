	THUMB_FUNC_START sub_08067CBC
sub_08067CBC: @ 0x08067CBC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #12
	add r7, r1, #0
	lsl r0, r0, #24
	lsr r0, r0, #24
	bl sub_08068014
	add r5, r0, #0
	ldrh r1, [r5, #2]
	add r4, sp, #4
	mov r0, #1
	add r2, r4, #0
	bl sub_08067E68
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r8, r4
	cmp r6, #2
	bne _08067D0E
	ldrh r0, [r5, #6]
	ldrh r2, [r5]
	add r1, r7, #0
	bl sub_08068030
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	beq _08067D12
	ldrh r2, [r5]
	mov r0, r8
	add r1, r7, #0
	bl sub_08067E18
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	beq _08067D12
_08067D0A:
	mov r0, #1
	b _08067E06
_08067D0E:
	cmp r6, #0
	bne _08067D4E
_08067D12:
	ldrh r1, [r5, #4]
	ldr r0, _08067D94  @ =0x0000FFFF
	cmp r1, r0
	beq _08067D4E
	mov r0, #1
	mov r2, r8
	bl sub_08067E68
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #2
	bne _08067D4E
	ldrh r0, [r5, #8]
	ldrh r2, [r5]
	add r1, r7, #0
	bl sub_08068030
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	beq _08067D4E
	ldrh r2, [r5]
	mov r0, r8
	add r1, r7, #0
	bl sub_08067E18
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _08067D0A
_08067D4E:
	ldrh r1, [r5, #2]
	mov r0, #2
	mov r2, r8
	bl sub_08067E68
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #2
	bne _08067D98
	mov r1, #128
	lsl r1, r1, #5
	add r0, r1, #0
	ldrh r1, [r5, #6]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldrh r2, [r5]
	add r1, r7, #0
	bl sub_08068030
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	beq _08067D9C
	ldrh r2, [r5]
	mov r0, r8
	add r1, r7, #0
	bl sub_08067E18
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	beq _08067D9C
_08067D90:
	mov r0, #2
	b _08067E06
_08067D94:
	.4byte 0x0000FFFF
_08067D98:
	cmp r4, #0
	bne _08067DE4
_08067D9C:
	ldrh r1, [r5, #4]
	ldr r0, _08067E14  @ =0x0000FFFF
	cmp r1, r0
	beq _08067DE4
	mov r0, #2
	mov r2, r8
	bl sub_08067E68
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #2
	bne _08067DE4
	mov r1, #128
	lsl r1, r1, #5
	add r0, r1, #0
	ldrh r1, [r5, #8]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldrh r2, [r5]
	add r1, r7, #0
	bl sub_08068030
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	beq _08067DE4
	ldrh r2, [r5]
	mov r0, r8
	add r1, r7, #0
	bl sub_08067E18
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	bne _08067D90
_08067DE4:
	mov r0, #0
	str r0, [sp]
	ldrh r2, [r5]
	lsr r2, r2, #2
	mov r0, #160
	lsl r0, r0, #19
	orr r2, r2, r0
	mov r0, sp
	add r1, r7, #0
	bl CpuSet
	mov r0, #0
	cmp r6, #0
	bne _08067E06
	cmp r4, #0
	bne _08067E06
	sub r0, r0, #1
_08067E06:
	add sp, sp, #12
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_08067E14:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_08067CBC


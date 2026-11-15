	THUMB_FUNC_START sub_08067E68
sub_08067E68: @ 0x08067E68
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	mov r8, r0
	add r4, r2, #0
	lsl r1, r1, #16
	lsr r6, r1, #16
	mov r5, #0
	mov r7, #0
	mov r0, #1
	mov r1, r8
	and r0, r0, r1
	cmp r0, #0
	beq _08067EC4
	add r0, r6, #0
	add r1, r4, #0
	mov r2, #8
	bl sub_08068030
	lsl r0, r0, #24
	cmp r0, #0
	beq _08067EA2
	add r0, r4, #0
	bl sub_08067F28
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	bne _08067EC4
_08067EA2:
	add r0, r6, #0
	add r0, r0, #8
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r1, r4, #0
	mov r2, #8
	bl sub_08068030
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	beq _08067EC4
	add r0, r4, #0
	bl sub_08067F28
	lsl r0, r0, #24
	lsr r5, r0, #24
_08067EC4:
	mov r0, #2
	mov r1, r8
	and r0, r0, r1
	cmp r0, #0
	beq _08067F18
	mov r1, #128
	lsl r1, r1, #5
	add r0, r6, r1
	lsl r0, r0, #16
	lsr r6, r0, #16
	add r0, r6, #0
	add r1, r4, #0
	mov r2, #8
	bl sub_08068030
	lsl r0, r0, #24
	cmp r0, #0
	beq _08067EF6
	add r0, r4, #0
	bl sub_08067F28
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #0
	bne _08067F18
_08067EF6:
	add r0, r6, #0
	add r0, r0, #8
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r1, r4, #0
	mov r2, #8
	bl sub_08068030
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #0
	beq _08067F18
	add r0, r4, #0
	bl sub_08067F28
	lsl r0, r0, #24
	lsr r7, r0, #24
_08067F18:
	orr r5, r5, r7
	add r0, r5, #0
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08067E68

	.byte 0x00
	.byte 0x00

	THUMB_FUNC_START sub_08067AE0
sub_08067AE0: @ 0x08067AE0
	push {r4-r7,lr}
	mov r0, #3
	bl sub_08068014
	add r4, r0, #0
	ldrh r0, [r4, #6]
	ldr r6, _08067B64  @ =gUnknown_0814C630
	ldrh r2, [r4]
	add r1, r6, #0
	bl sub_080680C4
	lsl r0, r0, #16
	lsr r0, r0, #16
	neg r1, r0
	orr r1, r1, r0
	lsr r5, r1, #31
	mov r0, #128
	lsl r0, r0, #5
	add r7, r0, #0
	ldrh r1, [r4, #6]
	add r0, r7, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldrh r2, [r4]
	add r1, r6, #0
	bl sub_080680C4
	lsl r0, r0, #16
	cmp r0, #0
	beq _08067B20
	mov r0, #2
	orr r5, r5, r0
_08067B20:
	cmp r5, #0
	beq _08067B54
	cmp r5, #3
	bne _08067B3A
	mov r0, #2
	bl sub_08067B68
	mov r0, #1
	bl sub_08067B68
	mov r0, #0
	bl sub_08067B68
_08067B3A:
	ldrh r0, [r4, #6]
	ldrh r2, [r4]
	add r1, r6, #0
	bl sub_08068074
	ldrh r1, [r4, #6]
	add r0, r7, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldrh r2, [r4]
	add r1, r6, #0
	bl sub_08068074
_08067B54:
	mov r1, #3
	eor r1, r1, r5
	neg r0, r1
	orr r0, r0, r1
	lsr r0, r0, #31
	pop {r4-r7}
	pop {r1}
	bx r1
_08067B64:
	.4byte gUnknown_0814C630
	THUMB_FUNC_END sub_08067AE0


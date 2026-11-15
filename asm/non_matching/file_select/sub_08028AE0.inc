	THUMB_FUNC_START sub_08028AE0
sub_08028AE0: @ 0x08028AE0
	push {r4-r6,lr}
	add r2, r0, #0
	add r6, r2, #0
	add r6, r6, #124
	ldrb r0, [r6]
	cmp r0, #0
	beq _08028AF2
	sub r0, r0, #1
	strb r0, [r6]
_08028AF2:
	add r5, r2, #0
	add r5, r5, #125
	ldrb r0, [r5]
	cmp r0, #0
	beq _08028B00
	sub r0, r0, #1
	strb r0, [r5]
_08028B00:
	add r4, r2, #0
	add r4, r4, #126
	ldrb r0, [r4]
	cmp r0, #0
	beq _08028B0E
	sub r0, r0, #1
	strb r0, [r4]
_08028B0E:
	add r3, r2, #0
	add r3, r3, #127
	ldrb r0, [r3]
	cmp r0, #0
	beq _08028B1C
	sub r0, r0, #1
	strb r0, [r3]
_08028B1C:
	ldrb r0, [r2, #24]
	cmp r0, #0
	beq _08028B26
	sub r0, r0, #1
	strb r0, [r2, #24]
_08028B26:
	add r0, r2, #0
	add r0, r0, #65
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08028BA0
	ldr r0, [r2, #76]
	ldrb r0, [r0, #10]
	cmp r0, #1
	beq _08028B60
	cmp r0, #1
	bgt _08028B46
	cmp r0, #0
	beq _08028B50
	b _08028B90
_08028B46:
	cmp r0, #2
	beq _08028B70
	cmp r0, #3
	beq _08028B80
	b _08028B90
_08028B50:
	ldrb r0, [r6]
	cmp r0, #0
	bne _08028BA0
	add r0, r2, #0
	add r1, r6, #0
	bl sub_08028C54
	b _08028BA0
_08028B60:
	ldrb r0, [r5]
	cmp r0, #0
	bne _08028BA0
	add r0, r2, #0
	add r1, r5, #0
	bl sub_08028C54
	b _08028BA0
_08028B70:
	ldrb r0, [r4]
	cmp r0, #0
	bne _08028BA0
	add r0, r2, #0
	add r1, r4, #0
	bl sub_08028C54
	b _08028BA0
_08028B80:
	ldrb r0, [r3]
	cmp r0, #0
	bne _08028BA0
	add r0, r2, #0
	add r1, r3, #0
	bl sub_08028C54
	b _08028BA0
_08028B90:
	ldrb r0, [r2, #24]
	cmp r0, #0
	bne _08028BA0
	add r1, r2, #0
	add r1, r1, #24
	add r0, r2, #0
	bl sub_08028C54
_08028BA0:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08028AE0

	.byte 0x00
	.byte 0x00

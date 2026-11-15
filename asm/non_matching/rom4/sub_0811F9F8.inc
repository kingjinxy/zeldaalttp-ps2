	THUMB_FUNC_START sub_0811F9F8
sub_0811F9F8: @ 0x0811F9F8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _0811FA40  @ =gRam
	ldr r1, _0811FA44  @ =0x000009AD
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0811FA0C
	b _0811FB60
_0811FA0C:
	ldr r1, _0811FA48  @ =0x00000E1F
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #2
	bls _0811FA6A
	ldr r1, _0811FA4C  @ =0x000017A6
	add r0, r2, r1
	ldrh r0, [r0]
	mov r1, #255
	lsl r1, r1, #8
	and r1, r1, r0
	cmp r1, #0
	bne _0811FA54
	ldr r1, _0811FA50  @ =0x00000DBB
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #4
	and r1, r1, r0
	cmp r1, #0
	bne _0811FA66
	b _0811FA5C
	.byte 0x00
	.byte 0x00
_0811FA40:
	.4byte gRam
_0811FA44:
	.4byte 0x000009AD
_0811FA48:
	.4byte 0x00000E1F
_0811FA4C:
	.4byte 0x000017A6
_0811FA50:
	.4byte 0x00000DBB
_0811FA54:
	mov r0, #176
	lsl r0, r0, #4
	cmp r1, r0
	bne _0811FA66
_0811FA5C:
	bl sub_08133668
	bl sub_0813381C
	b _0811FA6A
_0811FA66:
	bl sub_08133644
_0811FA6A:
	ldr r1, _0811FAC0  @ =gRam
	ldr r2, _0811FAC4  @ =0x00000E1F
	add r0, r1, r2
	add r5, r4, r0
	ldrb r2, [r5]
	add r3, r1, #0
	cmp r2, #2
	bne _0811FAD4
	ldr r1, _0811FAC8  @ =0x00001844
	add r0, r3, r1
	add r1, r4, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811FAB2
	strb r2, [r1]
	ldr r2, _0811FACC  @ =0x00000E29
	add r0, r3, r2
	add r1, r4, r0
	ldrb r2, [r1]
	add r0, r2, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #2
	bne _0811FAB2
	strb r2, [r1]
	ldr r1, _0811FAD0  @ =0x00000DF7
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
	mov r0, #3
	strb r0, [r5]
_0811FAB2:
	ldr r2, _0811FAD0  @ =0x00000DF7
	add r1, r3, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _0811FB3C
_0811FAC0:
	.4byte gRam
_0811FAC4:
	.4byte 0x00000E1F
_0811FAC8:
	.4byte 0x00001844
_0811FACC:
	.4byte 0x00000E29
_0811FAD0:
	.4byte 0x00000DF7
_0811FAD4:
	ldr r1, _0811FB08  @ =0x00001844
	add r0, r3, r1
	add r1, r4, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811FAF8
	mov r0, #2
	strb r0, [r1]
	ldr r2, _0811FB0C  @ =0x00000E29
	add r1, r3, r2
	add r1, r4, r1
	ldrb r0, [r1]
	mov r2, #1
	eor r0, r0, r2
	strb r0, [r1]
_0811FAF8:
	ldrb r0, [r5]
	cmp r0, #1
	beq _0811FB22
	cmp r0, #1
	bgt _0811FB10
	cmp r0, #0
	beq _0811FB1A
	b _0811FB48
_0811FB08:
	.4byte 0x00001844
_0811FB0C:
	.4byte 0x00000E29
_0811FB10:
	cmp r0, #3
	beq _0811FB3C
	cmp r0, #4
	beq _0811FB2A
	b _0811FB48
_0811FB1A:
	add r0, r4, #0
	bl sub_0811FB6C
	b _0811FB60
_0811FB22:
	add r0, r4, #0
	bl sub_0811FC0C
	b _0811FB60
_0811FB2A:
	ldr r1, _0811FB44  @ =gUnknown_02006892
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0811FB3C
	mov r0, #5
	strb r0, [r5]
_0811FB3C:
	add r0, r4, #0
	bl sub_0811FCD8
	b _0811FB60
_0811FB44:
	.4byte gUnknown_02006892
_0811FB48:
	ldr r1, _0811FB68  @ =0x00000DF7
	add r0, r3, r1
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #16
	cmp r0, #128
	ble _0811FB58
	mov r0, #127
_0811FB58:
	strb r0, [r1]
	add r0, r4, #0
	bl sub_0811FCD8
_0811FB60:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811FB68:
	.4byte 0x00000DF7
	THUMB_FUNC_END sub_0811F9F8


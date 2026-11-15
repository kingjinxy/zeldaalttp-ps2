	THUMB_FUNC_START sub_081169E4
sub_081169E4: @ 0x081169E4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r5, r2, #0
	ldr r3, _08116A24  @ =gRam
	ldr r1, _08116A28  @ =0x00001844
	add r0, r3, r1
	add r1, r2, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	mov r4, #0
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08116A1A
	mov r0, #7
	strb r0, [r1]
	ldr r0, _08116A2C  @ =0x00000E29
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	beq _08116A30
_08116A1A:
	add r0, r2, #0
	bl sub_08116AA8
	b _08116AA0
	.byte 0x00
	.byte 0x00
_08116A24:
	.4byte gRam
_08116A28:
	.4byte 0x00001844
_08116A2C:
	.4byte 0x00000E29
_08116A30:
	ldr r1, _08116A84  @ =0x00000E15
	add r0, r3, r1
	add r0, r5, r0
	strb r4, [r0]
	ldr r2, _08116A88  @ =0x0000176D
	add r0, r3, r2
	strb r4, [r0]
	ldr r1, _08116A8C  @ =0x00001705
	add r0, r3, r1
	strb r4, [r0]
	ldr r2, _08116A90  @ =0x00000E1F
	add r0, r3, r2
	add r0, r5, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _08116AA0
	ldr r2, _08116A94  @ =0x000016D4
	add r0, r3, r2
	strb r1, [r0]
	add r2, r2, #44
	add r0, r3, r2
	strb r1, [r0]
	ldr r1, _08116A98  @ =0x000009C6
	add r0, r3, r1
	ldrh r1, [r0]
	mov r0, #64
	and r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	neg r0, r0
	lsr r0, r0, #31
	add r2, r2, #108
	add r1, r3, r2
	strb r0, [r1]
	sub r2, r2, #91
	add r1, r3, r2
	strb r0, [r1]
	cmp r0, #0
	beq _08116A9C
	bl sub_08133678
	b _08116AA0
_08116A84:
	.4byte 0x00000E15
_08116A88:
	.4byte 0x0000176D
_08116A8C:
	.4byte 0x00001705
_08116A90:
	.4byte 0x00000E1F
_08116A94:
	.4byte 0x000016D4
_08116A98:
	.4byte 0x000009C6
_08116A9C:
	bl sub_08133644
_08116AA0:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081169E4

	.byte 0x00
	.byte 0x00

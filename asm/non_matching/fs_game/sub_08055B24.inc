	THUMB_FUNC_START sub_08055B24
sub_08055B24: @ 0x08055B24
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _08055B56
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	b _08055B5C
_08055B56:
	ldr r0, [r7]
	bl 0x08002E64
_08055B5C:
	mov r1, #144
	lsl r1, r1, #6
	ldr r0, [r7]
	bl 0x08003594
	cmp r0, #0
	beq _08055B7A
	ldr r1, [r7]
	ldr r0, [r1, #76]
	ldrb r1, [r0, #29]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #29]
	b _08055B8E
_08055B7A:
	ldr r1, [r7]
	ldr r0, [r1, #76]
	ldrb r1, [r0, #29]
	mov r2, #192
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #29]
	ldr r0, [r7]
	bl DeleteThisEntity
_08055B8E:
	ldr r1, [r7]
	ldr r0, [r1, #76]
	ldr r1, [r7]
	ldr r2, [r1, #48]
	str r2, [r0, #48]
	ldr r1, [r7]
	ldr r0, [r1, #76]
	ldr r1, [r7]
	ldr r2, [r1, #52]
	str r2, [r0, #52]
	ldr r1, [r7]
	ldr r0, [r1, #76]
	ldr r1, [r7]
	ldr r2, [r1, #56]
	str r2, [r0, #56]
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08055B24


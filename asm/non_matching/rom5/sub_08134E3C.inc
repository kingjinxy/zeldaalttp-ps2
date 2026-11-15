	THUMB_FUNC_START sub_08134E3C
sub_08134E3C: @ 0x08134E3C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r5, r0, #0
	add r7, r1, #0
	ldr r1, [r5, #52]
	ldr r0, _08134F1C  @ =0x68736D53
	cmp r1, r0
	bne _08134F12
	ldrb r0, [r5, #11]
	ldrb r2, [r7, #2]
	cmp r0, #0
	beq _08134E7E
	ldr r0, [r5]
	cmp r0, #0
	beq _08134E68
	ldr r1, [r5, #44]
	mov r0, #64
	ldrb r1, [r1]
	and r0, r0, r1
	cmp r0, #0
	bne _08134E74
_08134E68:
	ldr r1, [r5, #4]
	ldrh r0, [r5, #4]
	cmp r0, #0
	beq _08134E7E
	cmp r1, #0
	blt _08134E7E
_08134E74:
	ldrb r0, [r7, #2]
	add r2, r0, #0
	ldrb r0, [r5, #9]
	cmp r0, r2
	bhi _08134F12
_08134E7E:
	ldr r0, [r5, #52]
	add r0, r0, #1
	str r0, [r5, #52]
	mov r1, #0
	str r1, [r5, #4]
	str r7, [r5]
	ldr r0, [r7, #4]
	str r0, [r5, #48]
	strb r2, [r5, #9]
	str r1, [r5, #12]
	mov r0, #150
	strh r0, [r5, #28]
	strh r0, [r5, #32]
	add r0, r0, #106
	strh r0, [r5, #30]
	strh r1, [r5, #34]
	strh r1, [r5, #36]
	mov r6, #0
	ldr r4, [r5, #44]
	ldrb r1, [r7]
	cmp r6, r1
	bge _08134EDE
	ldrb r0, [r5, #8]
	cmp r6, r0
	bge _08134EFE
	mov r8, r6
_08134EB2:
	add r0, r5, #0
	add r1, r4, #0
	bl sub_081342DC
	mov r0, #192
	strb r0, [r4]
	mov r1, r8
	str r1, [r4, #32]
	lsl r1, r6, #2
	add r0, r7, #0
	add r0, r0, #8
	add r0, r0, r1
	ldr r0, [r0]
	str r0, [r4, #64]
	add r6, r6, #1
	add r4, r4, #80
	ldrb r0, [r7]
	cmp r6, r0
	bge _08134EDE
	ldrb r1, [r5, #8]
	cmp r6, r1
	blt _08134EB2
_08134EDE:
	ldrb r0, [r5, #8]
	cmp r6, r0
	bge _08134EFE
	mov r1, #0
	mov r8, r1
_08134EE8:
	add r0, r5, #0
	add r1, r4, #0
	bl sub_081342DC
	mov r0, r8
	strb r0, [r4]
	add r6, r6, #1
	add r4, r4, #80
	ldrb r1, [r5, #8]
	cmp r6, r1
	blt _08134EE8
_08134EFE:
	mov r0, #128
	ldrb r1, [r7, #3]
	and r0, r0, r1
	cmp r0, #0
	beq _08134F0E
	ldrb r0, [r7, #3]
	bl sub_08134C20
_08134F0E:
	ldr r0, _08134F1C  @ =0x68736D53
	str r0, [r5, #52]
_08134F12:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08134F1C:
	.4byte 0x68736D53
	THUMB_FUNC_END sub_08134E3C


	THUMB_FUNC_START sub_08019C28
sub_08019C28: @ 0x08019C28
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r5, r0, #0
	ldr r6, _08019C68  @ =gUnknown_03000450
	ldr r2, _08019C6C  @ =gUnknown_03006A30
	ldr r0, _08019C70  @ =gLCDRegisterBuffer
	mov r8, r0
	ldrb r1, [r0]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r7, r2, #0
	add r7, r7, #40
	add r0, r0, r7
	ldr r1, [r6]
	ldr r0, [r0]
	cmp r1, r0
	beq _08019C52
	bl sub_0803DF84
_08019C52:
	ldrb r0, [r5, #23]
	sub r0, r0, #1
	strb r0, [r5, #23]
	ldrb r0, [r5, #23]
	cmp r0, #24
	beq _08019C96
	cmp r0, #24
	bgt _08019C74
	cmp r0, #0
	beq _08019CC2
	b _08019D32
_08019C68:
	.4byte gUnknown_03000450
_08019C6C:
	.4byte gUnknown_03006A30
_08019C70:
	.4byte gLCDRegisterBuffer
_08019C74:
	cmp r0, #48
	bne _08019D32
	mov r0, #41
	bl sub_08012468
	add r4, r0, #0
	cmp r4, #0
	beq _08019D32
	mov r0, #1
	strb r0, [r4, #11]
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0803D3D0
	str r5, [r4, #84]
	str r4, [r5, #84]
	b _08019CB4
_08019C96:
	mov r0, #41
	bl sub_08012468
	add r4, r0, #0
	cmp r4, #0
	beq _08019D32
	mov r0, #1
	strb r0, [r4, #10]
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0803D3D0
	str r5, [r4, #84]
	ldr r0, [r5, #88]
	str r4, [r0, #88]
_08019CB4:
	str r4, [r5, #88]
	add r1, r5, #0
	add r1, r1, #124
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _08019D32
_08019CC2:
	mov r0, #41
	bl sub_08012468
	add r4, r0, #0
	cmp r4, #0
	beq _08019CEA
	mov r0, #2
	strb r0, [r4, #10]
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0803D3D0
	str r5, [r4, #84]
	ldr r0, [r5, #88]
	str r4, [r0, #88]
	add r1, r5, #0
	add r1, r1, #124
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_08019CEA:
	mov r0, #5
	strb r0, [r5, #20]
	mov r0, #60
	strb r0, [r5, #23]
	mov r0, r8
	ldrb r1, [r0]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r0, r0, r7
	ldr r1, [r6]
	ldr r0, [r0]
	cmp r1, r0
	beq _08019D32
	str r0, [r6]
	ldr r0, _08019D44  @ =gUnknown_03000420
	mov r1, #1
	strb r1, [r0]
	bl sub_0802D97C
	bl sub_0802C8F8
	mov r0, #206
	lsl r0, r0, #1
	bl play_sound
	mov r0, #16
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	mov r0, #46
	mov r1, #0
	mov r2, #240
	bl sub_0804C938
_08019D32:
	add r0, r5, #0
	bl 0x08003828
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08019D44:
	.4byte gUnknown_03000420
	THUMB_FUNC_END sub_08019C28


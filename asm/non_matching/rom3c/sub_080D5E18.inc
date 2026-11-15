	THUMB_FUNC_START sub_080D5E18
sub_080D5E18: @ 0x080D5E18
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r5, r0, #0
	ldr r7, _080D5E98  @ =gRam
	ldr r1, _080D5E9C  @ =0x00001082
	add r0, r7, r1
	add r0, r5, r0
	mov r1, #0
	mov r8, r1
	mov r1, #2
	strb r1, [r0]
	ldr r1, _080D5EA0  @ =0x00001142
	add r0, r7, r1
	add r6, r5, r0
	ldrb r4, [r6]
	add r0, r5, #0
	bl sub_080C2C4C
	ldr r1, _080D5EA4  @ =0x00001152
	add r0, r7, r1
	add r2, r5, r0
	ldrb r1, [r2]
	add r0, r1, #0
	add r0, r0, #64
	mov r3, #128
	and r0, r0, r3
	cmp r0, #0
	bne _080D5E5A
	sub r0, r1, #3
	strb r0, [r2]
_080D5E5A:
	ldrb r1, [r6]
	eor r4, r4, r1
	and r4, r4, r3
	cmp r4, #0
	beq _080D5E8E
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080D5E8E
	ldr r0, _080D5EA8  @ =0x00000F52
	add r1, r7, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r1, r8
	strb r1, [r6]
	strb r1, [r2]
	ldr r1, _080D5EAC  @ =0x00000FC2
	add r0, r7, r1
	add r0, r5, r0
	mov r1, #64
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080D6220
_080D5E8E:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080D5E98:
	.4byte gRam
_080D5E9C:
	.4byte 0x00001082
_080D5EA0:
	.4byte 0x00001142
_080D5EA4:
	.4byte 0x00001152
_080D5EA8:
	.4byte 0x00000F52
_080D5EAC:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080D5E18


	THUMB_FUNC_START sub_08043F20
sub_08043F20: @ 0x08043F20
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #106
	ldrb r0, [r1]
	cmp r0, #0
	beq _08043F98
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #106
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08043F96
	ldr r0, [r7]
	ldrb r1, [r0, #9]
	ldr r2, [r7]
	add r0, r2, #0
	add r3, r2, #0
	add r3, r3, #106
	ldrb r2, [r3]
	mov r0, #1
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08043F96
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
	ldr r0, [r7, #4]
	ldr r1, [r7]
	str r1, [r0, #88]
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #106
	ldrb r1, [r2]
	mov r2, #128
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #106
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_08043F96:
	b _0804400A
_08043F98:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #127
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #19
	beq _08044004
	ldr r0, [r7]
	ldrb r1, [r0, #9]
	mov r0, #1
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08044004
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1, #22]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, _08044014  @ =gUnknown_03000208
	ldrh r1, [r0, #2]
	cmp r1, #1
	bne _08044004
	ldr r0, [r7, #4]
	ldr r1, [r7, #4]
	ldrb r2, [r1, #11]
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	ldrb r2, [r0, #11]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #11]
_08044004:
	ldr r0, [r7]
	bl DeleteThisEntity
_0804400A:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08044014:
	.4byte gUnknown_03000208
	THUMB_FUNC_END sub_08043F20


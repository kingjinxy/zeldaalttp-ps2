	THUMB_FUNC_START sub_0805CE18
sub_0805CE18: @ 0x0805CE18
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	mov r0, #74
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0805CE92
	ldr r1, [r7, #4]
	ldr r0, _0805CE9C  @ =gUnknown_081410F0
	ldr r2, [r7]
	ldrb r3, [r2, #10]
	lsl r2, r3, #1
	add r0, r0, r2
	mov r3, #0
	ldrsb r3, [r0, r3]
	lsl r2, r3, #16
	ldr r0, _0805CE9C  @ =gUnknown_081410F0
	ldr r3, [r7]
	ldrb r4, [r3, #10]
	lsl r3, r4, #1
	add r4, r3, #1
	add r0, r0, r4
	mov r4, #0
	ldrsb r4, [r0, r4]
	lsl r3, r4, #16
	ldr r0, [r7]
	bl sub_0803D4A4
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	mov r3, #2
	add r1, r2, #0
	eor r1, r1, r3
	add r2, r1, #0
	lsl r1, r2, #3
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7, #4]
	ldr r1, _0805CEA0  @ =gUnknown_081410F8
	ldr r2, [r7]
	ldrb r3, [r2, #24]
	add r2, r3, #0
	lsl r3, r2, #1
	add r1, r1, r3
	ldrh r2, [r1]
	str r2, [r0, #12]
_0805CE92:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0805CE9C:
	.4byte gUnknown_081410F0
_0805CEA0:
	.4byte gUnknown_081410F8
	THUMB_FUNC_END sub_0805CE18


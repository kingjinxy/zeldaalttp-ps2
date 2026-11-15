	THUMB_FUNC_START sub_08047EA4
sub_08047EA4: @ 0x08047EA4
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r0, #84]
	add r0, r1, #0
	add r1, r1, #112
	ldrb r0, [r1]
	mov r1, #4
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08047EC6
	b _08047FEE
_08047EC6:
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #43
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #113
	ldrb r1, [r1]
	ldrb r2, [r3]
	add r1, r1, r2
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
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #113
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	ble _08047F78
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #43
	ldrb r0, [r1]
	cmp r0, #88
	bne _08047F72
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #43
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #96
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #9
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r1, [r7]
	ldr r0, [r1, #84]
	ldr r1, [r7]
	ldr r3, [r1, #84]
	add r2, r3, #0
	add r1, r3, #0
	add r1, r1, #112
	ldr r2, _08047F74  @ =gUnknown_08137B10
	ldr r3, [r7]
	ldrb r4, [r3, #11]
	add r3, r4, #0
	lsl r4, r3, #2
	add r2, r2, r4
	ldr r3, [r2]
	add r2, r3, #0
	ldrb r3, [r1]
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r0, #0
	add r0, r0, #112
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	mov r0, #158
	bl sub_08003DFC
_08047F72:
	b _08047FEE
_08047F74:
	.4byte gUnknown_08137B10
_08047F78:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #43
	ldrb r0, [r1]
	cmp r0, #168
	bne _08047FEE
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #43
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #160
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #9
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r1, [r7]
	ldr r0, [r1, #84]
	ldr r1, [r7]
	ldr r3, [r1, #84]
	add r2, r3, #0
	add r1, r3, #0
	add r1, r1, #112
	ldr r2, _08047FF8  @ =gUnknown_08137B10
	ldr r3, [r7]
	ldrb r4, [r3, #11]
	add r3, r4, #0
	lsl r4, r3, #2
	add r2, r2, r4
	ldr r3, [r2]
	add r2, r3, #0
	ldrb r3, [r1]
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r0, #0
	add r0, r0, #112
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	mov r0, #158
	bl sub_08003DFC
_08047FEE:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08047FF8:
	.4byte gUnknown_08137B10
	THUMB_FUNC_END sub_08047EA4


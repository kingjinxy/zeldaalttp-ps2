	THUMB_FUNC_START sub_081189A4
sub_081189A4: @ 0x081189A4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r7, _08118AA8  @ =gRam
	ldr r2, _08118AAC  @ =0x00000E29
	add r0, r7, r2
	add r4, r1, r0
	ldrb r0, [r4]
	cmp r0, #83
	beq _08118A98
	ldr r3, _08118AB0  @ =0x00000DBB
	add r0, r7, r3
	add r0, r1, r0
	ldrb r0, [r0]
	ldr r2, _08118AB4  @ =0x00001734
	add r1, r7, r2
	strb r0, [r1]
	ldrb r6, [r4]
	ldr r0, _08118AB8  @ =gUnknown_0816E2EC
	add r0, r6, r0
	ldrb r0, [r0]
	mov r8, r0
	mov r3, r8
	lsl r0, r3, #24
	asr r0, r0, #24
	str r0, [sp, #4]
	cmp r0, #0
	bge _081189E8
	ldrb r3, [r1]
_081189E8:
	cmp r3, #7
	bls _081189EE
	mov r3, #8
_081189EE:
	lsl r0, r3, #1
	mov r1, #48
	orr r0, r0, r1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r6, #32
	bne _08118A08
	mov r0, #207
	and r3, r3, r0
	ldr r4, _08118ABC  @ =0x00001724
	add r0, r7, r4
	ldrb r0, [r0]
	orr r3, r3, r0
_08118A08:
	ldr r0, _08118AC0  @ =gUnknown_03003E74
	mov r9, r0
	ldrh r0, [r0]
	ldr r2, _08118AC4  @ =gUnknown_03002B94
	ldrh r1, [r2]
	mov r4, #150
	lsl r4, r4, #4
	add r4, r4, r7
	mov r10, r4
	ldrh r2, [r4]
	lsl r5, r3, #8
	mov r4, #68
	add r3, r5, #0
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldr r4, _08118AC8  @ =gUnknown_0816E294
	add r4, r6, r4
	ldrb r4, [r4]
	str r4, [sp]
	bl sub_080C6368
	add r3, r0, #0
	ldr r0, [sp, #4]
	cmp r0, #7
	ble _08118A4A
	mov r1, r8
	lsl r2, r1, #4
	ldrb r1, [r3, #5]
	mov r0, #15
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r3, #5]
_08118A4A:
	mov r2, r9
	ldrh r0, [r2]
	add r0, r0, #1
	strh r0, [r2]
	cmp r4, #2
	beq _08118A98
	mov r3, #151
	lsl r3, r3, #4
	add r0, r7, r3
	ldrh r0, [r0]
	mov r4, r10
	strh r0, [r4]
	ldrh r0, [r2]
	ldr r2, _08118AC4  @ =gUnknown_03002B94
	ldrh r1, [r2]
	ldrh r2, [r4]
	mov r3, #100
	orr r5, r5, r3
	lsl r3, r5, #16
	lsr r3, r3, #16
	mov r4, #0
	str r4, [sp]
	bl sub_080C6368
	add r3, r0, #0
	ldr r4, [sp, #4]
	cmp r4, #7
	ble _08118A90
	mov r0, r8
	lsl r2, r0, #4
	ldrb r1, [r3, #5]
	mov r0, #15
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r3, #5]
_08118A90:
	mov r1, r9
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_08118A98:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08118AA8:
	.4byte gRam
_08118AAC:
	.4byte 0x00000E29
_08118AB0:
	.4byte 0x00000DBB
_08118AB4:
	.4byte 0x00001734
_08118AB8:
	.4byte gUnknown_0816E2EC
_08118ABC:
	.4byte 0x00001724
_08118AC0:
	.4byte gUnknown_03003E74
_08118AC4:
	.4byte gUnknown_03002B94
_08118AC8:
	.4byte gUnknown_0816E294
	THUMB_FUNC_END sub_081189A4


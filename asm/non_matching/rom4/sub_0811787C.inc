	THUMB_FUNC_START sub_0811787C
sub_0811787C: @ 0x0811787C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C1638
	add r0, r4, #0
	bl sub_080C10D4
	ldr r7, _081178D4  @ =gRam
	ldr r1, _081178D8  @ =0x00000E33
	add r0, r7, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _081178E8
	ldr r3, _081178DC  @ =0x00000E15
	add r0, r7, r3
	add r0, r4, r0
	ldrb r1, [r0]
	strb r2, [r0]
	cmp r1, #47
	beq _08117994
	ldr r1, _081178E0  @ =0x000009C6
	add r0, r7, r1
	ldrh r0, [r0]
	cmp r0, #64
	bne _08117994
	ldr r2, _081178E4  @ =0x0000187A
	add r0, r7, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #67
	bne _08117994
	bl sub_081179B4
	b _08117994
_081178D4:
	.4byte gRam
_081178D8:
	.4byte 0x00000E33
_081178DC:
	.4byte 0x00000E15
_081178E0:
	.4byte 0x000009C6
_081178E4:
	.4byte 0x0000187A
_081178E8:
	lsr r6, r0, #27
	cmp r6, #0
	bne _08117964
	mov r3, #150
	lsl r3, r3, #4
	add r0, r7, r3
	ldrb r5, [r0]
	ldr r4, _08117958  @ =0x00000961
	add r0, r7, r4
	ldrb r4, [r0]
	sub r4, r4, #3
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r0, _0811795C  @ =gUnknown_03003E74
	mov r10, r0
	ldrh r0, [r0]
	ldr r1, _08117960  @ =0x00000968
	add r1, r1, r7
	mov r9, r1
	ldrb r1, [r1]
	mov r2, #2
	mov r8, r2
	mov r3, r8
	orr r1, r1, r3
	lsl r1, r1, #24
	mov r3, #168
	lsl r3, r3, #15
	orr r3, r3, r1
	lsr r3, r3, #16
	str r6, [sp]
	add r1, r5, #0
	add r2, r4, #0
	bl sub_080C6004
	mov r1, r10
	ldrh r0, [r1]
	add r0, r0, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r5, r5, #8
	mov r2, r9
	ldrb r1, [r2]
	mov r3, r8
	orr r1, r1, r3
	lsl r1, r1, #24
	mov r3, #170
	lsl r3, r3, #15
	orr r3, r3, r1
	lsr r3, r3, #16
	str r6, [sp]
	add r1, r5, #0
	add r2, r4, #0
	bl sub_080C6004
	b _08117994
	.byte 0x00
	.byte 0x00
_08117958:
	.4byte 0x00000961
_0811795C:
	.4byte gUnknown_03003E74
_08117960:
	.4byte 0x00000968
_08117964:
	ldr r0, _081179A4  @ =gUnknown_03003E74
	ldrh r0, [r0]
	mov r4, #150
	lsl r4, r4, #4
	add r1, r7, r4
	ldrb r1, [r1]
	ldr r3, _081179A8  @ =0x00000961
	add r2, r7, r3
	ldrb r2, [r2]
	ldr r4, _081179AC  @ =gUnknown_0817EFEB
	sub r3, r6, #1
	add r3, r3, r4
	ldrb r5, [r3]
	ldr r4, _081179B0  @ =0x00000968
	add r3, r7, r4
	ldrb r3, [r3]
	mov r4, #2
	orr r3, r3, r4
	lsl r3, r3, #8
	orr r3, r3, r5
	mov r4, #2
	str r4, [sp]
	bl sub_080C6004
_08117994:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_081179A4:
	.4byte gUnknown_03003E74
_081179A8:
	.4byte 0x00000961
_081179AC:
	.4byte gUnknown_0817EFEB
_081179B0:
	.4byte 0x00000968
	THUMB_FUNC_END sub_0811787C


	THUMB_FUNC_START sub_081177A0
sub_081177A0: @ 0x081177A0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r4, r0, #0
	bl sub_080C10D4
	ldr r3, _08117854  @ =gRam
	ldr r1, _08117858  @ =0x00000A74
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _081177CC
	ldr r0, _0811785C  @ =0x00000968
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #48
	orr r0, r0, r1
	strb r0, [r2]
_081177CC:
	ldr r1, _08117860  @ =0x00000E29
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #12
	and r0, r0, r1
	ldr r2, _08117864  @ =0x00000964
	add r1, r3, r2
	strb r0, [r1]
	mov r6, #2
	add r7, r3, #0
	ldr r4, _0811785C  @ =0x00000968
	add r4, r4, r7
	mov r8, r4
_081177E8:
	ldr r1, _08117864  @ =0x00000964
	add r0, r7, r1
	ldrb r0, [r0]
	add r2, r6, #0
	orr r2, r2, r0
	lsl r2, r2, #24
	lsr r2, r2, #24
	mov r4, #150
	lsl r4, r4, #4
	add r3, r7, r4
	ldr r0, _08117868  @ =gUnknown_0817EFC8
	add r0, r2, r0
	ldrb r1, [r0]
	ldrb r3, [r3]
	add r1, r1, r3
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r0, _0811786C  @ =0x00000961
	add r3, r7, r0
	ldr r0, _08117870  @ =gUnknown_0817EFD8
	add r2, r2, r0
	ldrb r2, [r2]
	ldrb r3, [r3]
	add r2, r2, r3
	lsl r2, r2, #24
	lsr r2, r2, #24
	ldr r0, _08117874  @ =gUnknown_03003E74
	sub r3, r6, #2
	ldrh r0, [r0]
	sub r0, r0, r3
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r3, _08117878  @ =gUnknown_0817EFE8
	add r3, r6, r3
	ldrb r5, [r3]
	mov r4, r8
	ldrb r3, [r4]
	mov r4, #2
	orr r3, r3, r4
	lsl r3, r3, #8
	orr r3, r3, r5
	mov r4, #0
	str r4, [sp]
	bl sub_080C6004
	sub r6, r6, #1
	cmp r6, #0
	bge _081177E8
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08117854:
	.4byte gRam
_08117858:
	.4byte 0x00000A74
_0811785C:
	.4byte 0x00000968
_08117860:
	.4byte 0x00000E29
_08117864:
	.4byte 0x00000964
_08117868:
	.4byte gUnknown_0817EFC8
_0811786C:
	.4byte 0x00000961
_08117870:
	.4byte gUnknown_0817EFD8
_08117874:
	.4byte gUnknown_03003E74
_08117878:
	.4byte gUnknown_0817EFE8
	THUMB_FUNC_END sub_081177A0


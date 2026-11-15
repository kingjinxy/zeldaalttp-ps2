	THUMB_FUNC_START sub_08105F3C
sub_08105F3C: @ 0x08105F3C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r6, _08106040  @ =gRam
	ldr r0, _08106044  @ =0x00000F92
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _08106048  @ =gUnknown_0817BED2
	ldr r3, _0810604C  @ =0x00000FB2
	add r5, r6, r3
	add r5, r4, r5
	ldrb r0, [r5]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _08106050  @ =0x00001122
	add r2, r6, r0
	add r2, r4, r2
	ldrb r0, [r2]
	mov r1, #63
	and r1, r1, r0
	ldr r3, _08106054  @ =gUnknown_0817BEE2
	ldrb r0, [r5]
	add r0, r0, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r2]
	add r0, r4, #0
	bl sub_080C6240
	ldr r1, _08106058  @ =0x00000FD2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	add r0, r0, #4
	mov r2, #151
	lsl r2, r2, #4
	add r1, r6, r2
	strh r0, [r1]
	ldr r3, _0810605C  @ =0x00000979
	add r1, r6, r3
	mov r0, #5
	strb r0, [r1]
	ldr r0, _08106060  @ =gUnknown_0817BE90
	add r4, r4, r0
	ldrb r5, [r4]
	mov r7, #1
	mov r8, r1
_08105FA8:
	ldr r0, _08106064  @ =gUnknown_03003E74
	ldrh r0, [r0]
	add r0, r0, r7
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r4, _08106068  @ =gUnknown_0200EC18
	add r1, r5, r4
	ldrb r1, [r1]
	ldr r3, _0810606C  @ =gUnknown_0200EC19
	add r2, r5, r3
	ldrb r2, [r2]
	lsl r2, r2, #8
	add r1, r1, r2
	mov r4, #151
	lsl r4, r4, #4
	add r2, r6, r4
	ldrh r2, [r2]
	add r1, r2, r1
	sub r4, r4, #30
	add r3, r6, r4
	ldrh r3, [r3]
	sub r1, r1, r3
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r4, _08106070  @ =gUnknown_0200ED18
	add r3, r5, r4
	ldrb r3, [r3]
	mov r12, r3
	add r4, r4, #1
	add r3, r5, r4
	ldrb r3, [r3]
	lsl r3, r3, #8
	add r3, r3, r12
	add r2, r2, r3
	ldr r4, _08106074  @ =0x00000958
	add r3, r6, r4
	ldrh r3, [r3]
	sub r2, r2, r3
	lsl r2, r2, #16
	lsr r2, r2, #16
	add r4, r4, #17
	add r3, r6, r4
	ldrb r3, [r3]
	lsl r3, r3, #24
	asr r3, r3, #24
	mov r4, #240
	and r3, r3, r4
	mov r4, #13
	orr r3, r3, r4
	lsl r3, r3, #8
	mov r4, #139
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6368
	add r0, r7, #1
	lsl r0, r0, #24
	lsr r7, r0, #24
	add r0, r5, #2
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r1, r8
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08105FA8
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08106040:
	.4byte gRam
_08106044:
	.4byte 0x00000F92
_08106048:
	.4byte gUnknown_0817BED2
_0810604C:
	.4byte 0x00000FB2
_08106050:
	.4byte 0x00001122
_08106054:
	.4byte gUnknown_0817BEE2
_08106058:
	.4byte 0x00000FD2
_0810605C:
	.4byte 0x00000979
_08106060:
	.4byte gUnknown_0817BE90
_08106064:
	.4byte gUnknown_03003E74
_08106068:
	.4byte gUnknown_0200EC18
_0810606C:
	.4byte gUnknown_0200EC19
_08106070:
	.4byte gUnknown_0200ED18
_08106074:
	.4byte 0x00000958
	THUMB_FUNC_END sub_08105F3C


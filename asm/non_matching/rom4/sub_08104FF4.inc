	THUMB_FUNC_START sub_08104FF4
sub_08104FF4: @ 0x08104FF4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r5, r1, #0
	ldr r4, _08105110  @ =gRam
	ldr r2, _08105114  @ =0x00001651
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _08105020
	ldr r6, _08105118  @ =0x00000D94
	add r0, r4, r6
	add r0, r1, r0
	ldrb r2, [r0]
	mov r1, #48
	orr r1, r1, r2
	strb r1, [r0]
_08105020:
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r5, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	bne _081050FE
	ldr r1, _0810511C  @ =0x00000F92
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #3
	ldr r2, _08105120  @ =0x0000096C
	add r1, r4, r2
	strb r0, [r1]
	ldr r2, _08105124  @ =gUnknown_0817BE34
	mov r0, #0
	ldrsb r0, [r1, r0]
	add r0, r0, r2
	ldrb r0, [r0]
	mov r6, #151
	lsl r6, r6, #4
	add r2, r4, r6
	strb r0, [r2]
	ldr r1, _08105128  @ =gUnknown_0817BE74
	ldr r6, _0810512C  @ =0x00000F52
	add r0, r4, r6
	add r0, r5, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r1, [r0]
	add r0, sp, #4
	strb r3, [r0]
	lsl r1, r1, #24
	cmp r1, #0
	blt _081050FE
	mov r9, r4
	mov r10, r2
	add r0, sp, #4
	mov r8, r0
_08105076:
	ldr r0, _08105120  @ =0x0000096C
	add r0, r0, r9
	ldrb r0, [r0]
	asr r7, r1, #24
	add r0, r7, r0
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r6, r1, #0
	mov r2, r10
	ldrb r5, [r2]
	cmp r5, #0
	bne _08105094
	ldr r0, _08105124  @ =gUnknown_0817BE34
	add r0, r1, r0
	ldrb r5, [r0]
_08105094:
	mov r0, #0
	mov r1, r10
	strb r0, [r1]
	ldr r0, _08105130  @ =gUnknown_03003E74
	mov r2, r8
	ldrb r1, [r2]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r9
	ldr r1, _08105134  @ =gUnknown_0817BDB4
	lsl r3, r6, #1
	add r1, r3, r1
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r4, _08105138  @ =0x00000964
	add r4, r4, r9
	ldr r2, _0810513C  @ =gUnknown_0817BDF4
	add r3, r3, r2
	ldrh r2, [r3]
	ldrh r4, [r4]
	add r2, r2, r4
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _08105140  @ =gUnknown_0817BE54
	add r3, r6, r3
	ldrb r3, [r3]
	ldr r6, _08105144  @ =gUnknown_03002B99
	mov r4, #0
	ldrsb r4, [r6, r4]
	orr r3, r3, r4
	lsl r3, r3, #8
	orr r5, r5, r3
	lsl r3, r5, #16
	lsr r3, r3, #16
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	sub r1, r7, #1
	mov r2, r8
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	lsl r1, r1, #24
	cmp r1, #0
	bge _08105076
_081050FE:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08105110:
	.4byte gRam
_08105114:
	.4byte 0x00001651
_08105118:
	.4byte 0x00000D94
_0810511C:
	.4byte 0x00000F92
_08105120:
	.4byte 0x0000096C
_08105124:
	.4byte gUnknown_0817BE34
_08105128:
	.4byte gUnknown_0817BE74
_0810512C:
	.4byte 0x00000F52
_08105130:
	.4byte gUnknown_03003E74
_08105134:
	.4byte gUnknown_0817BDB4
_08105138:
	.4byte 0x00000964
_0810513C:
	.4byte gUnknown_0817BDF4
_08105140:
	.4byte gUnknown_0817BE54
_08105144:
	.4byte gUnknown_03002B99
	THUMB_FUNC_END sub_08104FF4


	THUMB_FUNC_START sub_080D6BB8
sub_080D6BB8: @ 0x080D6BB8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r5, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D6C7A
	ldr r4, _080D6C8C  @ =gRam
	ldr r1, _080D6C90  @ =0x00000F92
	add r0, r4, r1
	add r2, r5, r0
	ldrb r0, [r2]
	cmp r0, #6
	beq _080D6C7A
	mov r0, #3
	mov r9, r4
	mov r8, r2
	ldr r4, _080D6C94  @ =0x00000969
	add r4, r4, r9
	mov r10, r4
	add r7, sp, #4
_080D6BF6:
	mov r1, r8
	ldrb r5, [r1]
	lsl r5, r5, #2
	lsl r6, r0, #24
	asr r6, r6, #24
	add r5, r6, r5
	lsl r5, r5, #24
	lsr r5, r5, #24
	ldr r0, _080D6C98  @ =gUnknown_03003E74
	ldrb r1, [r7]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, #150
	lsl r2, r2, #4
	add r2, r2, r9
	ldr r1, _080D6C9C  @ =gUnknown_0817551C
	lsl r3, r5, #1
	add r1, r3, r1
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r4, _080D6CA0  @ =0x00000964
	add r4, r4, r9
	ldr r2, _080D6CA4  @ =gUnknown_0817554C
	add r3, r3, r2
	ldrh r2, [r3]
	ldrh r4, [r4]
	add r2, r2, r4
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080D6CA8  @ =gUnknown_0817557C
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _080D6CAC  @ =gUnknown_08175594
	add r5, r5, r4
	ldrb r4, [r5]
	mov r5, r10
	ldrb r5, [r5]
	lsl r5, r5, #24
	asr r5, r5, #24
	orr r4, r4, r5
	lsl r4, r4, #8
	add r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldr r4, _080D6CB0  @ =gUnknown_081755AC
	mov r12, r4
	mov r5, r8
	ldrb r4, [r5]
	add r4, r4, r12
	ldrb r4, [r4]
	str r4, [sp]
	bl sub_080C6368
	sub r6, r6, #1
	lsl r6, r6, #24
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	lsr r0, r6, #24
	cmp r6, #0
	bge _080D6BF6
_080D6C7A:
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
_080D6C8C:
	.4byte gRam
_080D6C90:
	.4byte 0x00000F92
_080D6C94:
	.4byte 0x00000969
_080D6C98:
	.4byte gUnknown_03003E74
_080D6C9C:
	.4byte gUnknown_0817551C
_080D6CA0:
	.4byte 0x00000964
_080D6CA4:
	.4byte gUnknown_0817554C
_080D6CA8:
	.4byte gUnknown_0817557C
_080D6CAC:
	.4byte gUnknown_08175594
_080D6CB0:
	.4byte gUnknown_081755AC
	THUMB_FUNC_END sub_080D6BB8


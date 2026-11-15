	THUMB_FUNC_START sub_0811F56C
sub_0811F56C: @ 0x0811F56C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r2, _0811F5B4  @ =gRam
	ldr r1, _0811F5B8  @ =0x00001844
	add r0, r2, r1
	add r1, r6, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0811F5C4
	mov r0, #3
	strb r0, [r1]
	ldr r3, _0811F5BC  @ =0x00000E29
	add r1, r2, r3
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bne _0811F5C4
	ldr r5, _0811F5C0  @ =0x00000E15
	add r0, r2, r5
	add r0, r6, r0
	mov r1, #0
	strb r1, [r0]
	b _0811F6BA
_0811F5B4:
	.4byte gRam
_0811F5B8:
	.4byte 0x00001844
_0811F5BC:
	.4byte 0x00000E29
_0811F5C0:
	.4byte 0x00000E15
_0811F5C4:
	add r0, r6, #0
	bl sub_080C17A8
	ldr r2, _0811F5E4  @ =gRam
	ldr r1, _0811F5E8  @ =0x00000A92
	add r0, r2, r1
	add r1, r6, r0
	ldrb r0, [r1]
	cmp r0, #255
	bne _0811F5F0
	ldr r3, _0811F5EC  @ =0x00000968
	add r1, r2, r3
	mov r0, #0
	strh r0, [r1]
	b _0811F5FC
	.byte 0x00
	.byte 0x00
_0811F5E4:
	.4byte gRam
_0811F5E8:
	.4byte 0x00000A92
_0811F5EC:
	.4byte 0x00000968
_0811F5F0:
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldr r5, _0811F6CC  @ =0x00000968
	add r0, r2, r5
	strh r1, [r0]
_0811F5FC:
	ldr r1, _0811F6D0  @ =gRam
	ldr r0, _0811F6CC  @ =0x00000968
	add r3, r1, r0
	mov r5, #0
	ldrsh r2, [r3, r5]
	sub r0, r0, #8
	add r4, r1, r0
	ldrh r0, [r4]
	sub r0, r0, r2
	mov r5, #0
	strh r0, [r3]
	ldr r2, _0811F6D4  @ =0x00000964
	add r0, r1, r2
	ldrh r2, [r0]
	ldr r3, _0811F6D8  @ =0x0000096C
	add r0, r1, r3
	strh r2, [r0]
	ldr r2, _0811F6DC  @ =0x00000E29
	add r0, r1, r2
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #25
	lsr r6, r0, #24
	add r3, r3, #4
	add r0, r1, r3
	strb r5, [r0]
	add r7, r1, #0
	mov r10, r4
	ldr r5, _0811F6E0  @ =gUnknown_03003E74
	mov r8, r5
	mov r9, r0
_0811F63A:
	ldr r0, _0811F6E4  @ =gUnknown_0817FC22
	add r3, r6, r0
	ldrb r0, [r3]
	cmp r0, #255
	beq _0811F6A4
	ldr r0, _0811F6CC  @ =0x00000968
	add r2, r7, r0
	ldr r0, _0811F6E8  @ =gUnknown_0817FC0A
	lsl r1, r6, #1
	add r0, r1, r0
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	mov r2, r10
	strh r0, [r2]
	ldr r5, _0811F6D8  @ =0x0000096C
	add r2, r7, r5
	ldr r0, _0811F6EC  @ =gUnknown_0817FC16
	add r1, r1, r0
	ldrh r0, [r1]
	ldrh r2, [r2]
	add r0, r0, r2
	ldr r2, _0811F6D4  @ =0x00000964
	add r1, r7, r2
	strh r0, [r1]
	mov r5, r8
	ldrh r0, [r5]
	ldrh r1, [r1]
	mov r2, r10
	ldrh r2, [r2]
	str r2, [sp, #4]
	ldrb r3, [r3]
	ldr r4, _0811F6F0  @ =gUnknown_0817FC28
	add r4, r6, r4
	ldrb r5, [r4]
	mov r4, #207
	and r4, r4, r5
	ldr r5, _0811F6F4  @ =gUnknown_03003954
	ldrb r5, [r5]
	mov r12, r5
	mov r2, r12
	orr r4, r4, r2
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r5, #0
	str r5, [sp]
	ldr r2, [sp, #4]
	bl sub_080C6368
	mov r1, r8
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_0811F6A4:
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r2, r9
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #2
	bne _0811F63A
_0811F6BA:
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
_0811F6CC:
	.4byte 0x00000968
_0811F6D0:
	.4byte gRam
_0811F6D4:
	.4byte 0x00000964
_0811F6D8:
	.4byte 0x0000096C
_0811F6DC:
	.4byte 0x00000E29
_0811F6E0:
	.4byte gUnknown_03003E74
_0811F6E4:
	.4byte gUnknown_0817FC22
_0811F6E8:
	.4byte gUnknown_0817FC0A
_0811F6EC:
	.4byte gUnknown_0817FC16
_0811F6F0:
	.4byte gUnknown_0817FC28
_0811F6F4:
	.4byte gUnknown_03003954
	THUMB_FUNC_END sub_0811F56C


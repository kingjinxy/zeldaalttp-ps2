	THUMB_FUNC_START sub_08118F68
sub_08118F68: @ 0x08118F68
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C17A8
	ldr r2, _08118FB4  @ =gRam
	ldr r1, _08118FB8  @ =0x00000E29
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #1
	bne _08118F92
	ldr r3, _08118FBC  @ =0x00000DBB
	add r0, r2, r3
	add r0, r4, r0
	ldr r1, _08118FC0  @ =gUnknown_0817F33E
	ldrb r1, [r1]
	strb r1, [r0]
_08118F92:
	ldr r1, _08118FC4  @ =0x00000A92
	add r0, r2, r1
	add r1, r4, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bge _08118FCC
	ldrb r0, [r1]
	mov r3, #255
	lsl r3, r3, #8
	add r1, r3, #0
	ldr r3, _08118FC8  @ =0x00000968
	add r2, r2, r3
	orr r0, r0, r1
	strh r0, [r2]
	b _08118FD4
	.byte 0x00
	.byte 0x00
_08118FB4:
	.4byte gRam
_08118FB8:
	.4byte 0x00000E29
_08118FBC:
	.4byte 0x00000DBB
_08118FC0:
	.4byte gUnknown_0817F33E
_08118FC4:
	.4byte 0x00000A92
_08118FC8:
	.4byte 0x00000968
_08118FCC:
	ldrb r1, [r1]
	ldr r3, _0811904C  @ =0x00000968
	add r0, r2, r3
	strh r1, [r0]
_08118FD4:
	ldr r5, _08119050  @ =gRam
	ldr r0, _0811904C  @ =0x00000968
	add r0, r0, r5
	mov r8, r0
	mov r2, #0
	ldrsh r1, [r0, r2]
	mov r3, #150
	lsl r3, r3, #4
	add r6, r5, r3
	ldrh r0, [r6]
	sub r0, r0, r1
	strh r0, [r6]
	ldr r1, _08119054  @ =0x0000096C
	add r7, r5, r1
	strh r0, [r7]
	add r0, r0, #8
	mov r2, #151
	lsl r2, r2, #4
	add r1, r5, r2
	strh r0, [r1]
	add r0, r4, #0
	bl sub_081189A4
	ldr r3, _08119058  @ =0x00001792
	add r0, r5, r3
	ldrb r0, [r0]
	cmp r0, #2
	bne _08119082
	ldr r1, _0811905C  @ =0x00000A88
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	cmp r0, #0
	blt _08119020
	lsr r0, r0, #24
	cmp r0, #1
	bhi _08119082
_08119020:
	ldr r1, _08119060  @ =gUnknown_0816E294
	ldr r2, _08119064  @ =0x00000E29
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r2, [r0]
	mov r3, r8
	ldrh r0, [r3]
	ldrh r7, [r7]
	add r0, r0, r7
	add r0, r0, #40
	strh r0, [r6]
	cmp r2, #2
	beq _0811906C
	ldr r0, _08119068  @ =0x00000964
	add r1, r5, r0
	ldrh r0, [r1]
	sub r0, r0, #4
	strh r0, [r1]
	mov r2, #2
	b _0811906E
_0811904C:
	.4byte 0x00000968
_08119050:
	.4byte gRam
_08119054:
	.4byte 0x0000096C
_08119058:
	.4byte 0x00001792
_0811905C:
	.4byte 0x00000A88
_08119060:
	.4byte gUnknown_0816E294
_08119064:
	.4byte 0x00000E29
_08119068:
	.4byte 0x00000964
_0811906C:
	mov r2, #1
_0811906E:
	ldr r0, _0811908C  @ =gRam
	ldr r3, _08119090  @ =0x00001724
	add r1, r0, r3
	ldrb r1, [r1]
	ldr r3, _08119094  @ =0x00000968
	add r0, r0, r3
	strb r1, [r0]
	add r0, r2, #0
	bl sub_0811B82C
_08119082:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_0811908C:
	.4byte gRam
_08119090:
	.4byte 0x00001724
_08119094:
	.4byte 0x00000968
	THUMB_FUNC_END sub_08118F68


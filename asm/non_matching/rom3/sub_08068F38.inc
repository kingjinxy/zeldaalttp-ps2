	THUMB_FUNC_START sub_08068F38
sub_08068F38: @ 0x08068F38
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	ldr r1, _08069028  @ =gRam
	ldr r0, _0806902C  @ =0x0000099E
	add r3, r1, r0
	ldrb r0, [r3]
	sub r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	add r7, r1, #0
	cmp r0, #0
	bge _0806901A
	mov r0, #1
	strb r0, [r3]
	mov r1, #0
	ldr r6, _08069030  @ =gUnknown_02000C00
	mov r3, #248
	lsl r3, r3, #2
	mov r9, r3
	mov r0, #248
	lsl r0, r0, #7
	mov r8, r0
	mov r3, #128
	lsl r3, r3, #2
	mov r12, r3
_08068F6E:
	lsl r0, r1, #16
	asr r1, r0, #15
	add r1, r1, r6
	ldrh r2, [r1]
	mov r3, #0
	ldrsh r4, [r1, r3]
	mov r1, #31
	and r4, r4, r1
	add r1, r4, #0
	add r5, r0, #0
	cmp r1, #0
	beq _08068F92
	sub r0, r1, #4
	lsl r0, r0, #16
	lsr r4, r0, #16
	cmp r0, #0
	bge _08068F92
	mov r4, #0
_08068F92:
	add r3, r2, #0
	mov r0, r9
	and r3, r3, r0
	add r0, r3, #0
	lsl r1, r2, #16
	cmp r0, #0
	beq _08068FAC
	sub r0, r0, #128
	lsl r0, r0, #16
	lsr r3, r0, #16
	cmp r0, #0
	bge _08068FAC
	mov r3, #0
_08068FAC:
	lsr r2, r1, #16
	mov r1, r8
	and r2, r2, r1
	add r0, r2, #0
	cmp r0, #0
	beq _08068FC6
	ldr r1, _08069034  @ =0xFFFFF000
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r2, r0, #16
	cmp r0, #0
	bge _08068FC6
	mov r2, #0
_08068FC6:
	asr r0, r5, #16
	lsl r1, r0, #1
	add r1, r1, r6
	orr r3, r3, r4
	orr r2, r2, r3
	strh r2, [r1]
	add r0, r0, #1
	lsl r0, r0, #16
	lsr r1, r0, #16
	asr r0, r0, #16
	cmp r0, r12
	bne _08068F6E
	add r2, r7, #0
	ldr r3, _08069038  @ =0x0000099B
	add r1, r2, r3
	mov r0, #1
	strb r0, [r1]
	ldr r0, _0806903C  @ =0x0000099D
	add r4, r2, r0
	mov r0, #0
	ldrsb r0, [r4, r0]
	cmp r0, #0
	bne _08068FFA
	mov r0, #8
	bl sub_0812A0A0
_08068FFA:
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #8
	bne _0806901A
	ldr r3, _0806902C  @ =0x0000099E
	add r1, r7, r3
	mov r0, #0
	strb r0, [r1]
	ldr r0, _08069040  @ =0x000009A4
	add r1, r7, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0806901A:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08069028:
	.4byte gRam
_0806902C:
	.4byte 0x0000099E
_08069030:
	.4byte gUnknown_02000C00
_08069034:
	.4byte 0xFFFFF000
_08069038:
	.4byte 0x0000099B
_0806903C:
	.4byte 0x0000099D
_08069040:
	.4byte 0x000009A4
	THUMB_FUNC_END sub_08068F38


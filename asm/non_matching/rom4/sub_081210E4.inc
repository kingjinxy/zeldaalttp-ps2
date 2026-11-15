	THUMB_FUNC_START sub_081210E4
sub_081210E4: @ 0x081210E4
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	ldr r1, _08121158  @ =gUnknown_02006890
	ldr r0, _0812115C  @ =gRam
	ldr r2, _08121160  @ =0x00000E1F
	add r0, r0, r2
	add r0, r0, r9
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _08121164  @ =gUnknown_0200688A
	ldrb r1, [r0]
	sub r0, r0, #5
	mov r8, r0
_08121108:
	lsl r0, r1, #24
	asr r3, r0, #24
	mov r1, r8
	add r4, r3, r1
	ldr r1, _08121168  @ =gUnknown_0818036C
	add r1, r3, r1
	ldrb r2, [r4]
	ldrb r5, [r1]
	add r6, r0, #0
	cmp r2, r5
	beq _081211A2
	ldr r2, _0812116C  @ =gUnknown_02006880
	add r1, r3, r2
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _0812119C
	mov r7, #1
	strb r7, [r1]
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, r5
	beq _081211A2
	cmp r3, #0
	bne _08121170
	mov r1, r8
	ldrb r0, [r1]
	cmp r0, #2
	bne _08121170
	mov r0, #41
	bl sub_080C1A8C
	ldr r0, _08121164  @ =gUnknown_0200688A
	strb r7, [r0]
	b _0812119C
_08121158:
	.4byte gUnknown_02006890
_0812115C:
	.4byte gRam
_08121160:
	.4byte 0x00000E1F
_08121164:
	.4byte gUnknown_0200688A
_08121168:
	.4byte gUnknown_0818036C
_0812116C:
	.4byte gUnknown_02006880
_08121170:
	asr r0, r6, #24
	cmp r0, #1
	bne _08121188
	mov r2, r8
	ldrb r0, [r2, #1]
	cmp r0, #2
	bne _08121188
	ldr r1, _08121184  @ =gUnknown_0200688A
	mov r0, #4
	b _0812119A
_08121184:
	.4byte gUnknown_0200688A
_08121188:
	asr r0, r6, #24
	cmp r0, #4
	bne _0812119C
	mov r1, r8
	ldrb r0, [r1, #4]
	cmp r0, #7
	bne _0812119C
	ldr r1, _081211C8  @ =gUnknown_02006890
	mov r0, #1
_0812119A:
	strb r0, [r1]
_0812119C:
	lsr r0, r6, #24
	bl sub_08121234
_081211A2:
	mov r2, #255
	lsl r2, r2, #24
	add r0, r6, r2
	lsr r1, r0, #24
	cmp r0, #0
	bge _08121108
	ldr r0, _081211CC  @ =gRam
	ldr r1, _081211D0  @ =0x00000E1F
	add r0, r0, r1
	add r0, r0, r9
	ldr r1, _081211C8  @ =gUnknown_02006890
	ldrb r1, [r1]
	strb r1, [r0]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_081211C8:
	.4byte gUnknown_02006890
_081211CC:
	.4byte gRam
_081211D0:
	.4byte 0x00000E1F
	THUMB_FUNC_END sub_081210E4


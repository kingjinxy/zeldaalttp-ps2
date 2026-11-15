	THUMB_FUNC_START sub_08069044
sub_08069044: @ 0x08069044
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r1, _08069120  @ =gRam
	ldr r0, _08069124  @ =0x0000099E
	add r2, r1, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	bge _08069110
	mov r0, #1
	strb r0, [r2]
	mov r7, #0
	mov r2, #31
	mov r10, r2
	mov r3, #248
	lsl r3, r3, #2
	mov r8, r3
	mov r5, #248
	lsl r5, r5, #7
	mov r9, r5
	ldr r0, _08069128  @ =gUnknown_02000C00
	mov r12, r0
_0806907A:
	lsl r1, r7, #1
	ldr r2, _0806912C  @ =gUnknown_02000800
	add r0, r1, r2
	ldrh r0, [r0]
	mov r2, r10
	and r2, r2, r0
	mov r5, r8
	and r5, r5, r0
	mov r6, r9
	and r6, r6, r0
	mov r3, r12
	add r0, r1, r3
	ldrh r0, [r0]
	add r4, r0, #0
	mov r3, r10
	and r4, r4, r3
	cmp r4, r2
	beq _080690A6
	add r4, r4, #4
	cmp r4, r2
	bls _080690A6
	add r4, r2, #0
_080690A6:
	add r3, r0, #0
	mov r2, r8
	and r3, r3, r2
	cmp r3, r5
	beq _080690B8
	add r3, r3, #128
	cmp r3, r5
	bls _080690B8
	add r3, r5, #0
_080690B8:
	mov r2, r9
	and r2, r2, r0
	cmp r2, r6
	beq _080690CC
	mov r5, #128
	lsl r5, r5, #5
	add r2, r2, r5
	cmp r2, r6
	bls _080690CC
	add r2, r6, #0
_080690CC:
	mov r5, r12
	add r0, r1, r5
	orr r4, r4, r3
	orr r2, r2, r4
	strh r2, [r0]
	add r0, r7, #1
	lsl r0, r0, #16
	lsr r7, r0, #16
	mov r0, #128
	lsl r0, r0, #2
	cmp r7, r0
	bne _0806907A
	ldr r2, _08069120  @ =gRam
	ldr r3, _08069130  @ =0x0000099B
	add r1, r2, r3
	mov r0, #1
	strb r0, [r1]
	ldr r5, _08069134  @ =0x0000099D
	add r1, r2, r5
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	asr r1, r0, #24
	cmp r1, #0
	bne _08069110
	add r3, r3, #3
	add r0, r2, r3
	strb r1, [r0]
	add r5, r5, #7
	add r1, r2, r5
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_08069110:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08069120:
	.4byte gRam
_08069124:
	.4byte 0x0000099E
_08069128:
	.4byte gUnknown_02000C00
_0806912C:
	.4byte gUnknown_02000800
_08069130:
	.4byte 0x0000099B
_08069134:
	.4byte 0x0000099D
	THUMB_FUNC_END sub_08069044


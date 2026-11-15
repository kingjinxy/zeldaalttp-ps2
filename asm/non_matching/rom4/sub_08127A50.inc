	THUMB_FUNC_START sub_08127A50
sub_08127A50: @ 0x08127A50
	push {r4-r6,lr}
	ldr r3, _08127AA0  @ =gRam
	ldr r1, _08127AA4  @ =0x0000098E
	add r0, r3, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _08127AB4
	mov r2, #0
	mov r1, #192
	lsl r1, r1, #18
	ldrb r0, [r1, #9]
	cmp r2, r0
	bge _08127AE2
	ldr r0, _08127AA8  @ =0x00001AD2
	add r3, r3, r0
	mov r12, r1
	ldr r6, _08127AAC  @ =gTextPointer
	mov r5, #0
	ldr r4, _08127AB0  @ =gUnknown_02005481
_08127A7A:
	ldrh r0, [r3]
	add r0, r0, r6
	strb r5, [r0]
	ldrh r1, [r3]
	add r1, r1, r4
	mov r0, r12
	add r0, r0, #10
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldrh r0, [r3]
	add r0, r0, #2
	strh r0, [r3]
	add r2, r2, #1
	mov r1, r12
	ldrb r0, [r1, #9]
	cmp r2, r0
	blt _08127A7A
	b _08127AE2
_08127AA0:
	.4byte gRam
_08127AA4:
	.4byte 0x0000098E
_08127AA8:
	.4byte 0x00001AD2
_08127AAC:
	.4byte gTextPointer
_08127AB0:
	.4byte gUnknown_02005481
_08127AB4:
	mov r2, #0
	mov r1, #192
	lsl r1, r1, #18
	ldrb r0, [r1, #9]
	cmp r2, r0
	bge _08127AE2
	ldr r0, _08127AE8  @ =0x00001AD2
	add r3, r3, r0
	add r6, r1, #0
	ldr r5, _08127AEC  @ =gTextPointer
	ldr r4, _08127AF0  @ =gUnknown_0300000A
_08127ACA:
	ldrh r1, [r3]
	add r1, r1, r5
	add r0, r2, r4
	ldrb r0, [r0]
	strb r0, [r1]
	ldrh r0, [r3]
	add r0, r0, #1
	strh r0, [r3]
	add r2, r2, #1
	ldrb r0, [r6, #9]
	cmp r2, r0
	blt _08127ACA
_08127AE2:
	pop {r4-r6}
	pop {r0}
	bx r0
_08127AE8:
	.4byte 0x00001AD2
_08127AEC:
	.4byte gTextPointer
_08127AF0:
	.4byte gUnknown_0300000A
	THUMB_FUNC_END sub_08127A50


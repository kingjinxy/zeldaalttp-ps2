	THUMB_FUNC_START sub_0800E6B0
sub_0800E6B0: @ 0x0800E6B0
	push {r4-r7,lr}
	mov r7, #0
	ldr r2, _0800E6D0  @ =gTextbox
	ldr r1, _0800E6D4  @ =0x0000010D
	add r3, r2, r1
	ldrb r1, [r3]
	add r1, r1, r0
	strb r1, [r3]
	lsl r1, r1, #24
	asr r1, r1, #24
	add r5, r2, #0
	cmp r1, #0
	bgt _0800E6D8
	strb r7, [r3]
	b _0800E6E0
	.byte 0x00
	.byte 0x00
_0800E6D0:
	.4byte gTextbox
_0800E6D4:
	.4byte 0x0000010D
_0800E6D8:
	cmp r1, #7
	ble _0800E6E2
	mov r0, #8
	strb r0, [r3]
_0800E6E0:
	mov r7, #1
_0800E6E2:
	ldr r0, _0800E75C  @ =gUnknown_03000420
	ldrb r0, [r0, #3]
	lsl r0, r0, #3
	ldr r1, _0800E760  @ =gUnknown_020309C0
	add r3, r0, r1
	add r2, r5, #0
	ldr r0, _0800E764  @ =0x0000010D
	add r1, r2, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	beq _0800E768
	add r4, r0, #0
	ldrb r0, [r2, #5]
	lsl r0, r0, #27
	lsr r0, r0, #26
	mul r0, r4, r0
	lsr r1, r0, #4
	strb r1, [r3, #6]
	mov r6, #1
	add r0, r1, #0
	and r0, r0, r6
	cmp r0, #0
	beq _0800E716
	add r0, r1, #1
	strb r0, [r3, #6]
_0800E716:
	ldrb r1, [r2, #3]
	lsl r1, r1, #27
	lsr r1, r1, #27
	ldrb r0, [r2, #5]
	lsl r0, r0, #27
	lsr r0, r0, #28
	add r1, r1, r0
	ldrb r0, [r3, #6]
	lsr r0, r0, #1
	sub r1, r1, r0
	strb r1, [r3, #4]
	ldrb r0, [r2, #5]
	lsr r0, r0, #5
	lsl r0, r0, #1
	mul r0, r4, r0
	lsr r1, r0, #4
	strb r1, [r3, #7]
	add r0, r1, #0
	and r0, r0, r6
	cmp r0, #0
	beq _0800E744
	add r0, r1, #1
	strb r0, [r3, #7]
_0800E744:
	ldrb r0, [r5, #4]
	lsl r0, r0, #27
	lsr r0, r0, #27
	ldrb r1, [r5, #5]
	lsr r1, r1, #6
	add r0, r0, r1
	ldrb r1, [r3, #7]
	lsr r1, r1, #1
	sub r0, r0, r1
	strb r0, [r3, #5]
	b _0800E776
	.byte 0x00
	.byte 0x00
_0800E75C:
	.4byte gUnknown_03000420
_0800E760:
	.4byte gUnknown_020309C0
_0800E764:
	.4byte 0x0000010D
_0800E768:
	mov r0, #255
	strb r0, [r3, #5]
	mov r0, #1
	neg r0, r0
	strb r0, [r3, #4]
	strb r0, [r3, #7]
	strb r0, [r3, #6]
_0800E776:
	ldr r0, _0800E788  @ =gUnknown_0202E154
	ldrb r1, [r0]
	strb r1, [r3, #2]
	ldrb r0, [r0]
	strb r0, [r3, #1]
	add r0, r7, #0
	pop {r4-r7}
	pop {r1}
	bx r1
_0800E788:
	.4byte gUnknown_0202E154
	THUMB_FUNC_END sub_0800E6B0


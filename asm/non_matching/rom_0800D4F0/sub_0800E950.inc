	THUMB_FUNC_START sub_0800E950
sub_0800E950: @ 0x0800E950
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r0, _0800E9C8  @ =gUnknown_03000420
	ldrb r2, [r0, #3]
	lsl r1, r2, #3
	ldr r0, _0800E9CC  @ =gUnknown_020309C0
	add r1, r1, r0
	str r1, [sp]
	ldrb r0, [r1, #6]
	cmp r0, #0
	beq _0800EA24
	ldrb r0, [r1, #7]
	cmp r0, #0
	beq _0800EA24
	add r5, r0, #0
	lsl r1, r2, #11
	ldr r0, _0800E9D0  @ =gUnknown_0202D112
	add r1, r1, r0
	ldr r2, [sp]
	ldrb r0, [r2, #5]
	lsl r0, r0, #5
	ldrb r3, [r2, #4]
	add r0, r0, r3
	lsl r0, r0, #1
	add r6, r1, r0
	mov r0, #4
	sub r0, r0, r5
	lsr r1, r0, #31
	add r0, r0, r1
	asr r2, r0, #1
	ldr r7, _0800E9D4  @ =gUnknown_0201EEC4
	mov r10, r7
_0800E998:
	ldr r0, [sp]
	ldrb r4, [r0, #6]
	add r6, r6, #64
	mov r1, r10
	add r3, r2, r1
	ldrb r0, [r3]
	cmp r0, #0
	bne _0800E9D8
	add r1, r6, #0
	add r2, r2, #1
	mov r8, r2
	sub r5, r5, #1
	mov r12, r5
	mov r2, #15
_0800E9B4:
	strh r2, [r1]
	add r1, r1, #2
	lsl r0, r4, #24
	mov r3, #255
	lsl r3, r3, #24
	add r0, r0, r3
	lsr r4, r0, #24
	cmp r0, #0
	bgt _0800E9B4
	b _0800EA1C
_0800E9C8:
	.4byte gUnknown_03000420
_0800E9CC:
	.4byte gUnknown_020309C0
_0800E9D0:
	.4byte gUnknown_0202D112
_0800E9D4:
	.4byte gUnknown_0201EEC4
_0800E9D8:
	mov r1, #0
	ldrb r3, [r3]
	lsl r0, r2, #3
	add r7, r2, #1
	mov r8, r7
	sub r5, r5, #1
	mov r12, r5
	sub r0, r0, r2
	lsl r5, r0, #2
	ldr r0, _0800EA34  @ =gUnknown_0201EE54
	mov r9, r0
_0800E9EE:
	lsl r1, r1, #24
	asr r1, r1, #24
	lsl r2, r1, #1
	add r2, r2, r6
	add r0, r1, r5
	add r0, r0, r9
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r0, r0, r3
	strh r0, [r2]
	add r1, r1, #1
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r3, #2
	lsl r0, r0, #16
	lsr r3, r0, #16
	lsl r0, r4, #24
	mov r2, #255
	lsl r2, r2, #24
	add r0, r0, r2
	lsr r4, r0, #24
	cmp r0, #0
	bgt _0800E9EE
_0800EA1C:
	mov r2, r8
	mov r5, r12
	cmp r5, #0
	bne _0800E998
_0800EA24:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0800EA34:
	.4byte gUnknown_0201EE54
	THUMB_FUNC_END sub_0800E950


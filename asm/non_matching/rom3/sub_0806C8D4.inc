	THUMB_FUNC_START sub_0806C8D4
sub_0806C8D4: @ 0x0806C8D4
	push {r4-r7,lr}
	ldr r4, _0806C960  @ =gRam
	mov r0, #184
	lsl r0, r0, #5
	add r0, r0, r4
	mov r12, r0
	mov r0, #12
	mov r1, r12
	strb r0, [r1]
	ldr r3, _0806C964  @ =0x00001787
	add r7, r4, r3
	strb r0, [r7]
	ldr r6, _0806C968  @ =0x00000ABE
	add r0, r4, r6
	ldrh r5, [r0]
	ldr r0, _0806C96C  @ =0x00000958
	add r3, r4, r0
	ldr r0, _0806C970  @ =gUnknown_0814CAF2
	lsl r2, r5, #1
	add r0, r2, r0
	ldrh r0, [r0]
	ldrh r1, [r3]
	add r0, r0, r1
	mov r6, #4
	neg r6, r6
	add r1, r6, #0
	and r0, r0, r1
	mov r6, #0
	strh r0, [r3]
	ldr r3, _0806C974  @ =0x00000956
	add r1, r4, r3
	strh r0, [r1]
	mov r1, #254
	lsl r1, r1, #1
	and r1, r1, r0
	ldr r3, _0806C978  @ =0x00000B84
	add r0, r4, r3
	add r2, r2, r0
	ldrh r2, [r2]
	cmp r1, r2
	bne _0806C95A
	ldr r1, _0806C97C  @ =0x000009AD
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #18
	bls _0806C932
	add r5, r5, #2
_0806C932:
	mov r3, #182
	lsl r3, r3, #5
	add r2, r4, r3
	ldr r1, _0806C980  @ =gUnknown_0814CB12
	lsl r0, r5, #1
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r1, [r2]
	add r0, r0, r1
	strh r0, [r2]
	mov r3, r12
	strb r6, [r3]
	strb r6, [r7]
	ldr r6, _0806C984  @ =0x000009E8
	add r1, r4, r6
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	bl sub_0806D598
_0806C95A:
	pop {r4-r7}
	pop {r0}
	bx r0
_0806C960:
	.4byte gRam
_0806C964:
	.4byte 0x00001787
_0806C968:
	.4byte 0x00000ABE
_0806C96C:
	.4byte 0x00000958
_0806C970:
	.4byte gUnknown_0814CAF2
_0806C974:
	.4byte 0x00000956
_0806C978:
	.4byte 0x00000B84
_0806C97C:
	.4byte 0x000009AD
_0806C980:
	.4byte gUnknown_0814CB12
_0806C984:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806C8D4


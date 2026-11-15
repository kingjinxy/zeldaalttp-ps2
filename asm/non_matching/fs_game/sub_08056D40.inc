	THUMB_FUNC_START sub_08056D40
sub_08056D40: @ 0x08056D40
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	add r0, r7, #4
	ldr r1, _08056D88  @ =gUnknown_030004A0
	ldrh r2, [r1, #12]
	strh r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, _08056D8C  @ =gSubState
	ldrb r1, [r0]
	cmp r1, #4
	bne _08056D90
	add r0, r7, #4
	mov r2, #0
	ldrsh r1, [r0, r2]
	mov r0, #112
	cmn r1, r0
	bge _08056D86
	add r0, r7, #4
	add r1, r7, #4
	ldrh r2, [r1]
	add r1, r2, #0
	add r1, r1, #8
	add r2, r1, #0
	strh r2, [r0]
_08056D86:
	b _08056DAA
_08056D88:
	.4byte gUnknown_030004A0
_08056D8C:
	.4byte gSubState
_08056D90:
	add r0, r7, #4
	mov r2, #0
	ldrsh r1, [r0, r2]
	mov r0, #160
	cmn r1, r0
	ble _08056DAA
	add r0, r7, #4
	add r1, r7, #4
	ldrh r2, [r1]
	add r1, r2, #0
	sub r1, r1, #8
	add r2, r1, #0
	strh r2, [r0]
_08056DAA:
	ldr r0, _08056DC8  @ =gUnknown_030004A0
	add r1, r7, #4
	ldrh r2, [r0, #12]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #12]
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
_08056DC8:
	.4byte gUnknown_030004A0
	THUMB_FUNC_END sub_08056D40


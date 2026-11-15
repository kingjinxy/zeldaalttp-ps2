	THUMB_FUNC_START sub_0800C6A8
sub_0800C6A8: @ 0x0800C6A8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	mov r9, r0
	ldr r0, _0800C74C  @ =gUnknown_02030950
	mov r4, #0
	str r4, [sp]
	bl _call_via_r0
	lsl r0, r0, #24
	ldr r1, _0800C750  @ =gUnknown_02030790
	strb r4, [r1, #3]
	cmp r0, #0
	beq _0800C72E
	mov r5, #0
	add r0, sp, #4
	mov r8, r0
	add r7, r1, #0
	mov r0, #15
	neg r0, r0
	mov r10, r0
_0800C6D8:
	lsl r0, r5, #3
	sub r0, r0, r5
	lsl r0, r0, #2
	ldr r1, [r7, #44]
	add r1, r1, r0
	mov r4, #0
	mov r3, #0
	add r6, r5, #1
	add r2, r1, #0
_0800C6EA:
	ldrh r0, [r2]
	add r4, r4, r0
	add r2, r2, #2
	add r3, r3, #1
	cmp r3, #11
	bls _0800C6EA
	lsl r0, r4, #16
	asr r0, r0, #16
	add r4, r1, #4
	cmp r0, r10
	bne _0800C71A
	lsl r1, r5, #2
	add r1, r1, r5
	lsl r1, r1, #2
	add r1, r1, r9
	add r0, r4, #0
	ldr r2, _0800C754  @ =0x04000005
	bl CpuSet
	mov r0, #1
	lsl r0, r0, r5
	ldrb r1, [r7, #3]
	orr r0, r0, r1
	strb r0, [r7, #3]
_0800C71A:
	mov r0, #0
	str r0, [sp, #4]
	mov r0, r8
	add r1, r4, #0
	ldr r2, _0800C758  @ =0x05000005
	bl CpuSet
	add r5, r6, #0
	cmp r5, #3
	ble _0800C6D8
_0800C72E:
	ldr r1, _0800C750  @ =gUnknown_02030790
	ldrb r0, [r1, #2]
	ldrb r2, [r1, #3]
	orr r0, r0, r2
	strb r0, [r1, #2]
	ldrb r0, [r1, #3]
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_0800C74C:
	.4byte gUnknown_02030950
_0800C750:
	.4byte gUnknown_02030790
_0800C754:
	.4byte 0x04000005
_0800C758:
	.4byte 0x05000005
	THUMB_FUNC_END sub_0800C6A8


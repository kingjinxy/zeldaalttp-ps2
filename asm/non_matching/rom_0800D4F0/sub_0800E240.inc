	THUMB_FUNC_START sub_0800E240
sub_0800E240: @ 0x0800E240
	push {r4-r6,lr}
	sub sp, sp, #8
	add r6, r0, #0
	add r5, r6, #0
	add r5, r5, #128
	add r1, r6, #0
	add r1, r1, #100
	add r0, r5, #0
	mov r2, #14
	bl CpuSet
	add r4, r6, #0
	add r4, r4, #156
	add r0, r4, #0
	add r1, r5, #0
	mov r2, #14
	bl CpuSet
	add r5, r5, #56
	add r0, r5, #0
	add r1, r4, #0
	mov r2, #14
	bl CpuSet
	mov r0, sp
	mov r4, #0
	strh r4, [r0]
	ldr r2, _0800E2C0  @ =0x0100000E
	add r1, r5, #0
	bl CpuSet
	add r1, r6, #0
	add r1, r1, #213
	ldrb r0, [r1]
	add r3, r6, #0
	add r3, r3, #212
	strb r0, [r3]
	add r2, r6, #0
	add r2, r2, #214
	ldrb r0, [r2]
	strb r0, [r1]
	add r1, r1, #2
	ldrb r0, [r1]
	strb r0, [r2]
	strb r4, [r1]
	ldrb r0, [r6, #27]
	cmp r0, #2
	bne _0800E2CC
	ldrb r0, [r3]
	cmp r0, #0
	bne _0800E316
	mov r0, #1
	neg r0, r0
	str r0, [sp, #4]
	add r0, sp, #4
	ldr r1, _0800E2C4  @ =gUnknown_02002B90
	ldr r2, _0800E2C8  @ =0x01000140
	bl CpuFastSet
	mov r0, #2
	bl sub_0800EB08
	b _0800E2F6
	.byte 0x00
	.byte 0x00
_0800E2C0:
	.4byte 0x0100000E
_0800E2C4:
	.4byte gUnknown_02002B90
_0800E2C8:
	.4byte 0x01000140
_0800E2CC:
	ldrb r0, [r2]
	cmp r0, #0
	bne _0800E316
	mov r0, #132
	lsl r0, r0, #1
	add r1, r6, r0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _0800E320  @ =gUnknown_0201EF00
	ldrb r0, [r1, #8]
	sub r0, r0, #2
	strb r0, [r1, #8]
	ldrb r0, [r1, #9]
	sub r0, r0, #2
	strb r0, [r1, #9]
	ldrb r0, [r1, #10]
	sub r0, r0, #2
	strb r0, [r1, #10]
	ldrb r0, [r1, #11]
	sub r0, r0, #2
	strb r0, [r1, #11]
_0800E2F6:
	add r1, r6, #0
	add r1, r1, #91
	mov r0, #0
	strb r0, [r1]
	add r0, r6, #0
	add r0, r0, #255
	ldrb r0, [r0]
	mov r1, #64
	orr r1, r1, r0
	add r0, r6, #0
	bl sub_0800DFC4
	add r1, r6, #0
	add r1, r1, #249
	mov r0, #1
	strb r0, [r1]
_0800E316:
	add sp, sp, #8
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0800E320:
	.4byte gUnknown_0201EF00
	THUMB_FUNC_END sub_0800E240


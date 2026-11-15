	THUMB_FUNC_START sub_08121234
sub_08121234: @ 0x08121234
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _08121310  @ =gUnknown_02006885
	add r2, r0, r1
	ldr r1, _08121314  @ =gUnknown_08180380
	add r0, r0, r1
	ldrb r0, [r0]
	ldrb r2, [r2]
	add r0, r0, r2
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _08121318  @ =gUnknown_0817FF34
	lsl r1, r0, #2
	add r1, r1, r2
	ldr r7, [r1]
	add r0, r0, #1
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r0, [r0]
	sub r0, r0, r7
	str r0, [sp, #4]
	mov r6, #0
	ldr r2, _0812131C  @ =gRam
	mov r9, r2
	mov r3, #150
	lsl r3, r3, #4
	add r3, r3, r9
	mov r10, r3
	ldr r0, _08121320  @ =gUnknown_03003E74
	mov r8, r0
_0812127C:
	add r1, r6, #0
	add r0, r1, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r2, r6, #0
	add r1, r7, r1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldr r3, _08121324  @ =gUnknown_0200688E
	ldrh r3, [r3]
	add r1, r1, r3
	ldr r0, _08121328  @ =0x00000952
	add r0, r0, r9
	ldrh r0, [r0]
	sub r1, r1, r0
	ldr r0, _0812132C  @ =gUnknown_03002B94
	strh r1, [r0]
	add r0, r2, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	add r2, r7, r2
	mov r1, #0
	ldrsb r1, [r2, r1]
	ldr r2, _08121330  @ =gUnknown_0200688C
	ldrh r2, [r2]
	add r1, r1, r2
	ldr r0, _08121334  @ =0x00000958
	add r0, r0, r9
	ldrh r0, [r0]
	sub r1, r1, r0
	mov r3, r10
	strh r1, [r3]
	mov r1, r8
	ldrh r0, [r1]
	ldr r2, _0812132C  @ =gUnknown_03002B94
	ldrh r1, [r2]
	ldrh r2, [r3]
	ldr r4, _08121338  @ =gUnknown_08180371
	add r3, r7, r6
	ldrb r5, [r3]
	mov r3, #15
	and r3, r3, r5
	add r3, r3, r4
	ldrb r3, [r3]
	mov r4, #192
	and r4, r4, r5
	mov r5, #60
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	mov r3, r8
	ldrh r0, [r3]
	add r0, r0, #1
	strh r0, [r3]
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r0, [sp, #4]
	cmp r6, r0
	bne _0812127C
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08121310:
	.4byte gUnknown_02006885
_08121314:
	.4byte gUnknown_08180380
_08121318:
	.4byte gUnknown_0817FF34
_0812131C:
	.4byte gRam
_08121320:
	.4byte gUnknown_03003E74
_08121324:
	.4byte gUnknown_0200688E
_08121328:
	.4byte 0x00000952
_0812132C:
	.4byte gUnknown_03002B94
_08121330:
	.4byte gUnknown_0200688C
_08121334:
	.4byte 0x00000958
_08121338:
	.4byte gUnknown_08180371
	THUMB_FUNC_END sub_08121234


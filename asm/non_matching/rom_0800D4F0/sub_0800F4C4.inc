	THUMB_FUNC_START sub_0800F4C4
sub_0800F4C4: @ 0x0800F4C4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #96
	add r5, r1, #0
	lsl r0, r0, #16
	lsr r7, r0, #16
	bl sub_0800EEA8
	mov r10, r0
	cmp r0, #0
	bne _0800F4E4
	mov r0, #0
	b _0800F67A
_0800F4E4:
	add r4, sp, #64
	ldr r2, _0800F508  @ =0x04000006
	add r0, r5, #0
	add r1, r4, #0
	bl CpuSet
	ldr r0, [r4, #12]
	str r0, [sp, #12]
	mov r0, #0
	str r0, [sp]
	mov r9, r4
	cmp r7, #0
	beq _0800F50C
	mov r0, sp
	add r1, r7, #0
	bl sub_0800ED7C
	b _0800F516
_0800F508:
	.4byte 0x04000006
_0800F50C:
	ldr r0, _0800F5B0  @ =gUnknown_020309D0
	ldr r1, [r0]
	mov r0, sp
	bl sub_0800EDB8
_0800F516:
	mov r0, r9
	ldrb r1, [r0, #18]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _0800F524
	b _0800F638
_0800F524:
	mov r0, #14
	and r0, r0, r1
	lsl r6, r0, #7
	ldr r0, _0800F5B4  @ =0x03000030
	ldr r2, _0800F5B8  @ =0x000AE6FC
	add r1, r6, r2
	ldr r0, [r0]
	add r0, r0, r1
	mov r2, r9
	ldr r1, [r2, #4]
	mov r2, #40
	bl CpuFastSet
	ldr r1, _0800F5BC  @ =gUnknown_08137E5C
	mov r2, r9
	ldrb r0, [r2, #21]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	str r0, [sp, #88]
	add r0, sp, #88
	ldr r1, [r2, #4]
	add r1, r1, #160
	ldr r2, _0800F5C0  @ =0x01000008
	bl CpuFastSet
	mov r1, r9
	ldr r0, [r1, #4]
	add r0, r0, #192
	str r0, [r1, #4]
	mov r0, sp
	mov r1, #1
	bl sub_0800F408
	add r6, r0, #0
	asr r1, r6, #24
	mov r2, r9
	ldrb r0, [r2, #20]
	mul r1, r0, r1
	asr r0, r6, #16
	lsl r0, r0, #24
	lsr r0, r0, #23
	add r1, r1, r0
	str r1, [sp, #92]
	lsl r0, r6, #16
	lsr r6, r0, #16
	ldrb r0, [r2, #23]
	cmp r0, r6
	bge _0800F588
	add r6, r0, #0
_0800F588:
	add r0, r6, #7
	cmp r0, #0
	bge _0800F590
	add r0, r0, #7
_0800F590:
	asr r6, r0, #3
	ldr r7, [sp, #64]
	add r0, r7, #0
	add r0, r0, #64
	str r0, [sp, #64]
	mov r1, r9
	ldrb r0, [r1, #19]
	cmp r0, #0
	beq _0800F5C4
	add r6, r6, #1
	mov r0, #254
	and r6, r6, r0
	add r0, r6, #2
	sub r7, r7, r0
	b _0800F5CA
	.byte 0x00
	.byte 0x00
_0800F5B0:
	.4byte gUnknown_020309D0
_0800F5B4:
	.4byte 0x03000030
_0800F5B8:
	.4byte 0x000AE6FC
_0800F5BC:
	.4byte gUnknown_08137E5C
_0800F5C0:
	.4byte 0x01000008
_0800F5C4:
	add r0, r7, #0
	add r0, r0, #66
	str r0, [sp, #64]
_0800F5CA:
	mov r2, r9
	ldrh r0, [r2, #16]
	ldr r1, _0800F604  @ =0x000003FF
	mov r8, r1
	mov r2, r8
	and r2, r2, r0
	mov r0, r9
	ldrb r1, [r0, #18]
	mov r0, #240
	and r0, r0, r1
	lsl r0, r0, #8
	orr r2, r2, r0
	mov r8, r2
	lsl r1, r6, #16
	asr r1, r1, #16
	ldr r2, [sp, #92]
	lsl r4, r2, #16
	asr r2, r4, #16
	add r0, r7, #0
	mov r3, r8
	bl sub_0800E80C
	lsr r4, r4, #16
	add r1, r4, #0
	add r7, r7, #2
	sub r0, r1, #1
	lsl r0, r0, #16
	b _0800F62A
	.byte 0x00
	.byte 0x00
_0800F604:
	.4byte 0x000003FF
_0800F608:
	add r1, r7, #0
	add r1, r1, #64
	add r7, r1, #0
	sub r2, r6, #1
	sub r5, r4, #1
	cmp r6, #0
	ble _0800F626
	mov r3, r8
	add r3, r3, #5
_0800F61A:
	strh r3, [r1]
	add r1, r1, #2
	add r0, r2, #0
	sub r2, r2, #1
	cmp r0, #0
	bgt _0800F61A
_0800F626:
	add r1, r4, #0
	lsl r0, r5, #16
_0800F62A:
	lsr r4, r0, #16
	cmp r1, #0
	bne _0800F608
	mov r1, r9
	ldrh r0, [r1, #16]
	add r0, r0, #6
	strh r0, [r1, #16]
_0800F638:
	mov r2, r9
	ldrb r0, [r2, #23]
	mov r1, r10
	strb r0, [r1, #2]
	ldr r0, [r2, #8]
	str r0, [r1, #8]
	ldrb r0, [r2, #22]
	strb r0, [r1, #4]
_0800F648:
	mov r0, r9
	mov r1, sp
	mov r2, r10
	bl sub_0800F68C
	lsl r0, r0, #16
	cmp r0, #0
	bne _0800F648
	mov r0, r10
	bl sub_0800EEE0
	mov r2, r9
	ldrb r1, [r2, #18]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0800F676
	lsl r1, r6, #16
	ldr r2, [sp, #92]
	lsl r0, r2, #16
	lsr r0, r0, #16
	orr r1, r1, r0
	b _0800F678
_0800F676:
	mov r1, #0
_0800F678:
	add r0, r1, #0
_0800F67A:
	add sp, sp, #96
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0800F4C4

	.byte 0x00
	.byte 0x00

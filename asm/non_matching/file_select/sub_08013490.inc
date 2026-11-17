	THUMB_FUNC_START sub_08013490
sub_08013490: @ 0x08013490
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	str r0, [sp]
	lsl r1, r1, #16
	lsr r0, r1, #16
	mov r8, r0
	cmp r0, #0
	bne _080134AA
	b _080136C2
_080134AA:
	lsr r5, r1, #17
	add r2, r5, #0
	mov r0, #1
	mov r3, r8
	and r0, r0, r3
	cmp r0, #0
	beq _080134BA
	add r5, r5, #1
_080134BA:
	ldr r6, [sp]
	lsl r0, r5, #1
	add r7, r6, r0
	ldr r4, _08013548  @ =gUnknown_02038000
	lsr r1, r1, #18
	mov r0, r8
	lsl r0, r0, #1
	mov r12, r0
_080134CA:
	ldrh r0, [r6]
	strh r0, [r4]
	add r6, r6, #2
	add r4, r4, #2
	sub r0, r5, #1
	lsl r0, r0, #16
	lsr r5, r0, #16
	cmp r2, #0
	beq _080134EA
	ldrh r0, [r7]
	strh r0, [r4]
	add r7, r7, #2
	add r4, r4, #2
	sub r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
_080134EA:
	cmp r5, #0
	bne _080134CA
	add r3, r1, #0
	mov r10, r3
	add r2, r3, #0
	add r5, r3, #0
	mov r1, #3
	mov r0, r8
	and r1, r1, r0
	cmp r1, #0
	beq _08013510
	add r5, r5, #1
	add r0, r3, #1
	cmp r1, #1
	bls _08013510
	add r2, r0, #0
	cmp r1, #2
	bls _08013510
	add r3, r2, #0
_08013510:
	ldr r6, _08013548  @ =gUnknown_02038000
	lsl r0, r5, #1
	add r0, r0, r6
	lsl r1, r2, #1
	add r0, r0, r1
	sub r7, r0, #2
	mov r9, r0
	ldr r1, _0801354C  @ =gUnknown_02037FFE
	add r1, r1, r12
	mov r8, r1
	ldr r4, [sp]
	str r2, [sp, #4]
	str r3, [sp, #8]
	bl sub_0800099C
	add r1, r0, #0
	mov r0, #3
	and r1, r1, r0
	ldr r2, [sp, #4]
	ldr r3, [sp, #8]
	cmp r1, #1
	beq _080135B6
	cmp r1, #1
	bgt _08013550
	cmp r1, #0
	beq _0801355C
	b _080136C2
	.byte 0x00
	.byte 0x00
_08013548:
	.4byte gUnknown_02038000
_0801354C:
	.4byte gUnknown_02037FFE
_08013550:
	cmp r1, #2
	beq _08013610
	cmp r1, #3
	bne _0801355A
	b _0801366A
_0801355A:
	b _080136C2
_0801355C:
	ldrh r0, [r6]
	strh r0, [r4]
	add r6, r6, #2
	add r4, r4, #2
	sub r0, r5, #1
	lsl r0, r0, #16
	lsr r5, r0, #16
	cmp r2, #0
	beq _0801357C
	ldrh r0, [r7]
	strh r0, [r4]
	sub r7, r7, #2
	add r4, r4, #2
	sub r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
_0801357C:
	cmp r3, #0
	beq _08013592
	mov r1, r9
	ldrh r0, [r1]
	strh r0, [r4]
	mov r0, #2
	add r9, r9, r0
	add r4, r4, #2
	sub r0, r3, #1
	lsl r0, r0, #16
	lsr r3, r0, #16
_08013592:
	mov r1, r10
	cmp r1, #0
	beq _080135B0
	mov r1, r8
	ldrh r0, [r1]
	strh r0, [r4]
	mov r0, #2
	neg r0, r0
	add r8, r8, r0
	add r4, r4, #2
	mov r0, r10
	sub r0, r0, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r10, r0
_080135B0:
	cmp r5, #0
	bne _0801355C
	b _080136C2
_080135B6:
	mov r1, r10
	cmp r1, #0
	beq _080135D4
	mov r1, r8
	ldrh r0, [r1]
	strh r0, [r4]
	mov r0, #2
	neg r0, r0
	add r8, r8, r0
	add r4, r4, #2
	mov r0, r10
	sub r0, r0, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r10, r0
_080135D4:
	cmp r3, #0
	beq _080135EA
	mov r1, r9
	ldrh r0, [r1]
	strh r0, [r4]
	mov r0, #2
	add r9, r9, r0
	add r4, r4, #2
	sub r0, r3, #1
	lsl r0, r0, #16
	lsr r3, r0, #16
_080135EA:
	cmp r2, #0
	beq _080135FC
	ldrh r0, [r7]
	strh r0, [r4]
	sub r7, r7, #2
	add r4, r4, #2
	sub r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
_080135FC:
	ldrh r0, [r6]
	strh r0, [r4]
	add r6, r6, #2
	add r4, r4, #2
	sub r0, r5, #1
	lsl r0, r0, #16
	lsr r5, r0, #16
	cmp r5, #0
	bne _080135B6
	b _080136C2
_08013610:
	cmp r3, #0
	beq _08013626
	mov r1, r9
	ldrh r0, [r1]
	strh r0, [r4]
	mov r0, #2
	add r9, r9, r0
	add r4, r4, #2
	sub r0, r3, #1
	lsl r0, r0, #16
	lsr r3, r0, #16
_08013626:
	ldrh r0, [r6]
	strh r0, [r4]
	add r6, r6, #2
	add r4, r4, #2
	sub r0, r5, #1
	lsl r0, r0, #16
	lsr r5, r0, #16
	mov r1, r10
	cmp r1, #0
	beq _08013652
	mov r1, r8
	ldrh r0, [r1]
	strh r0, [r4]
	mov r0, #2
	neg r0, r0
	add r8, r8, r0
	add r4, r4, #2
	mov r0, r10
	sub r0, r0, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r10, r0
_08013652:
	cmp r2, #0
	beq _08013664
	ldrh r0, [r7]
	strh r0, [r4]
	sub r7, r7, #2
	add r4, r4, #2
	sub r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
_08013664:
	cmp r5, #0
	bne _08013610
	b _080136C2
_0801366A:
	cmp r2, #0
	beq _0801367C
	ldrh r0, [r7]
	strh r0, [r4]
	sub r7, r7, #2
	add r4, r4, #2
	sub r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
_0801367C:
	mov r1, r10
	cmp r1, #0
	beq _0801369A
	mov r1, r8
	ldrh r0, [r1]
	strh r0, [r4]
	mov r0, #2
	neg r0, r0
	add r8, r8, r0
	add r4, r4, #2
	mov r0, r10
	sub r0, r0, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r10, r0
_0801369A:
	ldrh r0, [r6]
	strh r0, [r4]
	add r6, r6, #2
	add r4, r4, #2
	sub r0, r5, #1
	lsl r0, r0, #16
	lsr r5, r0, #16
	cmp r3, #0
	beq _080136BE
	mov r1, r9
	ldrh r0, [r1]
	strh r0, [r4]
	mov r0, #2
	add r9, r9, r0
	add r4, r4, #2
	sub r0, r3, #1
	lsl r0, r0, #16
	lsr r3, r0, #16
_080136BE:
	cmp r5, #0
	bne _0801366A
_080136C2:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08013490

	.byte 0x00
	.byte 0x00

	THUMB_FUNC_START sub_0801303C
sub_0801303C: @ 0x0801303C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	add r4, r0, #0
	lsl r2, r2, #24
	lsr r5, r2, #24
	ldr r2, _080130CC  @ =gUnknown_02016350
	mov r0, #0
	mov r12, r0
	ldrb r0, [r4]
	cmp r0, #255
	beq _080130BA
	ldr r7, _080130D0  @ =0x0000FFFF
	mov r10, r7
	sub r0, r5, #1
	lsl r0, r0, #1
	str r0, [sp]
	add r6, r1, #4
	add r0, r0, #1
	add r0, r0, r6
	mov r9, r0
	lsl r0, r5, #5
	mov r8, r0
_08013070:
	ldrh r0, [r2]
	cmp r0, r10
	bne _080130A4
	ldrb r1, [r4]
	ldrb r3, [r4, #1]
	cmp r5, #0
	beq _0801308C
	ldr r7, [sp]
	add r0, r6, r7
	ldrb r0, [r0]
	add r1, r1, r0
	mov r7, r9
	ldrb r0, [r7]
	add r3, r3, r0
_0801308C:
	lsl r0, r3, #6
	orr r1, r1, r0
	strh r1, [r2]
	ldrb r1, [r4, #2]
	mov r0, #31
	and r0, r0, r1
	mov r1, r8
	orr r0, r0, r1
	strb r0, [r2, #2]
	ldrb r0, [r4, #3]
	strb r0, [r2, #3]
	add r4, r4, #4
_080130A4:
	mov r0, r12
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r12, r0
	add r2, r2, #4
	cmp r0, #31
	bhi _080130BA
	ldrb r0, [r4]
	cmp r0, #255
	bne _08013070
_080130BA:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080130CC:
	.4byte gUnknown_02016350
_080130D0:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_0801303C


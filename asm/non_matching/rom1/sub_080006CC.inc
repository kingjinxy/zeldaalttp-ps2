	THUMB_FUNC_START sub_080006CC
sub_080006CC:
	ldr r3, [r2, #20]
	cmp r3, #0
	beq _0800073C
_080006D2:
	ldrh r4, [r2, #34]
	ldr r5, _080007B4  @ =0x00001051
	and r4, r4, r5
	bne _0800073C
	ldrb r4, [r3, #20]
	cmp r4, #3
	beq _0800073C
	ldrh r4, [r0, #50]
	ldrh r5, [r3, #50]
	sub r5, r5, r4
	ldrb r4, [r1, #6]
	add r5, r5, r4
	lsl r4, r4, #1
	cmp r5, r4
	bcs _0800073C
	ldrh r4, [r0, #54]
	ldrh r5, [r3, #54]
	add r5, r5, #3
	sub r5, r5, r4
	ldrb r4, [r1, #7]
	add r5, r5, r4
	lsl r4, r4, #1
	cmp r5, r4
	bcs _0800073C
	mov r4, #58
	ldrsh r5, [r3, r4]
	add r5, r5, #5
	bmi _0800073C
	ldrh r4, [r0, r7]
	ldrh r5, [r3, r7]
	and r4, r4, r5
	lsr r4, r4, #14
	beq _0800073C
	ldrb r4, [r2]
	cmp r4, #0
	bne _0800073C
	mov r4, #1
	strb r4, [r2]
	ldr r4, [r0, #96]
	orr r4, r4, r6
	str r4, [r0, #96]
	ldrh r4, [r0, r7]
	lsr r4, r4, #14
	lsl r4, r4, #14
	lsl r5, r5, #18
	lsr r5, r5, #18
	orr r4, r4, r5
	strh r4, [r3, r7]
	push {r0-r2,lr}
	add r0, r3, #0
	bl sub_08008DD8
	pop {r0-r2,pc}
_0800073C:
	mov pc, lr
	THUMB_FUNC_END sub_08000694


	THUMB_FUNC_START sub_08053638
sub_08053638: @ 0x08053638
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #80
	ldrh r2, [r1]
	add r0, r2, #0
	bl sub_08015DC0
	str r0, [r7, #4]
	ldr r0, [r7]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _080536E8  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _080536E8  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	lsl r2, r3, #6
	orr r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r1, #4
	ldr r1, [r7, #4]
	add r2, r1, r2
	str r2, [r0, #124]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	mov r3, #128
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #24]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	mov r3, #31
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #10]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #10]
	ldr r4, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	cmp r1, #0
	beq _080536EC
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	add r0, r1, #0
	bl sub_08013D20
	b _080536EE
	.byte 0x00
	.byte 0x00
_080536E8:
	.4byte gUnknown_03000450
_080536EC:
	mov r0, #0
_080536EE:
	str r0, [r4, #96]
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08053638


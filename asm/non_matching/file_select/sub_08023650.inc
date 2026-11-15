	THUMB_FUNC_START sub_08023650
sub_08023650: @ 0x08023650
	push {r4-r6,lr}
	add r4, r0, #0
	ldr r0, [r4, #84]
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	beq _080236E6
	ldrb r0, [r4, #20]
	cmp r0, #0
	bne _0802368C
	mov r3, #1
	mov r0, #1
	strb r0, [r4, #20]
	ldrb r2, [r4, #28]
	mov r1, #4
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	orr r0, r0, r3
	strb r0, [r4, #28]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r0, [r2]
	and r1, r1, r0
	orr r1, r1, r3
	strb r1, [r2]
	add r0, r4, #0
	mov r1, #19
	bl 0x08003870
_0802368C:
	ldrb r6, [r4, #11]
	lsr r0, r6, #4
	cmp r0, #0
	beq _080236A4
	ldr r1, [r4, #88]
	ldr r0, [r4, #84]
	add r0, r0, #124
	ldrh r2, [r0]
	add r0, r4, #0
	bl sub_08023E14
	b _080236F2
_080236A4:
	ldr r2, [r4, #84]
	mov r0, #50
	ldrsh r1, [r2, r0]
	ldr r5, [r2, #88]
	mov r3, #50
	ldrsh r0, [r5, r3]
	sub r1, r1, r0
	mov r3, #15
	and r3, r3, r6
	add r0, r1, #0
	mul r0, r3, r0
	cmp r0, #0
	bge _080236C0
	add r0, r0, #3
_080236C0:
	asr r0, r0, #2
	ldrh r5, [r5, #50]
	add r0, r0, r5
	strh r0, [r4, #50]
	mov r5, #54
	ldrsh r0, [r2, r5]
	ldr r2, [r2, #88]
	mov r5, #54
	ldrsh r1, [r2, r5]
	sub r0, r0, r1
	mul r0, r3, r0
	cmp r0, #0
	bge _080236DC
	add r0, r0, #3
_080236DC:
	asr r0, r0, #2
	ldrh r2, [r2, #54]
	add r0, r0, r2
	strh r0, [r4, #54]
	b _080236F2
_080236E6:
	add r0, r4, #0
	bl sub_08023F10
	add r0, r4, #0
	bl DeleteThisEntity
_080236F2:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08023650


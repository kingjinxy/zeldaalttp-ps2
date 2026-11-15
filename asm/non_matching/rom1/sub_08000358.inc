	THUMB_FUNC_START sub_08000358
sub_08000358: @ 0x08000358
	push {r4-r7,lr}
	mov r2, #0
	mov r12, r2
	add r4, r0, #0
	add r4, r4, #48
	add r5, r1, #0
	add r5, r5, #48
	ldr r6, [r4, #24]
	ldr r7, [r5, #24]
	ldrh r0, [r4, #32]
	ldrh r1, [r5, #32]
	and r0, r0, r1
	lsr r0, r0, #14
	beq _080003DA
	ldrh r0, [r4, #2]
	ldrh r1, [r5, #2]
	sub r0, r0, r1
	mov r2, #0
	ldrsb r1, [r6, r2]
	add r0, r0, r1
	ldrsb r1, [r7, r2]
	sub r0, r0, r1
	ldrb r2, [r6, #6]
	ldrb r3, [r7, #6]
	add r2, r2, r3
	add r0, r0, r2
	add r2, r2, r2
	cmp r2, r0
	bcc _080003DA
	ldrh r2, [r4, #6]
	ldrh r3, [r5, #6]
	sub r2, r2, r3
	mov r1, #1
	ldrsb r3, [r6, r1]
	add r2, r2, r3
	ldrsb r3, [r7, r1]
	sub r2, r2, r3
	ldrb r1, [r6, #6]
	ldrb r3, [r7, #6]
	add r3, r3, r1
	add r2, r2, r3
	add r3, r3, r3
	cmp r3, r2
	bcc _080003DA
	mov r2, #5
	mov r3, #5
	ldrb r0, [r4, #12]
	lsr r0, r0, #5
	bcc _080003BC
	ldrb r2, [r6, #8]
_080003BC:
	ldrb r0, [r5, #12]
	lsr r0, r0, #5
	bcc _080003C4
	ldrb r3, [r7, #8]
_080003C4:
	add r2, r2, r3
	mov r0, #10
	ldrsh r1, [r5, r0]
	ldrsh r0, [r4, r0]
	sub r0, r0, r1
	add r0, r0, r2
	lsl r2, r2, #1
	cmp r2, r0
	bcc _080003DA
	mov r2, #1
	mov r12, r2
_080003DA:
	mov r0, r12
	pop {r4-r7,pc}
	THUMB_FUNC_END sub_08000358

	@ likely hand-written assembly

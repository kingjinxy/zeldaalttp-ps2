	THUMB_FUNC_START sub_080521A4
sub_080521A4: @ 0x080521A4
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	add r0, r1, #0
	str r2, [r7, #8]
	add r1, r7, #4
	strb r0, [r1]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldr r2, [r7]
	ldr r1, [r2, #84]
	add r2, r7, #4
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r2, r3, #0
	ldrh r1, [r1, #50]
	add r2, r2, r1
	add r3, r2, #0
	sub r1, r3, #1
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	ldrh r3, [r2, #54]
	add r1, r3, #4
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	ldr r1, [r0, #84]
	add r0, r1, #0
	add r1, r1, #35
	ldrb r0, [r1]
	cmp r0, #6
	bls _0805222E
	ldr r0, [r7]
	ldr r1, [r7]
	ldrh r2, [r1, #54]
	add r1, r2, #5
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
_0805222E:
	ldr r0, [r7]
	ldr r1, [r0, #84]
	ldr r0, [r1, #100]
	ldr r1, [r7, #8]
	bl __udivsi3
	add r1, r0, #0
	add r0, r1, #0
	mov r1, #10
	bl __umodsi3
	add r1, r0, #0
	add r0, r1, #0
	add r0, r0, #12
	add r1, r0, #0
	lsl r0, r1, #24
	lsr r1, r0, #24
	ldr r0, [r7]
	bl sub_08003870
	ldr r1, _08052270  @ =gUnknown_02016D60
	add r0, r1, #0
	add r1, r1, #39
	ldrb r0, [r1]
	cmp r0, #0
	beq _08052268
	ldr r0, [r7]
	bl DeleteThisEntity
_08052268:
	add sp, sp, #12
	pop {r7}
	pop {r0}
	bx r0
_08052270:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_080521A4


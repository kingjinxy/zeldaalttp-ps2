	THUMB_FUNC_START sub_08066170
sub_08066170: @ 0x08066170
	push {r4,r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r0, [r7]
	ldr r0, _080661A8  @ =gUnknown_0813FD90
	ldr r1, _080661AC  @ =gUnknown_03006C80
	ldrb r2, [r1]
	sub r1, r2, #1
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, [r0]
	str r1, [r7, #8]
	add r0, r7, #0
	add r0, r0, #12
	mov r1, #0
	strh r1, [r0]
_08066192:
	add r0, r7, #0
	add r0, r0, #12
	ldr r1, _080661AC  @ =gUnknown_03006C80
	ldrb r2, [r1]
	add r1, r2, #0
	ldrh r0, [r0]
	lsl r2, r1, #16
	lsr r1, r2, #16
	cmp r0, r1
	bcc _080661B0
	b _08066208
_080661A8:
	.4byte gUnknown_0813FD90
_080661AC:
	.4byte gUnknown_03006C80
_080661B0:
	add r0, r7, #0
	add r0, r0, #12
	ldrh r1, [r0]
	add r0, r1, #0
	lsl r1, r0, #24
	lsr r2, r1, #24
	mov r0, #102
	mov r1, #1
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _080661F2
	ldr r0, [r7, #4]
	ldr r1, [r7]
	str r1, [r0, #84]
	ldr r1, [r7, #4]
	ldr r0, [r7, #8]
	mov r2, #0
	ldrsh r3, [r0, r2]
	lsl r2, r3, #16
	ldr r3, [r7, #8]
	add r0, r3, #2
	mov r3, #0
	ldrsh r4, [r0, r3]
	lsl r3, r4, #16
	ldr r0, [r7]
	bl sub_0803D4A4
	ldr r0, [r7, #8]
	add r1, r0, #4
	str r1, [r7, #8]
_080661F2:
	add r1, r7, #0
	add r1, r1, #12
	add r0, r7, #0
	add r0, r0, #12
	add r1, r7, #0
	add r1, r1, #12
	ldrh r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strh r2, [r0]
	b _08066192
_08066208:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	add sp, sp, #16
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08066170


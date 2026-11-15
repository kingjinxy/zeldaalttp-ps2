	THUMB_FUNC_START sub_08044198
sub_08044198: @ 0x08044198
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	str r2, [r7, #8]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _080441EE
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_08044018
	ldr r1, [r7, #4]
	add r0, r1, #0
	mov r1, #6
	mov r2, #0
	bl 0x08009394
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _080441EE
	ldr r0, [r7, #4]
	mov r2, #50
	ldrsh r1, [r0, r2]
	add r0, r1, #6
	ldr r1, _0804423C  @ =gUnknown_03000450
	ldrh r2, [r1, #40]
	cmp r0, r2
	bge _080441EE
	ldr r0, [r7, #4]
	ldr r1, [r7, #4]
	ldrh r2, [r1, #50]
	add r1, r2, #6
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
_080441EE:
	ldr r0, [r7, #8]
	cmp r0, #0
	beq _08044234
	ldr r1, [r7, #8]
	ldr r0, [r7]
	bl sub_08044018
	ldr r0, [r7, #8]
	mov r1, #6
	neg r1, r1
	mov r2, #0
	bl 0x08009394
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08044234
	ldr r0, [r7, #4]
	mov r2, #50
	ldrsh r1, [r0, r2]
	sub r0, r1, #6
	cmp r0, #0
	blt _08044234
	ldr r0, [r7, #8]
	ldr r1, [r7, #8]
	ldrh r2, [r1, #50]
	sub r1, r2, #6
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
_08044234:
	add sp, sp, #12
	pop {r7}
	pop {r0}
	bx r0
_0804423C:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_08044198


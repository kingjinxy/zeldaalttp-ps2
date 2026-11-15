	ARM_FUNC_START sub_080007C4
sub_080007C4:
	mov r3, lr
	push {r3-r11}
	ldr r8, =gUnknown_02016D50
	ldr r8, [r8]
	mov r9, r8
_080007D8:
	stmfd sp!, {r9}
	ldrb r10, [r8, #12]
	cmp r10, #0
	beq _08000888
	ldr r4, [r8, #8]
	ldrb r11, [r4, #60]
	lsrs r0, r11, #7
	beq _08000888
	add r9, r8, #16
_080007FC:
	ldr r5, [r9]
	ldrb r0, [r5, #60]
	cmp r0, #128
	bcc _0800087C
	orr r0, r0, r11
	lsrs r0, r0, #7
	bcs _08000848
	ldrb r0, [r5, #67]
	cmp r0, #0
	beq _08000830
	ldrb r0, [r4, #8]
	cmp r0, #1
	beq _0800087C
_08000830:
	ldrb r0, [r4, #61]
	cmp r0, #0
	bne _0800087C
	ldrb r0, [r5, #61]
	cmp r0, #0
	bne _0800087C
_08000848:
	ldr r0, =sub_08000448
	mov lr, pc
	bx r0
	cmp r0, #0
	beq _0800087C
	ldrb r0, [r4, #64]
	orr r0, r0, #128
	strb r0, [r5, #65]
	str r4, [r5, #76]
	ldrb r0, [r5, #64]
	orr r0, r0, #128
	strb r0, [r4, #65]
	str r5, [r4, #76]
_0800087C:
	add r9, r9, #4
	subs r10, r10, #1
	bne _080007FC
_08000888:
	ldmfd sp!, {r9}
	ldr r8, [r8, #4]
	cmp r8, r9
	bne _080007D8
	pop {r3-r11}
	bx r3
	.POOL
	ARM_FUNC_END sub_080007C4

.syntax unified


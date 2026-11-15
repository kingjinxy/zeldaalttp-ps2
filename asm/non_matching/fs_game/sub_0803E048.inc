	THUMB_FUNC_START sub_0803E048
sub_0803E048: @ 0x0803E048
	push {r4,r5,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0803E10C  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _0803E10C  @ =gUnknown_03006A30
	ldr r3, [r7]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, r2
	ldrh r2, [r1, #54]
	ldr r3, _0803E110  @ =0x0000FDFF
	add r1, r2, #0
	and r1, r1, r3
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, _0803E10C  @ =gUnknown_03006A30
	ldr r4, [r7]
	ldrb r3, [r4, #10]
	add r5, r3, #0
	lsl r4, r5, #3
	add r4, r4, r3
	lsl r3, r4, #4
	add r4, r2, r3
	add r2, r4, #0
	add r3, r4, #0
	add r3, r3, #63
	mov r4, #0
	ldrsb r4, [r3, r4]
	add r2, r4, #0
	ldrh r3, [r1, #54]
	sub r1, r3, r2
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, _0803E10C  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	add r1, r0, #0
	add r0, r0, #63
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0803E10C  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrh r1, [r0, #54]
	mov r2, #128
	lsl r2, r2, #3
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _0803E104
	ldr r0, [r7]
	bl 0x080074C0
_0803E104:
	add sp, sp, #4
	pop {r4,r5,r7}
	pop {r0}
	bx r0
_0803E10C:
	.4byte gUnknown_03006A30
_0803E110:
	.4byte 0x0000FDFF
	THUMB_FUNC_END sub_0803E048


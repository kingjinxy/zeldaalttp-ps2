	THUMB_FUNC_START sub_080536F8
sub_080536F8: @ 0x080536F8
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #80
	ldrh r2, [r1]
	add r0, r2, #0
	bl sub_08015DC0
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r2, [r1, #124]
	ldrh r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r0, #0
	ldr r2, _080537A8  @ =0x00005004
	add r0, r0, r2
	add r1, r0, r1
	ldrh r0, [r1]
	mov r1, #135
	lsl r1, r1, #1
	cmp r0, r1
	bne _080537BA
	ldr r0, _080537AC  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, _080537AC  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, _080537B0  @ =gUnknown_08137B10
	ldr r3, [r7]
	ldrb r4, [r3, #10]
	add r3, r4, #0
	lsl r4, r3, #2
	add r2, r2, r4
	ldr r1, [r1]
	ldr r2, [r2]
	orr r1, r1, r2
	str r1, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _080537B4
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
	ldr r0, [r7]
	ldr r2, [r7]
	ldrb r1, [r2, #23]
	add r3, r1, #0
	lsl r2, r3, #4
	sub r2, r2, r1
	lsl r1, r2, #1
	add r2, r0, #0
	add r0, r0, #120
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	b _080537BA
_080537A8:
	.4byte 0x00005004
_080537AC:
	.4byte gUnknown_0201F000
_080537B0:
	.4byte gUnknown_08137B10
_080537B4:
	ldr r0, [r7]
	bl DeleteThisEntity
_080537BA:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080536F8

	.byte 0x00
	.byte 0x00

	THUMB_FUNC_START sub_0805A3E8
sub_0805A3E8: @ 0x0805A3E8
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0805A480  @ =gUnknown_08140E8C
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #0
	bne _0805A478
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #1
	beq _0805A478
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #5
	beq _0805A478
	ldr r0, [r7]
	bl sub_0805ADF8
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r3, [r1, #104]
	sub r2, r3, #1
	add r1, r2, #0
	str r1, [r0, #104]
	mov r0, #1
	cmn r1, r0
	bne _0805A478
	mov r0, #76
	bl play_sound
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #64
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #5
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
_0805A478:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_0805A480:
	.4byte gUnknown_08140E8C
	THUMB_FUNC_END sub_0805A3E8


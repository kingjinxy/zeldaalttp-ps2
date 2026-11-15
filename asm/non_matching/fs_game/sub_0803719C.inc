	THUMB_FUNC_START sub_0803719C
sub_0803719C: @ 0x0803719C
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	add r1, r7, #0
	strb r0, [r1]
	add r1, r7, #0
	ldrb r0, [r1]
	add r2, r0, #0
	lsl r1, r2, #2
	add r1, r1, r0
	lsl r0, r1, #2
	ldr r1, _080371DC  @ =gUnknown_03000FF8
	add r0, r1, r0
	str r0, [r7, #4]
	ldr r0, _080371E0  @ =gUnknown_03000FC0
	add r2, r7, #0
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #2
	add r2, r2, r1
	lsl r1, r2, #2
	add r0, r0, #68
	add r1, r0, r1
	ldr r0, [r1]
	mov r1, #15
	and r0, r0, r1
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #15
	bls _080371E8
_080371D8:
	b _080371E6
	.byte 0x00
	.byte 0x00
_080371DC:
	.4byte gUnknown_03000FF8
_080371E0:
	.4byte gUnknown_03000FC0
	.byte 0x00
	.byte 0xE0
_080371E6:
	b _080371D8
_080371E8:
	ldr r0, [r7, #4]
	ldrb r1, [r0, #1]
	cmp r1, #0
	bne _080371F2
	b _080372EE
_080371F2:
	add r0, r7, #0
	ldr r1, _080372F8  @ =gLCDRegisterBuffer
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	beq _080372EE
	ldr r0, _080372FC  @ =gUnknown_0200B1D0
	ldr r1, [r7, #8]
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r7, #0
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #5
	add r1, r1, r3
	add r0, r0, r1
	ldr r1, [r7, #4]
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #2]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, [r7, #8]
	sub r0, r1, #1
	mov r1, #15
	and r0, r0, r1
	str r0, [r7, #8]
	ldr r0, _080372FC  @ =gUnknown_0200B1D0
	ldr r1, [r7, #8]
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r7, #0
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #5
	add r1, r1, r3
	add r0, r0, r1
	ldr r1, [r7, #4]
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #4]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, [r7, #8]
	sub r0, r1, #1
	mov r1, #15
	and r0, r0, r1
	str r0, [r7, #8]
	ldr r0, _080372FC  @ =gUnknown_0200B1D0
	ldr r1, [r7, #8]
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r7, #0
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #5
	add r1, r1, r3
	add r0, r0, r1
	ldr r1, [r7, #4]
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #6]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, [r7, #8]
	sub r0, r1, #1
	mov r1, #15
	and r0, r0, r1
	str r0, [r7, #8]
	ldr r0, _080372FC  @ =gUnknown_0200B1D0
	ldr r1, [r7, #8]
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r7, #0
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #5
	add r1, r1, r3
	add r0, r0, r1
	ldr r1, [r7, #4]
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #8]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, [r7, #8]
	sub r0, r1, #1
	mov r1, #15
	and r0, r0, r1
	str r0, [r7, #8]
	ldr r0, _080372FC  @ =gUnknown_0200B1D0
	ldr r1, [r7, #8]
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r7, #0
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #5
	add r1, r1, r3
	add r0, r0, r1
	ldr r1, [r7, #4]
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1, #10]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
_080372EE:
	add sp, sp, #12
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080372F8:
	.4byte gLCDRegisterBuffer
_080372FC:
	.4byte gUnknown_0200B1D0
	THUMB_FUNC_END sub_0803719C


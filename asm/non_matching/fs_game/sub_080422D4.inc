	THUMB_FUNC_START sub_080422D4
sub_080422D4: @ 0x080422D4
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r0, _0804236C  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	str r0, [r7, #4]
	ldr r0, [r7]
	ldr r1, [r0, #88]
	str r1, [r7, #8]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #21]
	add r1, r2, #1
	ldrb r2, [r0, #21]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #21]
	ldr r0, [r7]
	ldr r1, _08042370  @ =gUnknown_0813EC00
	str r1, [r0, #72]
	ldr r0, [r7, #8]
	cmp r0, #0
	beq _08042374
	ldr r0, [r7]
	ldr r1, [r7, #8]
	ldr r2, [r1, #48]
	str r2, [r0, #48]
	ldr r0, [r7]
	ldr r1, [r7, #8]
	ldr r2, [r1, #52]
	str r2, [r0, #52]
	ldr r0, [r7]
	ldr r1, [r7, #8]
	ldr r2, [r1, #56]
	str r2, [r0, #56]
	ldr r0, [r7]
	ldr r1, [r7, #8]
	ldrb r2, [r0, #26]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1, #26]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #26]
	ldr r0, [r7, #8]
	ldr r1, [r7, #4]
	ldrb r2, [r1, #29]
	lsl r3, r2, #24
	lsr r1, r3, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #29]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #29]
	b _08042450
_0804236C:
	.4byte gUnknown_03006A30
_08042370:
	.4byte gUnknown_0813EC00
_08042374:
	ldr r0, [r7]
	ldr r1, [r7]
	str r1, [r7, #8]
	str r1, [r0, #88]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldr r1, _0804248C  @ =gUnknown_0813EBB4
	ldr r2, [r7]
	ldrb r3, [r2, #24]
	add r2, r3, #0
	lsl r3, r2, #2
	add r2, r3, #1
	add r1, r1, r2
	add r2, r0, #0
	add r0, r0, #32
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, _0804248C  @ =gUnknown_0813EBB4
	ldr r2, [r7]
	ldrb r3, [r2, #24]
	add r2, r3, #0
	lsl r3, r2, #2
	add r2, r3, #2
	add r1, r1, r2
	ldrb r2, [r1]
	add r1, r2, #0
	mov r2, #15
	and r1, r1, r2
	ldrb r2, [r0, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
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
	ldr r0, [r7]
	ldrb r1, [r0, #27]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #11
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #27]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #192
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, _0804248C  @ =gUnknown_0813EBB4
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldrb r1, [r0]
	ldr r0, [r7]
	bl sub_08003870
	ldr r0, [r7]
	ldrb r1, [r0, #26]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #26]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrb r2, [r1, #29]
	lsl r3, r2, #24
	lsr r1, r3, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #29]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #29]
_08042450:
	ldr r1, [r7]
	ldr r0, [r7, #8]
	ldrb r2, [r0, #8]
	add r0, r2, #0
	add r2, r1, #0
	add r1, r1, #100
	ldrh r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strh r2, [r1]
	ldr r1, [r7]
	ldr r0, [r7, #8]
	ldrb r2, [r0, #9]
	add r0, r2, #0
	add r2, r1, #0
	add r1, r1, #102
	ldrh r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strh r2, [r1]
	add sp, sp, #12
	pop {r7}
	pop {r0}
	bx r0
_0804248C:
	.4byte gUnknown_0813EBB4
	THUMB_FUNC_END sub_080422D4


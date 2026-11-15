	THUMB_FUNC_START sub_0803F3C4
sub_0803F3C4: @ 0x0803F3C4
	push {r4,r7,lr}
	sub sp, sp, #20
	mov r7, sp
	str r0, [r7]
	add r0, r7, #4
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #41
	ldrb r1, [r2]
	mov r2, #127
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldr r1, [r0, #108]
	ldr r0, [r1, #88]
	str r0, [r7, #8]
	add r0, r7, #0
	add r0, r0, #12
	ldr r1, [r7, #8]
	ldrb r2, [r1, #26]
	lsr r1, r2, #4
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0803F488  @ =gUnknown_08427C2C
	add r1, r7, #0
	add r1, r1, #12
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	str r1, [r7, #16]
	ldr r0, [r7, #8]
	ldrb r1, [r0, #20]
	cmp r1, #2
	beq _0803F410
	b _0803F546
_0803F410:
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldr r2, [r1, #56]
	str r2, [r0, #56]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldrb r2, [r1, #31]
	lsl r3, r2, #24
	lsr r1, r3, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #31]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #31]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #80
	add r2, r0, #0
	add r0, r0, #80
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	lsl r2, r1, #29
	lsr r0, r2, #31
	cmp r0, #0
	beq _0803F48C
	ldr r0, [r7, #8]
	ldr r1, [r7]
	add r2, r7, #4
	ldrb r3, [r2]
	ldr r4, [r7, #16]
	add r2, r3, r4
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r2, r3, #0
	ldrh r3, [r1, #50]
	sub r1, r3, r2
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
	b _0803F4B2
_0803F488:
	.4byte gUnknown_08427C2C
_0803F48C:
	ldr r0, [r7, #8]
	ldr r1, [r7]
	add r2, r7, #4
	ldrb r3, [r2]
	ldr r4, [r7, #16]
	add r2, r3, r4
	mov r3, #0
	ldrsb r3, [r2, r3]
	add r2, r3, #0
	ldrh r3, [r1, #50]
	add r1, r2, r3
	ldrh r2, [r0, #50]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #50]
_0803F4B2:
	ldr r0, [r7, #8]
	ldr r1, [r7, #8]
	add r2, r7, #4
	ldrb r3, [r2]
	ldr r4, [r7, #16]
	add r2, r3, r4
	add r3, r2, #1
	mov r4, #0
	ldrsb r4, [r3, r4]
	add r2, r4, #0
	ldrh r3, [r1, #58]
	add r1, r2, r3
	ldrh r2, [r0, #58]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #58]
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldr r2, [r1, #52]
	add r1, r2, #1
	str r1, [r0, #52]
	ldr r0, _0803F524  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #5]
	cmp r1, #4
	bne _0803F528
	ldr r0, [r7, #8]
	ldr r1, [r7]
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
	ldr r1, [r7, #8]
	add r0, r1, #0
	bl sub_0803D010
	b _0803F546
	.byte 0x00
	.byte 0x00
_0803F524:
	.4byte gUnknown_03006A30
_0803F528:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #42
	ldrb r0, [r1]
	lsr r1, r0, #1
	add r0, r1, #0
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0803F546
	ldr r0, [r7, #8]
	ldr r1, [r7]
	ldr r2, [r1, #52]
	add r1, r2, #1
	str r1, [r0, #52]
_0803F546:
	add sp, sp, #20
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0803F3C4

	.byte 0x00
	.byte 0x00

	THUMB_FUNC_START sub_0805E780
sub_0805E780: @ 0x0805E780
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldrb r0, [r1, #20]
	cmp r0, #0
	beq _0805E796
	cmp r0, #1
	beq _0805E7F0
	b _0805E862
_0805E796:
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
	ldrb r1, [r0, #29]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #64
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #29]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #94
	ldrb r1, [r0]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #31]
	mov r2, #63
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #64
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #31]
_0805E7F0:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	ldrb r1, [r2, #28]
	lsl r2, r1, #30
	lsr r1, r2, #30
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #28]
	mov r3, #252
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
	ldr r0, [r7]
	ldr r2, [r7]
	ldr r1, [r2, #84]
	ldr r2, [r7]
	ldrb r3, [r2, #11]
	mov r4, #11
	add r2, r3, #0
	mul r2, r4, r2
	add r3, r2, #0
	add r2, r3, #0
	add r2, r2, #10
	ldrh r1, [r1, #50]
	add r1, r1, r2
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
	add r1, r3, #0
	add r1, r1, #16
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	ldr r0, [r7]
	bl sub_0805E8C0
	b _0805E862
_0805E862:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805E780

	.byte 0x00
	.byte 0x00

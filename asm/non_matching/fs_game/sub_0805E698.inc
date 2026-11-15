	THUMB_FUNC_START sub_0805E698
sub_0805E698: @ 0x0805E698
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldrb r0, [r1, #20]
	cmp r0, #0
	beq _0805E6AE
	cmp r0, #1
	beq _0805E706
	b _0805E778
_0805E6AE:
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
	ldr r0, [r7]
	bl sub_0805E86C
_0805E706:
	ldr r0, [r7]
	ldr r1, _0805E76C  @ =gUnknown_08429314
	ldr r2, _0805E770  @ =gUnknown_02016D60
	ldrb r3, [r2, #8]
	add r1, r1, r3
	ldr r2, _0805E774  @ =gUnknown_03006C80
	ldrb r1, [r1]
	ldrb r2, [r2]
	add r1, r1, r2
	add r2, r1, #0
	sub r1, r2, #2
	add r2, r0, #0
	add r0, r0, #33
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	ldrh r3, [r2, #50]
	add r1, r3, #0
	add r1, r1, #28
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
	sub r1, r1, #8
	ldrh r2, [r0, #54]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #54]
	b _0805E778
	.byte 0x00
	.byte 0x00
_0805E76C:
	.4byte gUnknown_08429314
_0805E770:
	.4byte gUnknown_02016D60
_0805E774:
	.4byte gUnknown_03006C80
_0805E778:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805E698


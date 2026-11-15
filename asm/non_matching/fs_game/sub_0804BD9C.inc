	THUMB_FUNC_START sub_0804BD9C
sub_0804BD9C: @ 0x0804BD9C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #112
	ldrh r0, [r1]
	cmp r0, #0
	beq _0804BE08
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #112
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #112
	ldrh r3, [r2]
	sub r1, r3, #1
	add r2, r0, #0
	add r0, r0, #112
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #112
	ldrh r0, [r1]
	cmp r0, #0
	bne _0804BE08
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r2, #128
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_0804BE08:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _0804BE20
	b _0804BF90
_0804BE20:
	ldr r0, [r7]
	ldrb r1, [r0, #30]
	lsl r0, r1, #28
	lsr r1, r0, #28
	sub r0, r1, #7
	ldr r1, [r7]
	ldr r2, [r1, #76]
	ldrb r1, [r2, #10]
	cmp r0, r1
	beq _0804BE36
	b _0804BF90
_0804BE36:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	add r1, r0, #0
	add r1, r1, #124
	add r0, r1, #0
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #135
	bls _0804BE4E
	b _0804BF90
_0804BE4E:
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	add r1, r2, #1
	ldrb r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #24]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #116
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #116
	ldrb r3, [r2]
	add r1, r3, #1
	add r2, r0, #0
	add r0, r0, #116
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #117
	ldr r0, [r7]
	ldrb r1, [r1]
	ldrb r0, [r0, #24]
	cmp r1, r0
	bls _0804BF3C
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #62
	add r2, r0, #0
	add r0, r0, #43
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
	add r1, r0, #0
	add r0, r0, #61
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #240
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	bl sub_0800099C
	ldr r4, [r7]
	ldr r5, [r7]
	ldr r6, _0804BF34  @ =gUnknown_0813F940
	ldr r1, [r7]
	ldrb r2, [r1, #30]
	lsl r1, r2, #28
	lsr r2, r1, #28
	sub r1, r2, #7
	add r2, r1, #0
	lsl r3, r2, #1
	mov r8, r3
	add r8, r8, r1
	ldr r1, _0804BF38  @ =gUnknown_03006C80
	ldrb r2, [r1]
	sub r1, r2, #1
	bl __umodsi3
	mov r2, r8
	add r1, r2, r0
	add r2, r6, r1
	ldrb r0, [r2]
	add r1, r0, #0
	mov r2, #15
	and r1, r1, r2
	ldrb r2, [r5, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r5, #30]
	mov r1, #15
	and r0, r0, r1
	add r1, r0, #0
	lsl r0, r1, #4
	ldrb r1, [r4, #30]
	mov r2, #15
	and r1, r1, r2
	add r2, r1, #0
	add r1, r2, #0
	orr r1, r1, r0
	add r0, r1, #0
	strb r0, [r4, #30]
	b _0804BF8A
	.byte 0x00
	.byte 0x00
_0804BF34:
	.4byte gUnknown_0813F940
_0804BF38:
	.4byte gUnknown_03006C80
_0804BF3C:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	ldrb r2, [r0, #11]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #11]
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #62
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_0804BF8A:
	mov r0, #180
	bl sub_08003DFC
_0804BF90:
	ldr r0, [r7]
	bl sub_0804C088
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804BD9C

	.byte 0x00
	.byte 0x00

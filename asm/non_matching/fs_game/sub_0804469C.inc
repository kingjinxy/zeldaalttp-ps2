	THUMB_FUNC_START sub_0804469C
sub_0804469C: @ 0x0804469C
	push {r4,r7,lr}
	sub sp, sp, #24
	mov r7, sp
	str r0, [r7]
	add r4, r1, #0
	add r1, r2, #0
	add r0, r3, #0
	add r2, r7, #4
	add r3, r4, #0
	strb r3, [r2]
	add r2, r7, #6
	strh r1, [r2]
	add r1, r7, #0
	add r1, r1, #8
	strh r0, [r1]
	add r0, r7, #4
	ldrb r1, [r0]
	cmp r1, #7
	bls _080446C8
	add r0, r7, #4
	mov r1, #7
	strb r1, [r0]
_080446C8:
	add r0, r7, #4
	ldrb r1, [r0]
	lsl r0, r1, #2
	ldr r1, _0804471C  @ =gUnknown_0813ED60
	add r0, r1, r0
	str r0, [r7, #16]
	add r4, r7, #0
	add r4, r4, #21
	bl sub_0800099C
	add r1, r0, #0
	mov r2, #3
	add r0, r1, #0
	and r0, r0, r2
	add r1, r0, #0
	strb r1, [r4]
	add r0, r7, #0
	add r0, r0, #22
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #62
	ldrb r1, [r2]
	mov r2, #16
	eor r1, r1, r2
	add r2, r1, #0
	sub r1, r2, #3
	add r2, r1, #0
	mov r3, #31
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	add r0, r7, #0
	add r0, r0, #20
	mov r1, #0
	strb r1, [r0]
_08044710:
	add r0, r7, #0
	add r0, r0, #20
	ldrb r1, [r0]
	cmp r1, #3
	bls _08044720
	b _080447BE
_0804471C:
	.4byte gUnknown_0813ED60
_08044720:
	add r0, r7, #0
	add r0, r0, #21
	ldrb r1, [r0]
	ldr r2, [r7, #16]
	add r0, r1, r2
	ldrb r1, [r0]
	mov r0, #0
	mov r2, #1
	bl sub_0804C8A8
	str r0, [r7, #12]
	ldr r0, [r7, #12]
	cmp r0, #0
	beq _08044778
	ldr r0, [r7, #12]
	add r1, r7, #0
	add r1, r1, #22
	ldrb r2, [r1]
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7, #12]
	add r0, r7, #6
	mov r2, #0
	ldrsh r3, [r0, r2]
	lsl r2, r3, #16
	add r0, r7, #0
	add r0, r0, #8
	mov r3, #0
	ldrsh r4, [r0, r3]
	lsl r3, r4, #16
	ldr r0, [r7]
	bl sub_0803D4A4
_08044778:
	add r0, r7, #0
	add r0, r0, #21
	add r1, r7, #0
	add r1, r1, #21
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	add r0, r7, #0
	add r0, r0, #22
	add r1, r7, #0
	add r1, r1, #22
	ldrb r2, [r1]
	add r1, r2, #2
	add r2, r1, #0
	mov r3, #31
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	add r1, r7, #0
	add r1, r1, #20
	add r0, r7, #0
	add r0, r0, #20
	add r1, r7, #0
	add r1, r1, #20
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08044710
_080447BE:
	add sp, sp, #24
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804469C

	.byte 0x00
	.byte 0x00

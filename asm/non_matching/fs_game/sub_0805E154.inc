	THUMB_FUNC_START sub_0805E154
sub_0805E154: @ 0x0805E154
	push {r4,r5,r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	bl sub_0800099C
	mov r1, #3
	and r0, r0, r1
	add r1, r0, #0
	lsl r0, r1, #3
	ldr r1, _0805E200  @ =gUnknown_084292A8
	add r0, r1, r0
	str r0, [r7, #4]
	ldr r0, [r7]
	ldrb r2, [r0, #11]
	mov r0, #70
	mov r1, #11
	bl sub_0804C8A8
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	bne _0805E184
	b _0805E2AE
_0805E184:
	ldr r2, [r7, #8]
	add r0, r7, #4
	ldr r1, [r0]
	ldrh r3, [r2, #50]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	ldrh r3, [r1]
	orr r4, r4, r3
	add r3, r4, #0
	strh r3, [r2, #50]
	add r1, r1, #2
	str r1, [r0]
	ldr r2, [r7, #8]
	add r0, r7, #4
	ldr r1, [r0]
	ldrh r3, [r2, #54]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	ldrh r3, [r1]
	orr r4, r4, r3
	add r3, r4, #0
	strh r3, [r2, #54]
	add r1, r1, #2
	str r1, [r0]
	ldr r3, [r7, #8]
	add r0, r7, #4
	ldr r1, [r0]
	ldrh r4, [r1]
	add r2, r4, #0
	add r4, r3, #0
	add r3, r3, #43
	ldrb r4, [r3]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	orr r2, r2, r5
	add r4, r2, #0
	strb r4, [r3]
	add r1, r1, #2
	str r1, [r0]
	ldr r2, [r7, #8]
	add r0, r7, #4
	ldr r1, [r0]
	ldrh r3, [r1]
	str r3, [r2, #12]
	add r1, r1, #2
	str r1, [r0]
	bl sub_0800099C
	mov r1, #15
	and r0, r0, r1
	cmp r0, #1
	beq _0805E226
	cmp r0, #1
	bcc _0805E204
	cmp r0, #2
	beq _0805E248
	cmp r0, #3
	beq _0805E26A
	b _0805E28C
_0805E200:
	.4byte gUnknown_084292A8
_0805E204:
	ldr r0, [r7, #8]
	ldr r2, [r7, #8]
	add r1, r2, #0
	add r2, r2, #43
	ldrb r3, [r2]
	add r1, r3, #1
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
	b _0805E28C
_0805E226:
	ldr r0, [r7, #8]
	ldr r2, [r7, #8]
	add r1, r2, #0
	add r2, r2, #43
	ldrb r3, [r2]
	sub r1, r3, #1
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
	b _0805E28C
_0805E248:
	ldr r0, [r7, #8]
	ldr r2, [r7, #8]
	add r1, r2, #0
	add r2, r2, #43
	ldrb r3, [r2]
	add r1, r3, #2
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
	b _0805E28C
_0805E26A:
	ldr r0, [r7, #8]
	ldr r2, [r7, #8]
	add r1, r2, #0
	add r2, r2, #43
	ldrb r3, [r2]
	sub r1, r3, #2
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
	b _0805E28C
_0805E28C:
	ldr r0, [r7, #8]
	ldr r2, [r7, #8]
	add r1, r2, #0
	add r2, r2, #43
	ldrb r1, [r2]
	mov r2, #31
	and r1, r1, r2
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
_0805E2AE:
	add sp, sp, #12
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0805E154

	.byte 0x00
	.byte 0x00

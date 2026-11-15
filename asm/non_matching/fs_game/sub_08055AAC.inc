	THUMB_FUNC_START sub_08055AAC
sub_08055AAC: @ 0x08055AAC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
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
	ldr r1, _08055B20  @ =gUnknown_08428DC8
	str r1, [r0, #72]
	ldr r0, [r7]
	mov r1, #224
	lsl r1, r1, #9
	str r1, [r0, #16]
	bl sub_0800099C
	add r1, r0, #0
	ldr r0, [r7]
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
	ldr r0, [r7]
	mov r1, #128
	lsl r1, r1, #1
	str r1, [r0, #12]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #10
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08055B20:
	.4byte gUnknown_08428DC8
	THUMB_FUNC_END sub_08055AAC


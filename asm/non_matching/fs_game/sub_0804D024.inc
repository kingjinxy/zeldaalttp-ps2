	THUMB_FUNC_START sub_0804D024
sub_0804D024: @ 0x0804D024
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #4]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #4]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #16]
	add r1, r2, #2
	ldrh r2, [r1]
	add r1, r2, #0
	ldrb r2, [r0, #5]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #5]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #12]
	ldr r1, [r7]
	ldr r3, [r1, #16]
	add r1, r3, #4
	ldrh r3, [r1]
	add r1, r3, #0
	add r3, r2, #0
	add r2, r2, #43
	ldrb r3, [r2]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	add r3, r4, #0
	orr r3, r3, r1
	add r4, r3, #0
	strb r4, [r2]
	mov r2, #0
	bic r1, r1, r2
	ldrb r2, [r0, #6]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #6]
	ldr r1, [r7]
	ldr r0, [r1, #12]
	ldr r1, [r7]
	ldr r2, [r1, #16]
	add r1, r2, #6
	ldrh r2, [r1]
	str r2, [r0, #12]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #16]
	add r1, r2, #0
	add r1, r1, #8
	str r1, [r0, #16]
	mov r0, #0
	b _0804D0B0
_0804D0B0:
	add sp, sp, #4
	pop {r4,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0804D024


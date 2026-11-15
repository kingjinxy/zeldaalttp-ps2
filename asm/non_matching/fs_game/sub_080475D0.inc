	THUMB_FUNC_START sub_080475D0
sub_080475D0: @ 0x080475D0
	push {r4-r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	bl sub_0800099C
	add r2, r0, #0
	ldr r0, [r7]
	ldr r1, _08047674  @ =gUnknown_0813F1F4
	mov r3, #3
	and r2, r2, r3
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, [r1]
	str r2, [r0, #116]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r7]
	ldr r4, [r2, #116]
	add r2, r4, #2
	str r2, [r1, #116]
	add r1, r0, #0
	add r0, r0, #120
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldrh r1, [r4]
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r7]
	ldr r5, [r2, #116]
	add r2, r5, #2
	str r2, [r1, #116]
	add r1, r0, #0
	add r0, r0, #122
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldrh r1, [r5]
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r7]
	ldr r6, [r2, #116]
	add r2, r6, #2
	str r2, [r1, #116]
	ldrh r2, [r6]
	add r1, r2, #0
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #126
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08047674:
	.4byte gUnknown_0813F1F4
	THUMB_FUNC_END sub_080475D0


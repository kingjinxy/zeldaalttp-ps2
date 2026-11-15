	THUMB_FUNC_START sub_080553BC
sub_080553BC: @ 0x080553BC
	push {r4,r5,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _08055430  @ =gUnknown_03000948
	ldrh r1, [r0]
	mov r2, #7
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _08055426
	ldr r0, [r7]
	ldr r1, _08055434  @ =gUnknown_08428D8C
	ldr r3, [r7]
	ldr r2, [r7]
	ldr r3, [r7]
	ldrb r4, [r3, #23]
	add r3, r4, #1
	ldrb r4, [r2, #23]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	add r4, r3, #0
	orr r5, r5, r4
	add r4, r5, #0
	strb r4, [r2, #23]
	add r2, r3, #0
	mov r3, #0
	bic r2, r2, r3
	add r3, r2, #0
	mov r4, #7
	add r2, r3, #0
	and r2, r2, r4
	add r4, r2, #0
	lsl r3, r4, #24
	lsr r2, r3, #24
	add r1, r1, r2
	mov r3, #0
	ldrsb r3, [r1, r3]
	add r2, r3, #0
	add r1, r2, #0
	sub r1, r1, #8
	ldrh r2, [r0, #58]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #58]
_08055426:
	add sp, sp, #4
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08055430:
	.4byte gUnknown_03000948
_08055434:
	.4byte gUnknown_08428D8C
	THUMB_FUNC_END sub_080553BC


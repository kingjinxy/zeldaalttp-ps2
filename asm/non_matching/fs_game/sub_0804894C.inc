	THUMB_FUNC_START sub_0804894C
sub_0804894C: @ 0x0804894C
	push {r4,r5,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, _080489AC  @ =gUnknown_084287B7
	ldr r3, [r7]
	ldr r4, [r3, #88]
	add r3, r4, #0
	add r4, r4, #115
	ldrb r3, [r4]
	ldr r4, [r7]
	ldrb r5, [r4, #10]
	add r3, r3, r5
	sub r4, r3, #1
	add r3, r2, r4
	ldrb r2, [r3]
	add r4, r2, #0
	lsl r3, r4, #4
	ldrb r4, [r1, #30]
	mov r5, #15
	and r4, r4, r5
	add r5, r4, #0
	add r4, r5, #0
	orr r4, r4, r3
	add r3, r4, #0
	strb r3, [r1, #30]
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
	add sp, sp, #4
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080489AC:
	.4byte gUnknown_084287B7
	THUMB_FUNC_END sub_0804894C


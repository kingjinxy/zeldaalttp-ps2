	THUMB_FUNC_START sub_08047FFC
sub_08047FFC: @ 0x08047FFC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r0, #84]
	add r0, r1, #0
	add r1, r1, #112
	ldrb r0, [r1]
	mov r1, #3
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _0804806C
	ldr r0, _08048054  @ =gUnknown_08137B10
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	add r1, r2, #2
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, [r7]
	ldr r2, [r1, #84]
	add r1, r2, #0
	add r2, r2, #112
	ldrb r1, [r2]
	ldr r2, [r0]
	add r0, r1, #0
	and r0, r0, r2
	cmp r0, #0
	beq _08048058
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #10
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	b _0804806C
_08048054:
	.4byte gUnknown_08137B10
_08048058:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #13
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
_0804806C:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08047FFC


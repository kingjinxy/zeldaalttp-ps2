	THUMB_FUNC_START sub_08035C34
sub_08035C34: @ 0x08035C34
	push {lr}
	add r2, r0, #0
	ldr r3, _08035C80  @ =gUnknown_0201F000
	ldr r0, [r3]
	mov r1, #4
	and r0, r0, r1
	cmp r0, #0
	beq _08035C8C
	ldrb r0, [r2, #23]
	cmp r0, #0
	bne _08035C88
	mov r0, #11
	strb r0, [r2, #20]
	mov r0, #120
	strb r0, [r2, #23]
	ldrb r1, [r2, #29]
	mov r0, #63
	and r0, r0, r1
	mov r1, #64
	orr r0, r0, r1
	strb r0, [r2, #29]
	ldrb r1, [r2, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r2, #28]
	mov r0, #8
	str r0, [r3]
	ldr r0, _08035C84  @ =0x0000020A
	bl play_sound
	mov r0, #2
	mov r1, #4
	bl sub_0800C0B0
	b _08035C8C
_08035C80:
	.4byte gUnknown_0201F000
_08035C84:
	.4byte 0x0000020A
_08035C88:
	sub r0, r0, #1
	strb r0, [r2, #23]
_08035C8C:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08035C34


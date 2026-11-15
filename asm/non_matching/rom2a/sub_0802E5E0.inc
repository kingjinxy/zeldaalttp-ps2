	THUMB_FUNC_START sub_0802E5E0
sub_0802E5E0: @ 0x0802E5E0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	mov r0, #16
	bl sub_0800BD14
	add r5, r0, #0
	ldr r0, _0802E650  @ =gUnknown_02016D60
	str r5, [r0, #8]
	cmp r5, #0
	bne _0802E5F8
	b _0802E744
_0802E5F8:
	mov r3, #0
	ldr r0, _0802E654  @ =gUnknown_03006C80
	mov r8, r0
	ldrb r0, [r0]
	cmp r3, r0
	bge _0802E62C
	mov r7, #0
	mov r6, r8
	mov r4, r8
	add r4, r4, #12
_0802E60C:
	lsl r1, r3, #24
	asr r1, r1, #24
	lsl r0, r1, #2
	add r2, r0, r5
	strb r3, [r2]
	strb r7, [r2, #1]
	add r0, r0, r4
	ldr r0, [r0]
	strh r0, [r2, #2]
	add r1, r1, #1
	lsl r1, r1, #24
	lsr r3, r1, #24
	asr r1, r1, #24
	ldrb r2, [r6]
	cmp r1, r2
	blt _0802E60C
_0802E62C:
	mov r3, #1
	mov r4, r8
	ldrb r4, [r4]
	cmp r3, r4
	bge _0802E696
_0802E636:
	lsl r2, r3, #24
	asr r1, r2, #24
	lsl r0, r1, #2
	add r0, r0, r5
	ldr r6, [r0]
	sub r1, r1, #1
	lsl r1, r1, #24
	lsr r3, r1, #24
	lsl r4, r3, #24
	asr r0, r4, #24
	mov r12, r2
	b _0802E66C
	.byte 0x00
	.byte 0x00
_0802E650:
	.4byte gUnknown_02016D60
_0802E654:
	.4byte gUnknown_03006C80
_0802E658:
	asr r0, r4, #24
	lsl r1, r0, #2
	add r1, r1, r5
	ldr r2, [r1]
	str r2, [r1, #4]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	lsl r4, r3, #24
	asr r0, r4, #24
_0802E66C:
	cmp r0, #0
	blt _0802E67C
	lsl r0, r0, #2
	add r0, r0, r5
	ldrh r1, [r0, #2]
	lsr r0, r6, #16
	cmp r1, r0
	bcc _0802E658
_0802E67C:
	lsl r0, r3, #24
	asr r0, r0, #22
	add r0, r0, r5
	str r6, [r0, #4]
	mov r0, #128
	lsl r0, r0, #17
	add r0, r0, r12
	lsr r3, r0, #24
	asr r0, r0, #24
	mov r1, r8
	ldrb r1, [r1]
	cmp r0, r1
	blt _0802E636
_0802E696:
	mov r2, #1
	mov r3, #1
	mov r4, r8
	ldrb r4, [r4]
	cmp r3, r4
	bge _0802E6D4
_0802E6A2:
	lsl r0, r3, #24
	asr r1, r0, #22
	add r3, r1, r5
	sub r4, r3, #4
	ldrh r1, [r3, #2]
	mov r12, r0
	ldrh r0, [r4, #2]
	cmp r1, r0
	bne _0802E6BA
	ldrb r0, [r4, #1]
	strb r0, [r3, #1]
	b _0802E6BC
_0802E6BA:
	strb r2, [r3, #1]
_0802E6BC:
	mov r1, #128
	lsl r1, r1, #17
	add r1, r1, r12
	add r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
	lsr r3, r1, #24
	asr r1, r1, #24
	mov r4, r8
	ldrb r4, [r4]
	cmp r1, r4
	blt _0802E6A2
_0802E6D4:
	mov r3, #1
	mov r0, r8
	ldrb r0, [r0]
	cmp r3, r0
	bge _0802E744
_0802E6DE:
	lsl r2, r3, #24
	asr r1, r2, #24
	lsl r0, r1, #2
	add r0, r0, r5
	ldr r6, [r0]
	sub r1, r1, #1
	lsl r1, r1, #24
	lsr r3, r1, #24
	lsl r4, r3, #24
	asr r0, r4, #24
	mov r12, r2
	cmp r0, #0
	blt _0802E72A
	lsl r0, r0, #2
	add r0, r0, r5
	ldrb r1, [r0]
	lsl r0, r6, #24
	lsr r0, r0, #24
	cmp r1, r0
	bls _0802E72A
	add r7, r0, #0
_0802E708:
	asr r0, r4, #24
	lsl r1, r0, #2
	add r1, r1, r5
	ldr r2, [r1]
	str r2, [r1, #4]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	lsl r4, r3, #24
	asr r0, r4, #24
	cmp r0, #0
	blt _0802E72A
	lsl r0, r0, #2
	add r0, r0, r5
	ldrb r0, [r0]
	cmp r0, r7
	bhi _0802E708
_0802E72A:
	lsl r0, r3, #24
	asr r0, r0, #22
	add r0, r0, r5
	str r6, [r0, #4]
	mov r0, #128
	lsl r0, r0, #17
	add r0, r0, r12
	lsr r3, r0, #24
	asr r0, r0, #24
	mov r1, r8
	ldrb r1, [r1]
	cmp r0, r1
	blt _0802E6DE
_0802E744:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0802E5E0

	.byte 0x00
	.byte 0x00

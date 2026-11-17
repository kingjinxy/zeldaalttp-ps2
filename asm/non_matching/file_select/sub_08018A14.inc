	THUMB_FUNC_START sub_08018A14
sub_08018A14: @ 0x08018A14
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	add r6, r0, #0
	add r0, r0, #43
	ldrb r0, [r0]
	lsr r0, r0, #1
	add r7, r0, #0
	ldr r0, _08018A84  @ =gUnknown_08139904
	mov r8, r0
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r6, #50]
	add r0, r0, r1
	lsl r0, r0, #16
	add r1, r7, #1
	add r1, r1, r8
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r2, [r6, #54]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r5, r0, #16
	asr r0, r0, #16
	lsr r4, r1, #16
	asr r1, r1, #16
	mov r3, #80
	add r3, r3, r6
	mov r9, r3
	ldrh r2, [r3]
	bl sub_080093AC
	lsl r1, r0, #24
	lsr r0, r1, #24
	mov r3, #8
	and r4, r4, r3
	cmp r4, #0
	bne _08018A6E
	lsr r0, r1, #26
_08018A6E:
	and r5, r5, r3
	cmp r5, #0
	bne _08018A76
	lsr r0, r0, #1
_08018A76:
	mov r1, #1
	mov r10, r1
	and r0, r0, r1
	cmp r0, #0
	beq _08018A88
	mov r0, #1
	b _08018AD4
_08018A84:
	.4byte gUnknown_08139904
_08018A88:
	add r0, r7, #2
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r2, [r6, #50]
	add r0, r0, r2
	lsl r0, r0, #16
	add r1, r7, #3
	add r1, r1, r8
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldrh r6, [r6, #54]
	add r1, r1, r6
	lsl r1, r1, #16
	lsr r5, r0, #16
	asr r0, r0, #16
	lsr r4, r1, #16
	asr r1, r1, #16
	mov r6, r9
	ldrh r2, [r6]
	str r3, [sp]
	bl sub_080093AC
	lsl r1, r0, #24
	lsr r0, r1, #24
	ldr r3, [sp]
	and r4, r4, r3
	cmp r4, #0
	bne _08018AC8
	lsr r0, r1, #26
_08018AC8:
	and r5, r5, r3
	cmp r5, #0
	bne _08018AD0
	lsr r0, r0, #1
_08018AD0:
	mov r1, r10
	and r0, r0, r1
_08018AD4:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08018A14


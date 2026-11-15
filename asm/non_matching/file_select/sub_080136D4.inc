	THUMB_FUNC_START sub_080136D4
sub_080136D4: @ 0x080136D4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #16
	lsr r4, r0, #16
	lsl r1, r1, #16
	lsr r5, r1, #16
	lsl r2, r2, #16
	lsr r7, r2, #16
	add r0, r5, #0
	mul r0, r7, r0
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r8, r0
	add r0, r0, #1
	lsl r0, r0, #17
	lsr r0, r0, #16
	bl sub_0800BD14
	add r6, r0, #0
	cmp r6, #0
	bne _08013704
	mov r0, #0
	b _0801374A
_08013704:
	mov r0, r8
	strh r0, [r6]
	add r2, r6, #2
	mov r0, #0
	mov r12, r2
	cmp r0, r7
	bcs _08013740
_08013712:
	mov r1, #0
	add r3, r0, #1
	cmp r1, r5
	bcs _0801372E
_0801371A:
	strh r4, [r2]
	add r2, r2, #2
	add r0, r4, #1
	lsl r0, r0, #16
	lsr r4, r0, #16
	add r0, r1, #1
	lsl r0, r0, #16
	lsr r1, r0, #16
	cmp r1, r5
	bcc _0801371A
_0801372E:
	add r0, r4, #0
	add r0, r0, #64
	sub r0, r0, r5
	lsl r0, r0, #16
	lsr r4, r0, #16
	lsl r0, r3, #16
	lsr r0, r0, #16
	cmp r0, r7
	bcc _08013712
_08013740:
	mov r0, r12
	mov r1, r8
	bl sub_08013490
	add r0, r6, #0
_0801374A:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080136D4


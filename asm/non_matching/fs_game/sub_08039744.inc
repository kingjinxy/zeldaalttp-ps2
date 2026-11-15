	THUMB_FUNC_START sub_08039744
sub_08039744: @ 0x08039744
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r2, r0, #0
	add r0, r1, #0
	add r1, r7, #0
	strb r2, [r1]
	add r1, r7, #1
	strb r0, [r1]
	add r0, r7, #2
	mov r1, #0
	strb r1, [r0]
	add r0, r7, #0
	ldrb r1, [r0]
	mov r0, #3
	and r1, r1, r0
	add r0, r7, #1
	lsl r2, r1, #24
	lsr r1, r2, #24
	ldrb r0, [r0]
	cmp r1, r0
	bcc _08039780
	add r0, r7, #2
	add r1, r7, #2
	ldrb r2, [r1]
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_08039780:
	add r0, r7, #0
	add r1, r7, #0
	ldrb r2, [r1]
	lsr r1, r2, #2
	add r2, r1, #0
	strb r2, [r0]
	add r0, r7, #0
	ldrb r1, [r0]
	mov r0, #3
	and r1, r1, r0
	add r0, r7, #1
	lsl r2, r1, #24
	lsr r1, r2, #24
	ldrb r0, [r0]
	cmp r1, r0
	bcc _080397B0
	add r0, r7, #2
	add r1, r7, #2
	ldrb r2, [r1]
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_080397B0:
	add r0, r7, #0
	add r1, r7, #0
	ldrb r2, [r1]
	lsr r1, r2, #2
	add r2, r1, #0
	strb r2, [r0]
	add r0, r7, #0
	ldrb r1, [r0]
	mov r0, #3
	and r1, r1, r0
	add r0, r7, #1
	lsl r2, r1, #24
	lsr r1, r2, #24
	ldrb r0, [r0]
	cmp r1, r0
	bcc _080397E0
	add r0, r7, #2
	add r1, r7, #2
	ldrb r2, [r1]
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_080397E0:
	add r0, r7, #2
	ldrb r1, [r0]
	add r0, r1, #0
	b _080397E8
_080397E8:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08039744


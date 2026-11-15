	THUMB_FUNC_START sub_08043EE0
sub_08043EE0: @ 0x08043EE0
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r1, r7, #0
	strb r0, [r1]
	add r0, r7, #0
	ldrb r1, [r0]
	mov r2, #7
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #4
	beq _08043F14
	add r0, r7, #0
	ldrb r1, [r0]
	add r0, r1, #4
	mov r1, #31
	and r0, r0, r1
	asr r1, r0, #3
	add r2, r1, #0
	lsl r0, r2, #24
	lsr r1, r0, #24
	add r0, r1, #0
	b _08043F18
_08043F14:
	mov r0, #255
	b _08043F18
_08043F18:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08043EE0


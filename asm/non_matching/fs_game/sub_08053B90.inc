	THUMB_FUNC_START sub_08053B90
sub_08053B90: @ 0x08053B90
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	add r0, r2, #0
	add r2, r7, #4
	strb r1, [r2]
	add r1, r7, #5
	strb r0, [r1]
	add r0, r7, #6
	add r1, r7, #4
	ldrb r2, [r1]
	strb r2, [r0]
_08053BAA:
	add r1, r7, #6
	ldrb r0, [r1]
	add r2, r7, #4
	ldrb r1, [r2]
	add r2, r7, #5
	ldrb r3, [r2]
	add r1, r1, r3
	cmp r0, r1
	blt _08053BBE
	b _08053BE4
_08053BBE:
	add r0, r7, #6
	ldrb r1, [r0]
	ldr r2, [r7]
	add r0, r2, #0
	lsr r0, r0, r1
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	beq _08053BD4
	mov r0, #1
	b _08053BE8
_08053BD4:
	add r1, r7, #6
	add r0, r7, #6
	add r1, r7, #6
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08053BAA
_08053BE4:
	mov r0, #0
	b _08053BE8
_08053BE8:
	add sp, sp, #8
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08053B90


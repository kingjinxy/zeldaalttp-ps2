	THUMB_FUNC_START sub_08053B24
sub_08053B24: @ 0x08053B24
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	add r0, r2, #0
	add r2, r7, #4
	strb r1, [r2]
	add r1, r7, #5
	strb r0, [r1]
	add r0, r7, #7
	mov r1, #1
	strb r1, [r0]
	add r0, r7, #6
	add r1, r7, #4
	ldrb r2, [r1]
	strb r2, [r0]
_08053B44:
	add r1, r7, #6
	ldrb r0, [r1]
	add r2, r7, #4
	ldrb r1, [r2]
	add r2, r7, #5
	ldrb r3, [r2]
	add r1, r1, r3
	cmp r0, r1
	blt _08053B58
	b _08053B80
_08053B58:
	add r0, r7, #6
	ldrb r1, [r0]
	ldr r2, [r7]
	add r0, r2, #0
	lsr r0, r0, r1
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	bne _08053B70
	add r0, r7, #7
	mov r1, #0
	strb r1, [r0]
_08053B70:
	add r1, r7, #6
	add r0, r7, #6
	add r1, r7, #6
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08053B44
_08053B80:
	add r0, r7, #7
	ldrb r1, [r0]
	add r0, r1, #0
	b _08053B88
_08053B88:
	add sp, sp, #8
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08053B24


	THUMB_FUNC_START sub_0804CB38
sub_0804CB38: @ 0x0804CB38
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	add r0, r2, #0
	add r2, r7, #4
	strb r1, [r2]
	add r1, r7, #5
	strb r0, [r1]
	add r0, r7, #4
	ldrb r1, [r0]
	add r0, r7, #5
	ldrb r2, [r0]
	mov r0, #15
	bl sub_0804C8A8
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	beq _0804CB6E
	ldr r1, [r7, #8]
	ldr r0, [r7]
	bl sub_0803D3D0
	ldr r0, [r7, #8]
	ldr r1, [r7]
	str r1, [r0, #84]
_0804CB6E:
	ldr r1, [r7, #8]
	add r0, r1, #0
	b _0804CB74
_0804CB74:
	add sp, sp, #12
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0804CB38


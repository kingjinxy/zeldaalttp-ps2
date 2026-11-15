	THUMB_FUNC_START sub_08052274
sub_08052274: @ 0x08052274
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #0
	bne _0805228A
	ldr r0, [r7]
	bl sub_08052160
_0805228A:
	ldr r0, [r7]
	mov r1, #12
	mov r2, #1
	bl sub_080521A4
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08052274


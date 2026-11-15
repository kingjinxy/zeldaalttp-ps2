	THUMB_FUNC_START sub_080522EC
sub_080522EC: @ 0x080522EC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #0
	bne _08052302
	ldr r0, [r7]
	bl sub_08052160
_08052302:
	mov r1, #6
	neg r1, r1
	mov r2, #250
	lsl r2, r2, #2
	ldr r0, [r7]
	bl sub_080521A4
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080522EC


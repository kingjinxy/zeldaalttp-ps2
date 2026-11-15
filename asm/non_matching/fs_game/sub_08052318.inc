	THUMB_FUNC_START sub_08052318
sub_08052318: @ 0x08052318
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #0
	bne _0805232E
	ldr r0, [r7]
	bl sub_08052160
_0805232E:
	mov r1, #12
	neg r1, r1
	ldr r2, _08052344  @ =0x00002710
	ldr r0, [r7]
	bl sub_080521A4
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08052344:
	.4byte 0x00002710
	THUMB_FUNC_END sub_08052318


	THUMB_FUNC_START sub_0804D0B8
sub_0804D0B8: @ 0x0804D0B8
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #2]
	cmp r1, #0
	bne _0804D0D2
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #16]
	add r1, r2, #2
	str r1, [r0, #16]
_0804D0D2:
	mov r0, #0
	b _0804D0D6
_0804D0D6:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0804D0B8

	.byte 0x00
	.byte 0x00

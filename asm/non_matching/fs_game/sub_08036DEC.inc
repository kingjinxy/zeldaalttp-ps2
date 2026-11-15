	THUMB_FUNC_START sub_08036DEC
sub_08036DEC: @ 0x08036DEC
	push {r7,lr}
	sub sp, sp, #16
	mov r7, sp
	str r1, [r7, #4]
	str r2, [r7, #8]
	add r1, r7, #0
	strb r0, [r1]
	add r0, r7, #0
	ldrb r1, [r0]
	add r0, r1, #0
	lsl r1, r0, #3
	ldr r0, _08036E20  @ =gUnknown_03006CA8
	add r1, r0, r1
	str r1, [r7, #12]
	ldr r0, [r7, #12]
	ldr r1, [r7, #4]
	str r1, [r0]
	ldr r1, [r7, #12]
	add r0, r1, #4
	ldr r1, [r7, #8]
	str r1, [r0]
	add sp, sp, #16
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08036E20:
	.4byte gUnknown_03006CA8
	THUMB_FUNC_END sub_08036DEC


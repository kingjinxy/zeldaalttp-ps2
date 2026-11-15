	THUMB_FUNC_START sub_08040D60
sub_08040D60: @ 0x08040D60
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	mov r1, #0
	str r1, [r0, #104]
	ldr r0, _08040D8C  @ =gUnknown_08428728
	ldr r1, [r7]
	ldrb r2, [r1, #21]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08040D8C:
	.4byte gUnknown_08428728
	THUMB_FUNC_END sub_08040D60


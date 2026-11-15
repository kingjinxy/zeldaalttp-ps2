	THUMB_FUNC_START sub_0805FD70
sub_0805FD70: @ 0x0805FD70
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0805FD94  @ =gUnknown_08141828
	ldr r1, [r7]
	ldrb r2, [r1, #20]
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
_0805FD94:
	.4byte gUnknown_08141828
	THUMB_FUNC_END sub_0805FD70


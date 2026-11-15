	THUMB_FUNC_START sub_0805B648
sub_0805B648: @ 0x0805B648
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl sub_0803DB4C
	ldr r0, _0805B674  @ =gUnknown_08140F50
	ldr r1, [r7]
	ldrb r2, [r1, #21]
	sub r1, r2, #5
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_0805B674:
	.4byte gUnknown_08140F50
	THUMB_FUNC_END sub_0805B648


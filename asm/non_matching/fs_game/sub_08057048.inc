	THUMB_FUNC_START sub_08057048
sub_08057048: @ 0x08057048
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0805706C  @ =gUnknown_08140C28
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
_0805706C:
	.4byte gUnknown_08140C28
	THUMB_FUNC_END sub_08057048


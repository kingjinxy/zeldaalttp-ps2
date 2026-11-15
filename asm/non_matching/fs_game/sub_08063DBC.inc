	THUMB_FUNC_START sub_08063DBC
sub_08063DBC: @ 0x08063DBC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl sub_08063DF0
	ldr r0, _08063DEC  @ =gUnknown_084293E0
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
	ldr r0, [r7]
	bl sub_08063E88
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08063DEC:
	.4byte gUnknown_084293E0
	THUMB_FUNC_END sub_08063DBC


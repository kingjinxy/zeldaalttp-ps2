	THUMB_FUNC_START sub_08065250
sub_08065250: @ 0x08065250
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _08065278  @ =gUnknown_081421AC
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
	bl sub_0803DF84
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_08065278:
	.4byte gUnknown_081421AC
	THUMB_FUNC_END sub_08065250


	THUMB_FUNC_START sub_08042298
sub_08042298: @ 0x08042298
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _080422CC  @ =gUnknown_03000C00
	ldrb r1, [r0]
	cmp r1, #0
	bne _080422BC
	ldr r0, _080422D0  @ =gUnknown_0813EB9C
	ldr r1, [r7]
	ldrb r2, [r1, #21]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
_080422BC:
	ldr r0, [r7]
	bl sub_08003688
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080422CC:
	.4byte gUnknown_03000C00
_080422D0:
	.4byte gUnknown_0813EB9C
	THUMB_FUNC_END sub_08042298


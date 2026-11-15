	THUMB_FUNC_START sub_08041748
sub_08041748: @ 0x08041748
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0804177C  @ =gUnknown_03000C00
	ldrb r1, [r0]
	cmp r1, #0
	bne _0804176C
	ldr r0, _08041780  @ =gUnknown_0813EB48
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
_0804176C:
	ldr r0, [r7]
	bl sub_08003688
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0804177C:
	.4byte gUnknown_03000C00
_08041780:
	.4byte gUnknown_0813EB48
	THUMB_FUNC_END sub_08041748


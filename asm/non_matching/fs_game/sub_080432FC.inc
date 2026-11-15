	THUMB_FUNC_START sub_080432FC
sub_080432FC: @ 0x080432FC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _08043330  @ =gUnknown_03000C00
	ldrb r1, [r0]
	cmp r1, #0
	bne _08043320
	ldr r0, _08043334  @ =gUnknown_0813EC20
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
_08043320:
	ldr r0, [r7]
	bl sub_08003688
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08043330:
	.4byte gUnknown_03000C00
_08043334:
	.4byte gUnknown_0813EC20
	THUMB_FUNC_END sub_080432FC


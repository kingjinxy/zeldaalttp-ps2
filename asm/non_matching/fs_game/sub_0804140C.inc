	THUMB_FUNC_START sub_0804140C
sub_0804140C: @ 0x0804140C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _08041440  @ =gUnknown_03000C00
	ldrb r1, [r0]
	cmp r1, #0
	bne _08041430
	ldr r0, _08041444  @ =gUnknown_0842874C
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
_08041430:
	ldr r0, [r7]
	bl sub_08003688
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08041440:
	.4byte gUnknown_03000C00
_08041444:
	.4byte gUnknown_0842874C
	THUMB_FUNC_END sub_0804140C


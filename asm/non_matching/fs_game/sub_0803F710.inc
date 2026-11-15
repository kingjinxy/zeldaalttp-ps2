	THUMB_FUNC_START sub_0803F710
sub_0803F710: @ 0x0803F710
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0803F744  @ =gUnknown_03000C00
	ldrb r1, [r0]
	cmp r1, #0
	bne _0803F734
	ldr r0, _0803F748  @ =gUnknown_0813E8A8
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
_0803F734:
	ldr r0, [r7]
	bl sub_08003688
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0803F744:
	.4byte gUnknown_03000C00
_0803F748:
	.4byte gUnknown_0813E8A8
	THUMB_FUNC_END sub_0803F710


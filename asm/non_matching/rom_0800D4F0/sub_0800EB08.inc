	THUMB_FUNC_START sub_0800EB08
sub_0800EB08: @ 0x0800EB08
	push {lr}
	cmp r0, #1
	beq _0800EB20
	cmp r0, #1
	bcc _0800EB18
	cmp r0, #2
	beq _0800EB38
	b _0800EB44
_0800EB18:
	ldr r0, _0800EB1C  @ =0x0600D300
	b _0800EB22
_0800EB1C:
	.4byte 0x0600D300
_0800EB20:
	ldr r0, _0800EB30  @ =0x0600D980
_0800EB22:
	ldr r1, _0800EB34  @ =gUnknown_02002490
	mov r2, #208
	lsl r2, r2, #3
	bl 0x080009F4
	b _0800EB44
	.byte 0x00
	.byte 0x00
_0800EB30:
	.4byte 0x0600D980
_0800EB34:
	.4byte gUnknown_02002490
_0800EB38:
	ldr r0, _0800EB48  @ =0x0600CD40
	ldr r1, _0800EB4C  @ =gUnknown_02002B90
	mov r2, #152
	lsl r2, r2, #3
	bl 0x080009F4
_0800EB44:
	pop {r0}
	bx r0
_0800EB48:
	.4byte 0x0600CD40
_0800EB4C:
	.4byte gUnknown_02002B90
	THUMB_FUNC_END sub_0800EB08


	THUMB_FUNC_START sub_08016288
sub_08016288: @ 0x08016288
	push {r4,lr}
	add r4, r0, #0
	ldr r0, _080162B0  @ =gUnknown_03000C00
	ldrb r0, [r0]
	cmp r0, #0
	bne _080162A4
	ldr r0, _080162B4  @ =gUnknown_08138C10
	ldrb r1, [r4, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r4, #0
	bl _call_via_r1
_080162A4:
	add r0, r4, #0
	bl 0x08003688
	pop {r4}
	pop {r0}
	bx r0
_080162B0:
	.4byte gUnknown_03000C00
_080162B4:
	.4byte gUnknown_08138C10
	THUMB_FUNC_END sub_08016288


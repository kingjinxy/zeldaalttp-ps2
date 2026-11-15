	THUMB_FUNC_START sub_080233D4
sub_080233D4: @ 0x080233D4
	push {lr}
	add r2, r0, #0
	ldrb r0, [r2, #20]
	cmp r0, #0
	beq _080233F0
	ldr r0, [r2, #124]
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	bne _080233F0
	add r0, r2, #0
	bl DeleteThisEntity
	b _08023400
_080233F0:
	ldr r0, _08023404  @ =gUnknown_0813BE30
	ldrb r1, [r2, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r2, #0
	bl _call_via_r1
_08023400:
	pop {r0}
	bx r0
_08023404:
	.4byte gUnknown_0813BE30
	THUMB_FUNC_END sub_080233D4


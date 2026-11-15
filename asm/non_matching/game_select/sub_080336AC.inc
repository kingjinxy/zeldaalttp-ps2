	THUMB_FUNC_START sub_080336AC
sub_080336AC: @ 0x080336AC
	push {lr}
	add r2, r0, #0
	ldrb r0, [r2, #10]
	cmp r0, #0
	bne _080336CC
	ldr r0, _080336C8  @ =gUnknown_0813D8A8
	ldrb r1, [r2, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r2, #0
	bl _call_via_r1
	b _080336DC
_080336C8:
	.4byte gUnknown_0813D8A8
_080336CC:
	ldr r0, _080336E0  @ =gUnknown_0813D8B0
	ldrb r1, [r2, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r2, #0
	bl _call_via_r1
_080336DC:
	pop {r0}
	bx r0
_080336E0:
	.4byte gUnknown_0813D8B0
	THUMB_FUNC_END sub_080336AC


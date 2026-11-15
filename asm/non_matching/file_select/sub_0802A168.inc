	THUMB_FUNC_START sub_0802A168
sub_0802A168: @ 0x0802A168
	push {lr}
	add r2, r0, #0
	add r0, r0, #61
	ldrb r1, [r0]
	cmp r1, #0
	bne _0802A178
	add r0, r0, #39
	strb r1, [r0]
_0802A178:
	ldr r0, _0802A18C  @ =gUnknown_0813D464
	ldrb r1, [r2, #20]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r2, #0
	bl _call_via_r1
	pop {r0}
	bx r0
_0802A18C:
	.4byte gUnknown_0813D464
	THUMB_FUNC_END sub_0802A168


	THUMB_FUNC_START sub_08016FAC
sub_08016FAC: @ 0x08016FAC
	push {lr}
	ldr r2, _08016FC8  @ =gUnknown_081393C0
	ldrb r1, [r0, #10]
	lsl r1, r1, #2
	add r1, r1, r2
	ldrb r2, [r0, #20]
	ldr r1, [r1]
	lsl r2, r2, #2
	add r2, r2, r1
	ldr r1, [r2]
	bl _call_via_r1
	pop {r0}
	bx r0
_08016FC8:
	.4byte gUnknown_081393C0
	THUMB_FUNC_END sub_08016FAC


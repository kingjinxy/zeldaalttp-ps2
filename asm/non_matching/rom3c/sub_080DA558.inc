	THUMB_FUNC_START sub_080DA558
sub_080DA558: @ 0x080DA558
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080DA578  @ =gUnknown_081759F4
	ldr r1, _080DA57C  @ =gRam
	ldr r3, _080DA580  @ =0x00000F62
	add r1, r1, r3
	add r1, r0, r1
	ldrb r1, [r1]
	lsl r1, r1, #2
	add r1, r1, r2
	ldr r1, [r1]
	bl _call_via_r1
	pop {r0}
	bx r0
_080DA578:
	.4byte gUnknown_081759F4
_080DA57C:
	.4byte gRam
_080DA580:
	.4byte 0x00000F62
	THUMB_FUNC_END sub_080DA558


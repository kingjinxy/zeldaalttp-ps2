	THUMB_FUNC_START sub_08015D9C
sub_08015D9C: @ 0x08015D9C
	push {lr}
	ldr r1, _08015DB4  @ =gUnknown_08138C08
	ldr r0, _08015DB8  @ =gUnknown_03000450
	ldrb r0, [r0, #6]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08015DB4:
	.4byte gUnknown_08138C08
_08015DB8:
	.4byte gUnknown_03000450
	THUMB_FUNC_END sub_08015D9C


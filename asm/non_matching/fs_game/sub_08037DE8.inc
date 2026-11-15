	THUMB_FUNC_START sub_08037DE8
sub_08037DE8: @ 0x08037DE8
	push {r4,r7,lr}
	mov r7, sp
	ldr r0, _08037E04  @ =gUnknown_08427BA8
	ldr r1, _08037E08  @ =gUnknown_03005050
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r4, [r0]
	bl _call_via_r4
	pop {r4,r7}
	pop {r0}
	bx r0
_08037E04:
	.4byte gUnknown_08427BA8
_08037E08:
	.4byte gUnknown_03005050
	THUMB_FUNC_END sub_08037DE8


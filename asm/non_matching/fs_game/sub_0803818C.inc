	THUMB_FUNC_START sub_0803818C
sub_0803818C: @ 0x0803818C
	push {r7,lr}
	mov r7, sp
	ldr r1, _080381A4  @ =gUnknown_03005050
	ldr r0, _080381A4  @ =gUnknown_03005050
	ldr r1, _080381A4  @ =gUnknown_03005050
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	pop {r7}
	pop {r0}
	bx r0
_080381A4:
	.4byte gUnknown_03005050
	THUMB_FUNC_END sub_0803818C


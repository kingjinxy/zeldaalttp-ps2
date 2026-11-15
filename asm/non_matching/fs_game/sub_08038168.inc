	THUMB_FUNC_START sub_08038168
sub_08038168: @ 0x08038168
	push {r4,r7,lr}
	mov r7, sp
	ldr r0, _08038184  @ =gUnknown_08427BCC
	ldr r1, _08038188  @ =gUnknown_03005050
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r4, [r0]
	bl _call_via_r4
	pop {r4,r7}
	pop {r0}
	bx r0
_08038184:
	.4byte gUnknown_08427BCC
_08038188:
	.4byte gUnknown_03005050
	THUMB_FUNC_END sub_08038168


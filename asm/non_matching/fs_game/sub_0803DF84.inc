	THUMB_FUNC_START sub_0803DF84
sub_0803DF84: @ 0x0803DF84
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r0, r7, #0
	mov r1, #0
	strb r1, [r0]
_0803DF90:
	add r0, r7, #0
	ldr r1, _0803DFA0  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _0803DFA4
	b _0803DFBE
	.byte 0x00
	.byte 0x00
_0803DFA0:
	.4byte gUnknown_03006C80
_0803DFA4:
	add r0, r7, #0
	ldrb r1, [r0]
	add r0, r1, #0
	bl sub_0803DE94
	add r1, r7, #0
	add r0, r7, #0
	add r1, r7, #0
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _0803DF90
_0803DFBE:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0803DF84

	.byte 0x00
	.byte 0x00

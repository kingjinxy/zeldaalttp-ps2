	THUMB_FUNC_START sub_0812A0B8
sub_0812A0B8: @ 0x0812A0B8
	push {lr}
	ldr r0, _0812A0CC  @ =gUnknown_030000C0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0812A0D4
	ldr r0, _0812A0D0  @ =gUnknown_030000BE
	mov r1, #0
	ldrsh r0, [r0, r1]
	b _0812A0D8
	.byte 0x00
	.byte 0x00
_0812A0CC:
	.4byte gUnknown_030000C0
_0812A0D0:
	.4byte gUnknown_030000BE
_0812A0D4:
	mov r0, #1
	neg r0, r0
_0812A0D8:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0812A0B8


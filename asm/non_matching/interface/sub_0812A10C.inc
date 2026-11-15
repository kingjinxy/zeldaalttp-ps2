	THUMB_FUNC_START sub_0812A10C
sub_0812A10C: @ 0x0812A10C
	push {lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	beq _0812A11E
	cmp r1, #1
	bne _0812A122
	ldr r0, _0812A128  @ =gUnknown_030000C2
	strb r1, [r0]
_0812A11E:
	ldr r0, _0812A12C  @ =gUnknown_030000C1
	strb r1, [r0]
_0812A122:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812A128:
	.4byte gUnknown_030000C2
_0812A12C:
	.4byte gUnknown_030000C1
	THUMB_FUNC_END sub_0812A10C


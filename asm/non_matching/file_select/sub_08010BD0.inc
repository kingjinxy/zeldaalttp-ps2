	THUMB_FUNC_START sub_08010BD0
sub_08010BD0: @ 0x08010BD0
	push {lr}
	bl sub_0801022C
	cmp r0, #0
	bne _08010BEE
	mov r0, #3
	mov r1, #16
	bl sub_0800C0B0
	ldr r1, _08010BF4  @ =gUnknown_03000520
	mov r0, #31
	strb r0, [r1, #7]
	ldr r1, _08010BF8  @ =gSubState
	mov r0, #3
	strb r0, [r1]
_08010BEE:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08010BF4:
	.4byte gUnknown_03000520
_08010BF8:
	.4byte gSubState
	THUMB_FUNC_END sub_08010BD0


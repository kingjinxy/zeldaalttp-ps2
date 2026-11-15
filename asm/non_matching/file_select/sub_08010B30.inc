	THUMB_FUNC_START sub_08010B30
sub_08010B30: @ 0x08010B30
	push {r4,lr}
	ldr r4, _08010B58  @ =gUnknown_03000520
	ldrb r2, [r4]
	cmp r2, #0
	bne _08010B50
	ldr r1, _08010B5C  @ =gUnknown_03005050
	mov r0, #2
	strb r0, [r1]
	ldr r0, _08010B60  @ =gSubState
	strb r2, [r0]
	mov r0, #2
	mov r1, #8
	bl sub_0800C0B0
	mov r0, #31
	strb r0, [r4, #7]
_08010B50:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08010B58:
	.4byte gUnknown_03000520
_08010B5C:
	.4byte gUnknown_03005050
_08010B60:
	.4byte gSubState
	THUMB_FUNC_END sub_08010B30


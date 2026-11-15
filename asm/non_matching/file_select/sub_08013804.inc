	THUMB_FUNC_START sub_08013804
sub_08013804: @ 0x08013804
	push {lr}
	ldr r1, _0801381C  @ =gUnknown_0813811A
	ldr r0, _08013820  @ =gUnknown_03006C80
	ldrb r0, [r0, #1]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	bl load_gfx_group
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801381C:
	.4byte gUnknown_0813811A
_08013820:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_08013804


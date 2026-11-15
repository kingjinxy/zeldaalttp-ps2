	THUMB_FUNC_START sub_080337B0
sub_080337B0: @ 0x080337B0
	push {r4,lr}
	add r4, r0, #0
	bl sub_08034238
	ldr r3, _08033808  @ =gUnknown_0202E110
	add r1, r3, #0
	add r1, r1, #48
	mov r0, #255
	strb r0, [r1]
	add r1, r1, #1
	mov r0, #1
	neg r0, r0
	strb r0, [r1]
	add r0, r3, #0
	add r0, r0, #50
	mov r2, #0
	strb r2, [r0]
	add r1, r1, #3
	mov r0, #1
	neg r0, r0
	strb r0, [r1]
	add r1, r1, #1
	strb r0, [r1]
	add r0, r3, #0
	add r0, r0, #54
	strb r2, [r0]
	strb r2, [r4, #23]
	add r4, r4, #124
	mov r0, #145
	lsl r0, r0, #1
	strh r0, [r4]
	ldr r0, _0803380C  @ =gUnknown_0201F000
	str r2, [r0]
	ldr r1, _08033810  @ =gUnknown_0813D944
	ldr r0, _08033814  @ =gUnknown_03006C80
	ldrb r0, [r0, #1]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	bl load_palette_from_gfx_group
	pop {r4}
	pop {r0}
	bx r0
_08033808:
	.4byte gUnknown_0202E110
_0803380C:
	.4byte gUnknown_0201F000
_08033810:
	.4byte gUnknown_0813D944
_08033814:
	.4byte gUnknown_03006C80
	THUMB_FUNC_END sub_080337B0


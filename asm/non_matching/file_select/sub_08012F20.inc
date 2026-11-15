	THUMB_FUNC_START sub_08012F20
sub_08012F20: @ 0x08012F20
	push {r4,lr}
	ldr r4, _08012F74  @ =gUnknown_0842F0D4
	ldr r1, _08012F78  @ =gUnknown_02016330
	ldr r0, [r4, #20]
	str r0, [r1]
	add r0, r4, #0
	bl sub_080128EC
	ldrb r0, [r4, #1]
	bl sub_08015DD8
	ldrb r0, [r4]
	bl sub_08015F74
	mov r0, #0
	mov r1, #0
	bl sub_08012F84
	cmp r0, #0
	beq _08012F5A
	mov r0, #0
	mov r1, #0
	bl sub_08012F84
	mov r1, #0
	mov r2, #0
	mov r3, #0
	bl sub_08013C8C
_08012F5A:
	bl sub_08016084
	ldr r1, _08012F7C  @ =gUnknown_02000028
	ldr r0, _08012F80  @ =gUnknown_03000204
	ldrb r0, [r0]
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	bl 0x08008ED8
	pop {r4}
	pop {r0}
	bx r0
_08012F74:
	.4byte gUnknown_0842F0D4
_08012F78:
	.4byte gUnknown_02016330
_08012F7C:
	.4byte gUnknown_02000028
_08012F80:
	.4byte gUnknown_03000204
	THUMB_FUNC_END sub_08012F20


	THUMB_FUNC_START sub_08012EB4
sub_08012EB4: @ 0x08012EB4
	push {r4,lr}
	ldr r1, _08012F0C  @ =gUnknown_0842AD18
	ldr r0, _08012F10  @ =gUnknown_03006C80
	ldrb r0, [r0, #1]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r4, [r0]
	ldr r1, _08012F14  @ =gUnknown_02016330
	ldr r0, [r4, #20]
	str r0, [r1]
	ldrb r0, [r4, #1]
	bl sub_08015DD8
	ldrb r0, [r4]
	bl sub_08015F74
	mov r0, #0
	mov r1, #0
	bl sub_08012F84
	cmp r0, #0
	beq _08012EF2
	mov r0, #0
	mov r1, #0
	bl sub_08012F84
	mov r1, #0
	mov r2, #0
	mov r3, #0
	bl sub_08013C8C
_08012EF2:
	bl sub_08016084
	ldr r1, _08012F18  @ =gUnknown_02000028
	ldr r0, _08012F1C  @ =gUnknown_03000204
	ldrb r0, [r0]
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	bl 0x08008ED8
	pop {r4}
	pop {r0}
	bx r0
_08012F0C:
	.4byte gUnknown_0842AD18
_08012F10:
	.4byte gUnknown_03006C80
_08012F14:
	.4byte gUnknown_02016330
_08012F18:
	.4byte gUnknown_02000028
_08012F1C:
	.4byte gUnknown_03000204
	THUMB_FUNC_END sub_08012EB4


	THUMB_FUNC_START sub_080E4EA8
sub_080E4EA8: @ 0x080E4EA8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r7, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E4F78
	ldr r0, _080E4F88  @ =gUnknown_03003E74
	mov r10, r0
	add r0, sp, #4
	ldrb r1, [r0]
	mov r2, r10
	ldrh r0, [r2]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r6, _080E4F8C  @ =gRam
	ldr r3, _080E4F90  @ =gUnknown_03002B90
	ldrh r1, [r3]
	ldr r4, _080E4F94  @ =gUnknown_03002B94
	ldrh r2, [r4]
	sub r2, r2, #11
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r5, _080E4F98  @ =gUnknown_08176958
	ldr r4, _080E4F9C  @ =0x00001082
	add r3, r6, r4
	add r3, r7, r3
	ldrb r4, [r3]
	add r5, r4, r5
	ldrb r3, [r5]
	ldr r5, _080E4FA0  @ =gUnknown_0817695C
	add r4, r4, r5
	ldrb r4, [r4]
	ldr r5, _080E4FA4  @ =0x00000969
	add r5, r5, r6
	mov r9, r5
	ldrb r5, [r5]
	lsl r5, r5, #24
	asr r5, r5, #24
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, #2
	mov r8, r4
	str r4, [sp]
	bl sub_080C6368
	add r0, sp, #4
	ldrb r1, [r0]
	mov r5, r10
	ldrh r0, [r5]
	add r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r2, _080E4FA8  @ =gUnknown_08177404
	ldr r1, _080E4FAC  @ =0x00000F92
	add r6, r6, r1
	add r6, r7, r6
	ldrb r5, [r6]
	lsl r1, r5, #1
	add r1, r1, r2
	ldrh r1, [r1]
	ldr r2, _080E4F90  @ =gUnknown_03002B90
	ldrh r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r3, _080E4F94  @ =gUnknown_03002B94
	ldrh r2, [r3]
	ldr r3, _080E4FB0  @ =gUnknown_08177414
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _080E4FB4  @ =gUnknown_0817741C
	add r5, r5, r4
	ldrb r4, [r5]
	mov r6, r9
	mov r5, #0
	ldrsb r5, [r6, r5]
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r4, r8
	str r4, [sp]
	bl sub_080C6368
	add r0, r7, #0
	bl sub_080C6230
_080E4F78:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080E4F88:
	.4byte gUnknown_03003E74
_080E4F8C:
	.4byte gRam
_080E4F90:
	.4byte gUnknown_03002B90
_080E4F94:
	.4byte gUnknown_03002B94
_080E4F98:
	.4byte gUnknown_08176958
_080E4F9C:
	.4byte 0x00001082
_080E4FA0:
	.4byte gUnknown_0817695C
_080E4FA4:
	.4byte 0x00000969
_080E4FA8:
	.4byte gUnknown_08177404
_080E4FAC:
	.4byte 0x00000F92
_080E4FB0:
	.4byte gUnknown_08177414
_080E4FB4:
	.4byte gUnknown_0817741C
	THUMB_FUNC_END sub_080E4EA8


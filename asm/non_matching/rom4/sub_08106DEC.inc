	THUMB_FUNC_START sub_08106DEC
sub_08106DEC: @ 0x08106DEC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #20
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r1, _08106F48  @ =gRam
	ldr r2, _08106F4C  @ =0x000015E8
	add r0, r1, r2
	ldrb r3, [r0]
	ldr r5, _08106F50  @ =0x000015E9
	add r0, r1, r5
	ldrb r4, [r0]
	ldr r2, _08106F54  @ =0x00001002
	add r0, r1, r2
	add r0, r7, r0
	ldrb r2, [r0]
	mov r5, #151
	lsl r5, r5, #4
	add r0, r1, r5
	strb r2, [r0]
	mov r5, #0
	mov r8, r1
	lsl r3, r3, #24
	asr r0, r3, #24
	str r0, [sp, #4]
	lsl r4, r4, #24
	str r4, [sp, #12]
	asr r4, r4, #24
	mov r10, r4
	str r3, [sp, #8]
_08106E2E:
	ldr r1, _08106F58  @ =gUnknown_03002B90
	ldrb r0, [r1]
	ldr r2, [sp, #4]
	add r0, r2, r0
	ldr r1, _08106F5C  @ =0x00001622
	add r1, r1, r8
	mov r9, r1
	strb r0, [r1]
	ldr r2, _08106F60  @ =gUnknown_03002B94
	ldrb r0, [r2]
	add r0, r0, r10
	ldr r1, _08106F64  @ =0x00001624
	add r1, r1, r8
	strb r0, [r1]
	ldr r0, _08106F58  @ =gUnknown_03002B90
	ldrh r2, [r0]
	ldr r1, [sp, #4]
	add r2, r1, r2
	ldr r1, _08106F68  @ =gUnknown_0817BF8F
	lsl r0, r5, #24
	asr r5, r0, #24
	add r1, r5, r1
	mov r0, #0
	ldrsb r0, [r1, r0]
	add r0, r0, r2
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r12, r0
	ldr r2, _08106F60  @ =gUnknown_03002B94
	ldrh r1, [r2]
	add r1, r1, r10
	ldr r0, _08106F6C  @ =gUnknown_0817BF94
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r6, r0, #16
	cmp r5, #4
	bne _08106E92
	mov r0, #151
	lsl r0, r0, #4
	add r0, r0, r8
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	add r0, r6, r0
	lsl r0, r0, #16
	lsr r6, r0, #16
_08106E92:
	ldr r0, _08106F70  @ =gUnknown_03003E74
	ldr r4, _08106F74  @ =0x000015FA
	add r4, r4, r8
	ldrb r1, [r4]
	ldrh r0, [r0]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r1, _08106F78  @ =gUnknown_0817BF99
	add r1, r5, r1
	ldrb r3, [r1]
	ldr r1, _08106F7C  @ =gUnknown_0817BF9E
	add r1, r5, r1
	ldrb r1, [r1]
	ldr r2, _08106F80  @ =gUnknown_03002B99
	ldrb r2, [r2]
	lsl r2, r2, #24
	asr r2, r2, #24
	orr r1, r1, r2
	lsl r1, r1, #8
	orr r3, r3, r1
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r1, #2
	str r1, [sp]
	mov r1, r12
	add r2, r6, #0
	bl sub_080C6368
	add r1, r5, #1
	lsl r1, r1, #24
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	lsr r5, r1, #24
	asr r1, r1, #24
	cmp r1, #5
	bne _08106E2E
	ldr r0, _08106F84  @ =0xFFFFF940
	add r0, r0, r9
	add r0, r7, r0
	ldrb r2, [r0]
	ldr r0, _08106F88  @ =0xFFFFF950
	add r0, r0, r9
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r5, [sp, #8]
	asr r1, r5, #24
	add r1, r1, r2
	ldr r0, _08106F8C  @ =0xFFFFF8C0
	add r0, r0, r9
	add r0, r7, r0
	strb r1, [r0]
	ldr r0, _08106F90  @ =0xFFFFF8E0
	add r0, r0, r9
	add r0, r7, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _08106F94  @ =0xFFFFF960
	add r0, r0, r9
	add r0, r7, r0
	ldrb r2, [r0]
	ldr r0, _08106F98  @ =0xFFFFFA80
	add r0, r0, r9
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r0, [sp, #12]
	asr r1, r0, #24
	add r1, r1, r2
	ldr r0, _08106F9C  @ =0xFFFFF8B0
	add r0, r0, r9
	add r0, r7, r0
	strb r1, [r0]
	ldr r0, _08106FA0  @ =0xFFFFF8D0
	add r0, r0, r9
	add r0, r7, r0
	lsr r1, r1, #8
	strb r1, [r0]
	add sp, sp, #20
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08106F48:
	.4byte gRam
_08106F4C:
	.4byte 0x000015E8
_08106F50:
	.4byte 0x000015E9
_08106F54:
	.4byte 0x00001002
_08106F58:
	.4byte gUnknown_03002B90
_08106F5C:
	.4byte 0x00001622
_08106F60:
	.4byte gUnknown_03002B94
_08106F64:
	.4byte 0x00001624
_08106F68:
	.4byte gUnknown_0817BF8F
_08106F6C:
	.4byte gUnknown_0817BF94
_08106F70:
	.4byte gUnknown_03003E74
_08106F74:
	.4byte 0x000015FA
_08106F78:
	.4byte gUnknown_0817BF99
_08106F7C:
	.4byte gUnknown_0817BF9E
_08106F80:
	.4byte gUnknown_03002B99
_08106F84:
	.4byte 0xFFFFF940
_08106F88:
	.4byte 0xFFFFF950
_08106F8C:
	.4byte 0xFFFFF8C0
_08106F90:
	.4byte 0xFFFFF8E0
_08106F94:
	.4byte 0xFFFFF960
_08106F98:
	.4byte 0xFFFFFA80
_08106F9C:
	.4byte 0xFFFFF8B0
_08106FA0:
	.4byte 0xFFFFF8D0
	THUMB_FUNC_END sub_08106DEC


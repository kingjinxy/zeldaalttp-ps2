	THUMB_FUNC_START sub_0806B3D8
sub_0806B3D8: @ 0x0806B3D8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	ldr r4, _0806B494  @ =gRam
	ldr r0, _0806B498  @ =gUnknown_03002B82
	ldrh r0, [r0]
	str r0, [sp, #12]
	ldr r1, _0806B49C  @ =0x00000958
	add r3, r4, r1
	ldrh r2, [r3]
	str r2, [sp]
	mov r7, #149
	lsl r7, r7, #4
	add r6, r4, r7
	ldrh r0, [r6]
	str r0, [sp, #4]
	sub r1, r1, #2
	add r5, r4, r1
	ldrh r2, [r5]
	mov r9, r2
	add r7, r7, #216
	add r0, r4, r7
	ldrh r2, [r0]
	ldr r0, [sp, #12]
	add r0, r0, r2
	mov r10, r0
	ldr r1, _0806B498  @ =gUnknown_03002B82
	strh r0, [r1]
	add r7, r7, #2
	add r0, r4, r7
	ldrh r1, [r0]
	ldrh r0, [r3]
	add r0, r0, r1
	mov r8, r0
	strh r0, [r3]
	ldrh r7, [r6]
	add r2, r2, r7
	strh r2, [r6]
	ldrh r0, [r5]
	add r1, r1, r0
	strh r1, [r5]
	ldr r7, _0806B4A0  @ =0x00000A2C
	add r0, r4, r7
	mov r7, r10
	strh r7, [r0]
	mov r7, #163
	lsl r7, r7, #4
	add r0, r4, r7
	mov r7, r8
	strh r7, [r0]
	ldr r7, _0806B4A4  @ =0x00000A2E
	add r0, r4, r7
	strh r2, [r0]
	ldr r2, _0806B4A8  @ =0x00000A32
	add r0, r4, r2
	strh r1, [r0]
	str r3, [sp, #8]
	bl sub_080C1B40
	mov r7, sp
	ldrh r0, [r7, #12]
	ldr r7, _0806B498  @ =gUnknown_03002B82
	strh r0, [r7]
	ldr r3, [sp, #8]
	mov r1, sp
	ldrh r1, [r1]
	strh r1, [r3]
	mov r2, sp
	ldrh r2, [r2, #4]
	strh r2, [r6]
	mov r7, r9
	strh r7, [r5]
	ldr r1, _0806B4AC  @ =gUnknown_0814C9F8
	ldr r0, _0806B4B0  @ =0x00000A4C
	add r4, r4, r0
	ldrh r0, [r4]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	bl _call_via_r0
	bl sub_080A3EE0
	add sp, sp, #16
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_0806B494:
	.4byte gRam
_0806B498:
	.4byte gUnknown_03002B82
_0806B49C:
	.4byte 0x00000958
_0806B4A0:
	.4byte 0x00000A2C
_0806B4A4:
	.4byte 0x00000A2E
_0806B4A8:
	.4byte 0x00000A32
_0806B4AC:
	.4byte gUnknown_0814C9F8
_0806B4B0:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_0806B3D8


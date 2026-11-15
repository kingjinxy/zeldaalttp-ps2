	THUMB_FUNC_START sub_08131524
sub_08131524: @ 0x08131524
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	add r6, r0, #0
	str r1, [sp]
	str r2, [sp, #4]
	ldr r1, _081315B0  @ =gRam
	ldr r2, _081315B4  @ =0x0000164E
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _08131626
	mov r3, #151
	lsl r3, r3, #4
	add r3, r3, r1
	mov r8, r3
	mov r7, #248
	lsl r7, r7, #2
	mov r9, r7
	mov r0, #248
	lsl r0, r0, #7
	mov r10, r0
	lsl r0, r6, #1
	ldr r2, _081315B8  @ =gUnknown_02000C00
	add r3, r0, r2
	ldr r7, _081315BC  @ =0x00000974
	add r7, r7, r1
	mov r12, r7
_08131562:
	ldrh r1, [r3]
	mov r0, #31
	and r0, r0, r1
	mov r1, r8
	strh r0, [r1]
	ldrh r1, [r3]
	mov r0, r9
	and r0, r0, r1
	mov r2, r12
	strh r0, [r2]
	ldrh r1, [r3]
	mov r0, r10
	and r0, r0, r1
	ldr r7, _081315C0  @ =gUnknown_03002BA8
	strh r0, [r7]
	ldr r1, [sp, #4]
	lsl r0, r1, #1
	ldr r2, _081315C4  @ =gUnknown_0200BB00
	add r0, r0, r2
	ldrh r0, [r0]
	add r1, r0, #0
	mov r7, #31
	and r1, r1, r7
	add r4, r0, #0
	mov r2, r9
	and r4, r4, r2
	mov r5, r10
	and r5, r5, r0
	mov r7, r8
	mov r2, #0
	ldrsh r0, [r7, r2]
	cmp r0, r1
	beq _081315CE
	cmp r0, r1
	ble _081315C8
	ldrh r0, [r3]
	sub r0, r0, #1
	b _081315CC
	.byte 0x00
	.byte 0x00
_081315B0:
	.4byte gRam
_081315B4:
	.4byte 0x0000164E
_081315B8:
	.4byte gUnknown_02000C00
_081315BC:
	.4byte 0x00000974
_081315C0:
	.4byte gUnknown_03002BA8
_081315C4:
	.4byte gUnknown_0200BB00
_081315C8:
	ldrh r0, [r3]
	add r0, r0, #1
_081315CC:
	strh r0, [r3]
_081315CE:
	mov r7, r12
	mov r1, #0
	ldrsh r0, [r7, r1]
	cmp r0, r4
	beq _081315E8
	cmp r0, r4
	ble _081315E2
	ldrh r0, [r3]
	sub r0, r0, #32
	b _081315E6
_081315E2:
	ldrh r0, [r3]
	add r0, r0, #32
_081315E6:
	strh r0, [r3]
_081315E8:
	ldr r2, _08131600  @ =gUnknown_03002BA8
	mov r7, #0
	ldrsh r0, [r2, r7]
	cmp r0, r5
	beq _08131614
	cmp r0, r5
	ble _08131608
	ldr r1, _08131604  @ =0xFFFFFC00
	add r0, r1, #0
	ldrh r2, [r3]
	add r0, r0, r2
	b _08131612
_08131600:
	.4byte gUnknown_03002BA8
_08131604:
	.4byte 0xFFFFFC00
_08131608:
	mov r7, #128
	lsl r7, r7, #3
	add r0, r7, #0
	ldrh r1, [r3]
	add r0, r0, r1
_08131612:
	strh r0, [r3]
_08131614:
	ldr r2, [sp, #4]
	add r2, r2, #1
	str r2, [sp, #4]
	add r3, r3, #2
	add r6, r6, #1
	ldr r7, [sp]
	cmp r6, r7
	bne _08131562
	b _08131700
_08131626:
	cmp r0, #1
	bne _08131700
	mov r0, #151
	lsl r0, r0, #4
	add r0, r0, r1
	mov r8, r0
	mov r2, #248
	lsl r2, r2, #2
	mov r10, r2
	mov r3, #248
	lsl r3, r3, #7
	mov r9, r3
	lsl r0, r6, #1
	ldr r7, _08131694  @ =gUnknown_02000C00
	add r2, r0, r7
	str r0, [sp, #8]
	ldr r0, _08131698  @ =0x00000974
	add r0, r0, r1
	mov r12, r0
_0813164C:
	ldrh r1, [r2]
	mov r0, #31
	and r0, r0, r1
	mov r1, r8
	strh r0, [r1]
	ldrh r1, [r2]
	mov r0, r10
	and r0, r0, r1
	mov r3, r12
	strh r0, [r3]
	ldrh r1, [r2]
	mov r0, r9
	and r0, r0, r1
	ldr r7, _0813169C  @ =gUnknown_03002BA8
	strh r0, [r7]
	ldr r1, [sp, #8]
	ldr r3, _081316A0  @ =gUnknown_02000800
	add r0, r1, r3
	ldrh r0, [r0]
	mov r1, #31
	and r1, r1, r0
	mov r4, r10
	and r4, r4, r0
	mov r5, r9
	and r5, r5, r0
	mov r7, r8
	mov r3, #0
	ldrsh r0, [r7, r3]
	cmp r0, r1
	beq _081316AA
	cmp r0, r1
	ble _081316A4
	ldrh r0, [r2]
	sub r0, r0, #1
	b _081316A8
	.byte 0x00
	.byte 0x00
_08131694:
	.4byte gUnknown_02000C00
_08131698:
	.4byte 0x00000974
_0813169C:
	.4byte gUnknown_03002BA8
_081316A0:
	.4byte gUnknown_02000800
_081316A4:
	ldrh r0, [r2]
	add r0, r0, #1
_081316A8:
	strh r0, [r2]
_081316AA:
	mov r7, r12
	mov r1, #0
	ldrsh r0, [r7, r1]
	cmp r0, r4
	beq _081316C4
	cmp r0, r4
	ble _081316BE
	ldrh r0, [r2]
	sub r0, r0, #32
	b _081316C2
_081316BE:
	ldrh r0, [r2]
	add r0, r0, #32
_081316C2:
	strh r0, [r2]
_081316C4:
	ldr r3, _081316DC  @ =gUnknown_03002BA8
	mov r7, #0
	ldrsh r0, [r3, r7]
	cmp r0, r5
	beq _081316F0
	cmp r0, r5
	ble _081316E4
	ldr r1, _081316E0  @ =0xFFFFFC00
	add r0, r1, #0
	ldrh r3, [r2]
	add r0, r0, r3
	b _081316EE
_081316DC:
	.4byte gUnknown_03002BA8
_081316E0:
	.4byte 0xFFFFFC00
_081316E4:
	mov r7, #128
	lsl r7, r7, #3
	add r0, r7, #0
	ldrh r1, [r2]
	add r0, r0, r1
_081316EE:
	strh r0, [r2]
_081316F0:
	add r2, r2, #2
	ldr r3, [sp, #8]
	add r3, r3, #2
	str r3, [sp, #8]
	add r6, r6, #1
	ldr r7, [sp]
	cmp r6, r7
	bne _0813164C
_08131700:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08131524


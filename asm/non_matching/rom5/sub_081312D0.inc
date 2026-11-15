	THUMB_FUNC_START sub_081312D0
sub_081312D0: @ 0x081312D0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r2, _08131388  @ =gRam
	ldr r1, _0813138C  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	mov r12, r2
	cmp r0, #0
	bne _081312F0
	b _08131512
_081312F0:
	mov r7, #104
	ldr r0, _08131390  @ =0x00001650
	add r0, r0, r12
	ldrb r0, [r0]
	cmp r0, #0
	beq _081312FE
	b _081313FE
_081312FE:
	ldr r4, _08131394  @ =gUnknown_02000CD0
	mov r2, #208
	mov r8, r2
	ldr r3, _08131398  @ =0x00000974
	add r3, r3, r12
	mov r10, r3
	ldr r5, _0813139C  @ =0x00000978
	add r5, r5, r12
	mov r9, r5
_08131310:
	ldrh r1, [r4]
	mov r0, #31
	and r0, r0, r1
	ldr r6, _081313A0  @ =gUnknown_03002BA0
	strh r0, [r6]
	ldrh r1, [r4]
	mov r0, #248
	lsl r0, r0, #2
	and r0, r0, r1
	mov r1, r10
	strh r0, [r1]
	ldrh r1, [r4]
	mov r0, #248
	lsl r0, r0, #7
	and r0, r0, r1
	mov r2, r9
	strh r0, [r2]
	ldr r0, _081313A4  @ =gUnknown_02000800
	add r0, r0, r8
	ldrh r2, [r0]
	mov r0, #31
	and r0, r0, r2
	add r1, r0, #0
	add r1, r1, #12
	cmp r1, #31
	ble _08131346
	mov r1, #31
_08131346:
	mov r0, #248
	lsl r0, r0, #2
	and r0, r0, r2
	mov r5, #192
	lsl r5, r5, #1
	add r3, r0, r5
	mov r6, #248
	lsl r6, r6, #2
	cmp r3, r6
	ble _0813135C
	add r3, r6, #0
_0813135C:
	mov r0, #248
	lsl r0, r0, #7
	and r0, r0, r2
	mov r5, #192
	lsl r5, r5, #6
	add r2, r0, r5
	mov r6, #248
	lsl r6, r6, #7
	cmp r2, r6
	ble _08131372
	add r2, r6, #0
_08131372:
	ldr r5, _081313A0  @ =gUnknown_03002BA0
	mov r6, #0
	ldrsh r0, [r5, r6]
	cmp r0, r1
	beq _081313AE
	cmp r0, r1
	ble _081313A8
	ldrh r0, [r4]
	sub r0, r0, #1
	b _081313AC
	.byte 0x00
	.byte 0x00
_08131388:
	.4byte gRam
_0813138C:
	.4byte 0x00000996
_08131390:
	.4byte 0x00001650
_08131394:
	.4byte gUnknown_02000CD0
_08131398:
	.4byte 0x00000974
_0813139C:
	.4byte 0x00000978
_081313A0:
	.4byte gUnknown_03002BA0
_081313A4:
	.4byte gUnknown_02000800
_081313A8:
	ldrh r0, [r4]
	add r0, r0, #1
_081313AC:
	strh r0, [r4]
_081313AE:
	mov r1, r10
	mov r5, #0
	ldrsh r0, [r1, r5]
	cmp r0, r3
	beq _081313C8
	cmp r0, r3
	ble _081313C2
	ldrh r0, [r4]
	sub r0, r0, #32
	b _081313C6
_081313C2:
	ldrh r0, [r4]
	add r0, r0, #32
_081313C6:
	strh r0, [r4]
_081313C8:
	mov r6, r9
	mov r1, #0
	ldrsh r0, [r6, r1]
	cmp r0, r2
	beq _081313F0
	cmp r0, r2
	ble _081313E4
	ldr r2, _081313E0  @ =0xFFFFFC00
	add r0, r2, #0
	ldrh r3, [r4]
	add r0, r0, r3
	b _081313EE
_081313E0:
	.4byte 0xFFFFFC00
_081313E4:
	mov r5, #128
	lsl r5, r5, #3
	add r0, r5, #0
	ldrh r6, [r4]
	add r0, r0, r6
_081313EE:
	strh r0, [r4]
_081313F0:
	add r4, r4, #2
	mov r0, #2
	add r8, r8, r0
	add r7, r7, #1
	cmp r7, #112
	bne _08131310
	b _081314CA
_081313FE:
	mov r1, #151
	lsl r1, r1, #4
	add r1, r1, r12
	mov r9, r1
	mov r2, #248
	lsl r2, r2, #7
	mov r10, r2
	ldr r4, _08131460  @ =gUnknown_02000CD0
	mov r3, #208
	str r3, [sp]
	ldr r5, _08131464  @ =0x00000974
	add r5, r5, r12
	mov r8, r5
_08131418:
	ldrh r1, [r4]
	mov r0, #31
	and r0, r0, r1
	mov r6, r9
	strh r0, [r6]
	ldrh r1, [r4]
	mov r0, #248
	lsl r0, r0, #2
	and r0, r0, r1
	mov r1, r8
	strh r0, [r1]
	ldrh r1, [r4]
	mov r0, r10
	and r0, r0, r1
	ldr r2, _08131468  @ =gUnknown_03002BA8
	strh r0, [r2]
	ldr r3, [sp]
	ldr r5, _0813146C  @ =gUnknown_02000800
	add r0, r3, r5
	ldrh r0, [r0]
	mov r1, #31
	and r1, r1, r0
	mov r3, #248
	lsl r3, r3, #2
	and r3, r3, r0
	mov r2, r10
	and r2, r2, r0
	mov r5, #0
	ldrsh r0, [r6, r5]
	cmp r0, r1
	beq _08131476
	cmp r0, r1
	ble _08131470
	ldrh r0, [r4]
	sub r0, r0, #1
	b _08131474
_08131460:
	.4byte gUnknown_02000CD0
_08131464:
	.4byte 0x00000974
_08131468:
	.4byte gUnknown_03002BA8
_0813146C:
	.4byte gUnknown_02000800
_08131470:
	ldrh r0, [r4]
	add r0, r0, #1
_08131474:
	strh r0, [r4]
_08131476:
	mov r6, r8
	mov r1, #0
	ldrsh r0, [r6, r1]
	cmp r0, r3
	beq _08131490
	cmp r0, r3
	ble _0813148A
	ldrh r0, [r4]
	sub r0, r0, #32
	b _0813148E
_0813148A:
	ldrh r0, [r4]
	add r0, r0, #32
_0813148E:
	strh r0, [r4]
_08131490:
	ldr r3, _081314A8  @ =gUnknown_03002BA8
	mov r5, #0
	ldrsh r0, [r3, r5]
	cmp r0, r2
	beq _081314BC
	cmp r0, r2
	ble _081314B0
	ldr r6, _081314AC  @ =0xFFFFFC00
	add r0, r6, #0
	ldrh r1, [r4]
	add r0, r0, r1
	b _081314BA
_081314A8:
	.4byte gUnknown_03002BA8
_081314AC:
	.4byte 0xFFFFFC00
_081314B0:
	mov r2, #128
	lsl r2, r2, #3
	add r0, r2, #0
	ldrh r3, [r4]
	add r0, r0, r3
_081314BA:
	strh r0, [r4]
_081314BC:
	add r4, r4, #2
	ldr r5, [sp]
	add r5, r5, #2
	str r5, [sp]
	add r7, r7, #1
	cmp r7, #112
	bne _08131418
_081314CA:
	ldr r3, _081314FC  @ =0x0000164F
	add r3, r3, r12
	ldrb r0, [r3]
	add r1, r0, #1
	strb r1, [r3]
	ldr r0, _08131500  @ =0x0000099B
	add r0, r0, r12
	mov r4, #1
	strb r4, [r0]
	mov r0, #63
	and r0, r0, r1
	cmp r0, #32
	bls _08131512
	ldr r2, _08131504  @ =0x00001650
	add r2, r2, r12
	ldrb r0, [r2]
	cmp r0, #0
	bne _08131508
	strb r4, [r2]
	mov r0, #192
	and r1, r1, r0
	add r0, r1, #1
	strb r0, [r3]
	b _08131512
	.byte 0x00
	.byte 0x00
_081314FC:
	.4byte 0x0000164F
_08131500:
	.4byte 0x0000099B
_08131504:
	.4byte 0x00001650
_08131508:
	mov r0, #0
	strb r0, [r2]
	mov r0, #192
	and r1, r1, r0
	strb r1, [r3]
_08131512:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081312D0

	.byte 0x00
	.byte 0x00

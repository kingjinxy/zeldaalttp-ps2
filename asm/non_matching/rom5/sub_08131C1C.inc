	THUMB_FUNC_START sub_08131C1C
sub_08131C1C: @ 0x08131C1C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	mov r8, r2
	lsl r0, r0, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	lsr r5, r0, #16
	mov r0, #0
	str r0, [sp]
	cmp r5, #255
	bls _08131C3E
	mov r2, #128
	str r2, [sp]
_08131C3E:
	mov r9, r1
	cmp r5, r9
	beq _08131CE4
	ldr r3, _08131CF4  @ =gRam
	mov r10, r3
	ldr r7, _08131CF8  @ =0x00000968
	add r7, r7, r10
_08131C4C:
	lsr r0, r5, #1
	ldr r4, [sp]
	lsl r1, r4, #1
	lsl r0, r0, #1
	add r1, r1, r0
	ldr r0, _08131CFC  @ =gUnknown_02000C00
	add r0, r0, r1
	mov r12, r0
	ldrh r3, [r0]
	mov r2, sp
	strh r3, [r2, #8]
	strh r3, [r7]
	ldr r4, _08131D00  @ =gUnknown_02000800
	add r1, r1, r4
	ldrh r3, [r1]
	add r2, r3, #0
	cmp r3, #0
	beq _08131CDA
	mov r0, #31
	and r0, r0, r3
	lsl r0, r0, #2
	add r0, r0, r8
	ldrh r1, [r0]
	ldr r6, _08131D04  @ =0x00000978
	add r6, r6, r10
	mov r4, #0
	ldrsh r0, [r6, r4]
	and r1, r1, r0
	cmp r1, #0
	bne _08131C94
	ldr r1, _08131D08  @ =gUnknown_03002B9C
	ldrh r0, [r1]
	mov r4, sp
	ldrh r4, [r4, #8]
	add r0, r4, r0
	strh r0, [r7]
_08131C94:
	mov r0, #248
	lsl r0, r0, #2
	and r3, r3, r0
	lsr r0, r3, #3
	add r0, r0, r8
	ldrh r0, [r0]
	mov r3, #0
	ldrsh r1, [r6, r3]
	and r0, r0, r1
	cmp r0, #0
	bne _08131CB4
	ldr r4, _08131D0C  @ =gUnknown_03002BA0
	ldrh r0, [r4]
	ldrh r1, [r7]
	add r0, r0, r1
	strh r0, [r7]
_08131CB4:
	mov r0, #248
	lsl r0, r0, #7
	and r2, r2, r0
	lsr r0, r2, #8
	add r0, r0, r8
	ldrh r0, [r0]
	mov r2, #0
	ldrsh r1, [r6, r2]
	and r0, r0, r1
	cmp r0, #0
	bne _08131CD4
	ldr r3, _08131D10  @ =gUnknown_03002BA4
	ldrh r0, [r3]
	ldrh r4, [r7]
	add r0, r0, r4
	strh r0, [r7]
_08131CD4:
	ldrh r0, [r7]
	mov r1, r12
	strh r0, [r1]
_08131CDA:
	add r0, r5, #2
	lsl r0, r0, #16
	lsr r5, r0, #16
	cmp r5, r9
	bne _08131C4C
_08131CE4:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08131CF4:
	.4byte gRam
_08131CF8:
	.4byte 0x00000968
_08131CFC:
	.4byte gUnknown_02000C00
_08131D00:
	.4byte gUnknown_02000800
_08131D04:
	.4byte 0x00000978
_08131D08:
	.4byte gUnknown_03002B9C
_08131D0C:
	.4byte gUnknown_03002BA0
_08131D10:
	.4byte gUnknown_03002BA4
	THUMB_FUNC_END sub_08131C1C


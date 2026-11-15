	THUMB_FUNC_START sub_08130ED4
sub_08130ED4: @ 0x08130ED4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	add r2, r0, #0
	ldr r0, _08130F90  @ =gUnknown_0822BF7E
	mov r12, r0
	ldr r0, _08130F94  @ =gRam
	ldr r3, _08130F98  @ =0x00000CF8
	add r1, r0, r3
	ldrh r1, [r1]
	mov r9, r0
	cmp r1, #15
	bls _08130EF8
	mov r4, #2
	add r12, r12, r4
_08130EF8:
	mov r8, r9
	ldr r6, _08130F9C  @ =0x00000968
	add r6, r6, r8
	mov r7, #151
	lsl r7, r7, #4
	add r7, r7, r8
	mov r10, r7
_08130F06:
	lsl r0, r2, #1
	ldr r1, _08130FA0  @ =gUnknown_02000C00
	add r1, r0, r1
	str r1, [sp]
	ldrh r4, [r1]
	strh r4, [r6]
	ldr r7, _08130FA4  @ =gUnknown_02000800
	add r3, r0, r7
	ldrh r1, [r3]
	cmp r1, #0
	beq _08130F88
	mov r0, #31
	and r0, r0, r1
	lsl r0, r0, #2
	add r0, r0, r12
	ldrh r1, [r0]
	ldr r5, _08130FA8  @ =0x00000978
	add r5, r5, r9
	mov r7, #0
	ldrsh r0, [r5, r7]
	and r1, r1, r0
	cmp r1, #0
	bne _08130F3C
	ldr r1, _08130FAC  @ =gUnknown_03002B9C
	ldrh r0, [r1]
	add r0, r4, r0
	strh r0, [r6]
_08130F3C:
	ldrh r1, [r3]
	mov r0, #248
	lsl r0, r0, #2
	and r0, r0, r1
	lsr r0, r0, #3
	add r0, r0, r12
	ldrh r0, [r0]
	mov r4, #0
	ldrsh r1, [r5, r4]
	and r0, r0, r1
	cmp r0, #0
	bne _08130F5E
	mov r7, r10
	ldrh r0, [r7]
	ldrh r1, [r6]
	add r0, r0, r1
	strh r0, [r6]
_08130F5E:
	ldrh r1, [r3]
	mov r0, #248
	lsl r0, r0, #7
	and r0, r0, r1
	lsr r0, r0, #8
	add r0, r0, r12
	ldrh r0, [r0]
	mov r3, #0
	ldrsh r1, [r5, r3]
	and r0, r0, r1
	cmp r0, #0
	bne _08130F82
	ldr r0, _08130FB0  @ =0x00000974
	add r0, r0, r8
	ldrh r0, [r0]
	ldrh r4, [r6]
	add r0, r0, r4
	strh r0, [r6]
_08130F82:
	ldrh r0, [r6]
	ldr r7, [sp]
	strh r0, [r7]
_08130F88:
	cmp r2, #0
	bne _08130FB4
	mov r2, #32
	b _08130FDC
_08130F90:
	.4byte gUnknown_0822BF7E
_08130F94:
	.4byte gRam
_08130F98:
	.4byte 0x00000CF8
_08130F9C:
	.4byte 0x00000968
_08130FA0:
	.4byte gUnknown_02000C00
_08130FA4:
	.4byte gUnknown_02000800
_08130FA8:
	.4byte 0x00000978
_08130FAC:
	.4byte gUnknown_03002B9C
_08130FB0:
	.4byte 0x00000974
_08130FB4:
	add r2, r2, #1
	cmp r2, #128
	bne _08130FBE
	mov r2, #192
	b _08130FDC
_08130FBE:
	cmp r2, #200
	bne _08130FC6
	mov r2, #204
	b _08130FDC
_08130FC6:
	mov r0, #172
	lsl r0, r0, #1
	cmp r2, r0
	bne _08130FD2
	add r2, r2, #8
	b _08130FDC
_08130FD2:
	mov r0, #184
	lsl r0, r0, #1
	cmp r2, r0
	bne _08130FDC
	add r2, r2, #16
_08130FDC:
	ldr r0, _08130FF4  @ =0x000001FF
	cmp r2, r0
	ble _08130F06
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08130FF4:
	.4byte 0x000001FF
	THUMB_FUNC_END sub_08130ED4


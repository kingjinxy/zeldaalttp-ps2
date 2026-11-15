	THUMB_FUNC_START sub_081310E8
sub_081310E8: @ 0x081310E8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	add r5, r0, #0
	ldr r0, _081311B4  @ =gUnknown_0822BF7E
	mov r12, r0
	ldr r0, _081311B8  @ =gRam
	ldr r2, _081311BC  @ =0x00000CF8
	add r1, r0, r2
	ldrh r1, [r1]
	mov r8, r0
	cmp r1, #15
	bls _0813110C
	mov r3, #2
	add r12, r12, r3
_0813110C:
	ldr r6, _081311C0  @ =0x00000968
	add r6, r6, r8
	ldr r7, _081311C4  @ =0x0000096C
	add r7, r7, r8
	mov r10, r7
	ldr r0, _081311C8  @ =0x00000974
	add r0, r0, r8
	mov r9, r0
_0813111C:
	lsl r0, r5, #1
	ldr r1, _081311CC  @ =gUnknown_02000C00
	add r1, r0, r1
	str r1, [sp]
	ldrh r3, [r1]
	strh r3, [r6]
	ldr r7, _081311D0  @ =gUnknown_02000800
	add r2, r0, r7
	ldrh r1, [r2]
	cmp r1, #0
	beq _0813119C
	mov r0, #31
	and r0, r0, r1
	lsl r0, r0, #2
	add r0, r0, r12
	ldrh r1, [r0]
	ldr r4, _081311D4  @ =0x00000978
	add r4, r4, r8
	mov r7, #0
	ldrsh r0, [r4, r7]
	and r1, r1, r0
	cmp r1, #0
	bne _08131152
	mov r1, r10
	ldrh r0, [r1]
	add r0, r3, r0
	strh r0, [r6]
_08131152:
	ldrh r1, [r2]
	mov r0, #248
	lsl r0, r0, #2
	and r0, r0, r1
	lsr r0, r0, #3
	add r0, r0, r12
	ldrh r0, [r0]
	mov r3, #0
	ldrsh r1, [r4, r3]
	and r0, r0, r1
	cmp r0, #0
	bne _08131174
	ldr r7, _081311D8  @ =gUnknown_03002BA0
	ldrh r0, [r7]
	ldrh r1, [r6]
	add r0, r0, r1
	strh r0, [r6]
_08131174:
	ldrh r1, [r2]
	mov r0, #248
	lsl r0, r0, #7
	and r0, r0, r1
	lsr r0, r0, #8
	add r0, r0, r12
	ldrh r0, [r0]
	mov r2, #0
	ldrsh r1, [r4, r2]
	and r0, r0, r1
	cmp r0, #0
	bne _08131196
	mov r3, r9
	ldrh r0, [r3]
	ldrh r7, [r6]
	add r0, r0, r7
	strh r0, [r6]
_08131196:
	ldrh r0, [r6]
	ldr r1, [sp]
	strh r0, [r1]
_0813119C:
	add r5, r5, #1
	ldr r0, _081311DC  @ =0x000001FF
	cmp r5, r0
	ble _0813111C
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_081311B4:
	.4byte gUnknown_0822BF7E
_081311B8:
	.4byte gRam
_081311BC:
	.4byte 0x00000CF8
_081311C0:
	.4byte 0x00000968
_081311C4:
	.4byte 0x0000096C
_081311C8:
	.4byte 0x00000974
_081311CC:
	.4byte gUnknown_02000C00
_081311D0:
	.4byte gUnknown_02000800
_081311D4:
	.4byte 0x00000978
_081311D8:
	.4byte gUnknown_03002BA0
_081311DC:
	.4byte 0x000001FF
	THUMB_FUNC_END sub_081310E8


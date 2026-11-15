	THUMB_FUNC_START sub_08131998
sub_08131998: @ 0x08131998
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	add r5, r0, #0
	str r1, [sp]
	mov r0, #31
	mov r10, r0
	ldr r6, _08131A40  @ =gUnknown_03002BA0
	mov r1, #248
	lsl r1, r1, #2
	mov r9, r1
	add r0, r6, #4
	mov r12, r0
	mov r1, #248
	lsl r1, r1, #7
	mov r8, r1
	add r7, r6, #0
	add r7, r7, #8
_081319C2:
	lsl r3, r5, #1
	ldr r0, _08131A44  @ =gUnknown_02000C00
	add r4, r3, r0
	ldrh r1, [r4]
	mov r0, r10
	and r0, r0, r1
	strh r0, [r6]
	ldrh r1, [r4]
	mov r0, r9
	and r0, r0, r1
	mov r1, r12
	strh r0, [r1]
	ldrh r1, [r4]
	mov r0, r8
	and r0, r0, r1
	strh r0, [r7]
	mov r0, #0
	ldrsh r2, [r6, r0]
	ldr r1, _08131A48  @ =gUnknown_02000800
	add r3, r3, r1
	ldrh r1, [r3]
	mov r0, r10
	and r0, r0, r1
	cmp r2, r0
	beq _081319FA
	ldrh r0, [r4]
	sub r0, r0, #1
	strh r0, [r4]
_081319FA:
	mov r0, r12
	mov r1, #0
	ldrsh r2, [r0, r1]
	ldrh r1, [r3]
	mov r0, r9
	and r0, r0, r1
	cmp r2, r0
	beq _08131A10
	ldrh r0, [r4]
	sub r0, r0, #32
	strh r0, [r4]
_08131A10:
	mov r0, #0
	ldrsh r2, [r7, r0]
	ldrh r1, [r3]
	mov r0, r8
	and r0, r0, r1
	cmp r2, r0
	beq _08131A28
	ldr r1, _08131A4C  @ =0xFFFFFC00
	add r0, r1, #0
	ldrh r1, [r4]
	add r0, r0, r1
	strh r0, [r4]
_08131A28:
	add r5, r5, #1
	ldr r0, [sp]
	cmp r5, r0
	bne _081319C2
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_08131A40:
	.4byte gUnknown_03002BA0
_08131A44:
	.4byte gUnknown_02000C00
_08131A48:
	.4byte gUnknown_02000800
_08131A4C:
	.4byte 0xFFFFFC00
	THUMB_FUNC_END sub_08131998


	THUMB_FUNC_START sub_080C8CA0
sub_080C8CA0: @ 0x080C8CA0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	ldr r4, _080C8D4C  @ =gRam
	ldr r1, _080C8D50  @ =0x00000FC2
	add r0, r4, r1
	add r0, r0, r8
	ldrb r0, [r0]
	lsr r7, r0, #1
	mov r0, #252
	and r7, r7, r0
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	mov r2, r8
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080C8D3C
	mov r6, #3
	mov r9, r4
	ldr r3, _080C8D54  @ =0x000015E9
	add r3, r3, r9
	mov r10, r3
_080C8CDE:
	ldr r2, _080C8D58  @ =0x000015E8
	add r2, r2, r9
	ldr r0, _080C8D5C  @ =gUnknown_08172704
	add r5, r7, r6
	add r0, r5, r0
	mov r1, #0
	ldrsb r1, [r0, r1]
	ldrb r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r0, _080C8D60  @ =gUnknown_08172714
	add r0, r5, r0
	mov r2, #0
	ldrsb r2, [r0, r2]
	mov r0, r10
	ldrb r0, [r0]
	add r2, r2, r0
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r0, _080C8D64  @ =gUnknown_03003E74
	ldrh r0, [r0]
	add r0, r0, r6
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r3, _080C8D68  @ =gUnknown_08172724
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _080C8D6C  @ =gUnknown_08172734
	add r4, r5, r4
	ldrb r4, [r4]
	lsl r4, r4, #8
	orr r3, r3, r4
	ldr r4, _080C8D70  @ =gUnknown_08172744
	add r5, r5, r4
	ldrb r4, [r5]
	str r4, [sp]
	bl sub_080C6004
	sub r6, r6, #1
	cmp r6, #0
	bge _080C8CDE
	mov r0, r8
	mov r1, #255
	mov r2, #3
	bl sub_080C5DA0
_080C8D3C:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080C8D4C:
	.4byte gRam
_080C8D50:
	.4byte 0x00000FC2
_080C8D54:
	.4byte 0x000015E9
_080C8D58:
	.4byte 0x000015E8
_080C8D5C:
	.4byte gUnknown_08172704
_080C8D60:
	.4byte gUnknown_08172714
_080C8D64:
	.4byte gUnknown_03003E74
_080C8D68:
	.4byte gUnknown_08172724
_080C8D6C:
	.4byte gUnknown_08172734
_080C8D70:
	.4byte gUnknown_08172744
	THUMB_FUNC_END sub_080C8CA0


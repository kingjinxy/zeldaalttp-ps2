	THUMB_FUNC_START sub_080C59CC
sub_080C59CC: @ 0x080C59CC
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #16
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r7, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r0
	cmp r0, #0
	bne _080C5A98
	ldr r5, _080C5AA8  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r0, r5, r1
	ldrh r0, [r0]
	str r0, [sp, #8]
	ldr r2, _080C5AAC  @ =0x00000964
	add r0, r5, r2
	ldrh r2, [r0]
	add r6, r2, #0
	add r6, r6, #8
	lsl r6, r6, #16
	lsr r6, r6, #16
	str r6, [sp, #12]
	ldr r4, _080C5AB0  @ =gUnknown_082272A8
	ldr r3, _080C5AB4  @ =0x00000F92
	add r0, r5, r3
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r3, _080C5AB8  @ =gUnknown_082273B8
	ldr r6, _080C5ABC  @ =0x00000FF2
	add r0, r5, r6
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r3
	ldrh r0, [r0]
	add r1, r1, r0
	add r1, r1, r4
	ldrb r4, [r1]
	ldr r0, _080C5AC0  @ =gUnknown_03003E74
	mov r9, r0
	add r0, sp, #4
	ldrb r1, [r0]
	mov r3, r9
	ldrh r0, [r3]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r6, _080C5AC4  @ =0x00000969
	ldrsb r3, [r6, r5]
	lsl r3, r3, #8
	orr r3, r3, r4
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r1, r10
	str r1, [sp]
	ldr r1, [sp, #8]
	bl sub_080C6368
	add r0, sp, #4
	ldrb r1, [r0]
	mov r2, r9
	ldrh r0, [r2]
	add r0, r0, r1
	add r0, r0, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	add r4, r4, #32
	ldrsb r1, [r6, r5]
	lsl r1, r1, #8
	orr r4, r4, r1
	lsl r4, r4, #16
	lsr r4, r4, #16
	mov r3, r10
	str r3, [sp]
	ldr r1, [sp, #8]
	ldr r2, [sp, #12]
	add r3, r4, #0
	bl sub_080C6368
	ldr r6, _080C5AC8  @ =0x00001032
	add r5, r5, r6
	add r5, r7, r5
	ldrb r1, [r5]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _080C5A98
	add r0, r7, #0
	mov r1, #10
	bl sub_080C57F8
_080C5A98:
	add sp, sp, #16
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080C5AA8:
	.4byte gRam
_080C5AAC:
	.4byte 0x00000964
_080C5AB0:
	.4byte gUnknown_082272A8
_080C5AB4:
	.4byte 0x00000F92
_080C5AB8:
	.4byte gUnknown_082273B8
_080C5ABC:
	.4byte 0x00000FF2
_080C5AC0:
	.4byte gUnknown_03003E74
_080C5AC4:
	.4byte 0x00000969
_080C5AC8:
	.4byte 0x00001032
	THUMB_FUNC_END sub_080C59CC


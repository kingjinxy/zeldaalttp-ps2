	THUMB_FUNC_START sub_080C58F0
sub_080C58F0: @ 0x080C58F0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r9, r5
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r5, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r12, r0
	cmp r0, #0
	bne _080C599A
	ldr r6, _080C59AC  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r0, r6, r1
	ldrh r0, [r0]
	mov r8, r0
	ldr r2, _080C59B0  @ =0x00000964
	add r0, r6, r2
	ldrh r0, [r0]
	mov r10, r0
	add r0, r0, #16
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #255
	bhi _080C5982
	ldr r2, _080C59B4  @ =gUnknown_03003E74
	add r0, sp, #4
	ldrb r1, [r0]
	ldrh r0, [r2]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r4, _080C59B8  @ =gUnknown_082272A8
	ldr r7, _080C59BC  @ =0x00000F92
	add r1, r6, r7
	add r1, r5, r1
	ldrb r2, [r1]
	ldr r3, _080C59C0  @ =gUnknown_082273B8
	add r7, r7, #96
	add r1, r6, r7
	add r1, r5, r1
	ldrb r1, [r1]
	lsl r1, r1, #1
	add r1, r1, r3
	ldrh r1, [r1]
	add r2, r2, r1
	add r2, r2, r4
	ldrb r3, [r2]
	ldr r2, _080C59C4  @ =0x00000969
	add r1, r6, r2
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	lsl r1, r1, #8
	orr r3, r3, r1
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r7, r12
	str r7, [sp]
	mov r1, r8
	mov r2, r10
	bl sub_080C6004
_080C5982:
	ldr r1, _080C59C8  @ =0x00001032
	add r0, r6, r1
	add r0, r0, r9
	ldrb r1, [r0]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _080C599A
	mov r0, r9
	mov r1, #2
	bl sub_080C57F8
_080C599A:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C59AC:
	.4byte gRam
_080C59B0:
	.4byte 0x00000964
_080C59B4:
	.4byte gUnknown_03003E74
_080C59B8:
	.4byte gUnknown_082272A8
_080C59BC:
	.4byte 0x00000F92
_080C59C0:
	.4byte gUnknown_082273B8
_080C59C4:
	.4byte 0x00000969
_080C59C8:
	.4byte 0x00001032
	THUMB_FUNC_END sub_080C58F0


	THUMB_FUNC_START sub_0806EEDC
sub_0806EEDC: @ 0x0806EEDC
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	bl sub_08133604
	ldr r1, _0806EFC0  @ =gRam
	ldr r0, _0806EFC4  @ =0x000009B5
	add r2, r1, r0
	mov r0, #1
	strb r0, [r2]
	ldr r3, _0806EFC8  @ =0x00001770
	add r2, r1, r3
	mov r0, #2
	strb r0, [r2]
	mov r0, #6
	ldr r7, _0806EFCC  @ =0x000009DA
	add r1, r1, r7
	ldr r3, _0806EFD0  @ =gUnknown_0814CB7C
	ldrh r1, [r1]
	ldrh r2, [r3, #12]
	cmp r1, r2
	beq _0806EF1A
	add r2, r1, #0
	add r1, r3, #0
	add r1, r1, #12
_0806EF10:
	sub r1, r1, #2
	sub r0, r0, #1
	ldrh r3, [r1]
	cmp r2, r3
	bne _0806EF10
_0806EF1A:
	ldr r1, _0806EFC0  @ =gRam
	ldr r2, _0806EFD4  @ =gUnknown_0814CDA0
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	mov r7, #151
	lsl r7, r7, #4
	add r3, r1, r7
	mov r4, #0
	strh r0, [r3]
	ldr r0, _0806EFD8  @ =0x00000978
	add r2, r1, r0
	mov r0, #4
	strh r0, [r2]
	add r7, r7, #12
	add r1, r1, r7
	strh r4, [r1]
	mov r9, r3
	add r6, r1, #0
	mov r8, r2
_0806EF42:
	mov r5, #7
	mov r0, r9
	mov r1, #0
	ldrsh r4, [r0, r1]
_0806EF4A:
	add r0, r4, #0
	bl sub_08080380
	asr r0, r0, #1
	lsl r2, r0, #1
	ldr r7, _0806EFDC  @ =gUnknown_0201A000
	add r3, r2, r7
	ldrh r0, [r6]
	mov r7, #231
	lsl r7, r7, #7
	add r1, r7, #0
	orr r0, r0, r1
	strh r0, [r3]
	ldr r0, _0806EFE0  @ =gUnknown_0201A100
	add r2, r2, r0
	ldrh r0, [r6]
	ldr r3, _0806EFE4  @ =0x00007388
	add r1, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	ldrh r1, [r6]
	add r0, r1, #1
	strh r0, [r6]
	add r4, r4, #2
	sub r5, r5, #1
	cmp r5, #0
	bge _0806EF4A
	add r0, r0, #8
	strh r0, [r6]
	mov r7, r9
	ldrh r0, [r7]
	add r0, r0, #128
	strh r0, [r7]
	mov r1, r8
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	ldr r3, _0806EFC0  @ =gRam
	cmp r0, #0
	bne _0806EF42
	ldr r7, _0806EFE8  @ =0x0000050C
	add r2, r3, r7
	ldrh r1, [r2]
	ldr r0, _0806EFEC  @ =0x0000F7FF
	and r0, r0, r1
	strh r0, [r2]
	ldr r0, _0806EFF0  @ =0x000009E8
	add r1, r3, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806EFC0:
	.4byte gRam
_0806EFC4:
	.4byte 0x000009B5
_0806EFC8:
	.4byte 0x00001770
_0806EFCC:
	.4byte 0x000009DA
_0806EFD0:
	.4byte gUnknown_0814CB7C
_0806EFD4:
	.4byte gUnknown_0814CDA0
_0806EFD8:
	.4byte 0x00000978
_0806EFDC:
	.4byte gUnknown_0201A000
_0806EFE0:
	.4byte gUnknown_0201A100
_0806EFE4:
	.4byte 0x00007388
_0806EFE8:
	.4byte 0x0000050C
_0806EFEC:
	.4byte 0x0000F7FF
_0806EFF0:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806EEDC


	THUMB_FUNC_START sub_0812F4EC
sub_0812F4EC: @ 0x0812F4EC
	push {r4-r7,lr}
	sub sp, sp, #8
	ldr r7, _0812F5AC  @ =gRam
	ldr r0, _0812F5B0  @ =0x000017AA
	add r1, r7, r0
	mov r6, #0
	mov r0, #144
	strb r0, [r1]
	bl sub_08077064
	ldr r2, _0812F5B4  @ =0x000009AD
	add r1, r7, r2
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	bl sub_080774C8
	ldr r3, _0812F5B8  @ =0x000009C6
	add r5, r7, r3
	ldrh r1, [r5]
	ldr r2, _0812F5BC  @ =gUnknown_02002DC0
	add r0, r1, r2
	ldrb r0, [r0]
	ldr r2, _0812F5C0  @ =gUnknown_0814C8E8
	add r1, r1, r2
	ldrb r1, [r1]
	bl sub_0813084C
	bl sub_08130A24
	bl sub_08133350
	bl sub_08130AB4
	mov r0, sp
	ldr r3, _0812F5C4  @ =0x00007FFF
	add r4, r3, #0
	strh r4, [r0]
	ldr r1, _0812F5C8  @ =gUnknown_02000C40
	ldr r2, _0812F5CC  @ =0x01000060
	bl CpuSet
	mov r0, sp
	add r0, r0, #2
	strh r4, [r0]
	ldr r1, _0812F5D0  @ =gUnknown_02000E00
	ldr r2, _0812F5D4  @ =0x01000058
	bl CpuSet
	add r0, sp, #4
	strh r4, [r0]
	ldr r1, _0812F5D8  @ =gUnknown_02000EC0
	ldr r2, _0812F5DC  @ =0x01000010
	bl CpuSet
	mov r0, sp
	add r0, r0, #6
	strh r4, [r0]
	ldr r1, _0812F5E0  @ =gUnknown_02000F00
	ldr r2, _0812F5E4  @ =0x01000080
	bl CpuSet
	ldr r0, _0812F5E8  @ =gUnknown_02000C00
	strh r6, [r0]
	bl sub_080CBCD8
	bl sub_080CBCC8
	bl sub_080930E8
	bl sub_0807166C
	ldr r0, _0812F5EC  @ =0x00001718
	add r1, r7, r0
	mov r0, #20
	strb r0, [r1]
	ldrh r1, [r5]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _0812F592
	bl sub_080D56A0
_0812F592:
	ldr r1, _0812F5F0  @ =0x0000050C
	add r0, r7, r1
	ldrh r1, [r0]
	mov r3, #224
	lsl r3, r3, #4
	add r2, r3, #0
	orr r1, r1, r2
	strh r1, [r0]
	add sp, sp, #8
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812F5AC:
	.4byte gRam
_0812F5B0:
	.4byte 0x000017AA
_0812F5B4:
	.4byte 0x000009AD
_0812F5B8:
	.4byte 0x000009C6
_0812F5BC:
	.4byte gUnknown_02002DC0
_0812F5C0:
	.4byte gUnknown_0814C8E8
_0812F5C4:
	.4byte 0x00007FFF
_0812F5C8:
	.4byte gUnknown_02000C40
_0812F5CC:
	.4byte 0x01000060
_0812F5D0:
	.4byte gUnknown_02000E00
_0812F5D4:
	.4byte 0x01000058
_0812F5D8:
	.4byte gUnknown_02000EC0
_0812F5DC:
	.4byte 0x01000010
_0812F5E0:
	.4byte gUnknown_02000F00
_0812F5E4:
	.4byte 0x01000080
_0812F5E8:
	.4byte gUnknown_02000C00
_0812F5EC:
	.4byte 0x00001718
_0812F5F0:
	.4byte 0x0000050C
	THUMB_FUNC_END sub_0812F4EC


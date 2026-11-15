	THUMB_FUNC_START sub_08132EC8
sub_08132EC8: @ 0x08132EC8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	mov r6, #32
	ldr r0, _08132F60  @ =gRam
	mov r8, r0
	mov r1, #248
	lsl r1, r1, #2
	mov r12, r1
	mov r7, #31
_08132EDC:
	lsl r0, r6, #1
	ldr r1, _08132F64  @ =gUnknown_02000C00
	add r4, r0, r1
	ldrh r3, [r4]
	ldr r1, _08132F68  @ =gUnknown_02000800
	add r5, r0, r1
	ldrh r2, [r5]
	add r1, r3, #0
	mov r0, r12
	and r1, r1, r0
	and r0, r0, r2
	cmp r1, r0
	beq _08132EFE
	add r0, r3, #0
	add r0, r0, #32
	lsl r0, r0, #16
	lsr r3, r0, #16
_08132EFE:
	strh r3, [r4]
	ldrh r3, [r4]
	ldrh r2, [r5]
	add r1, r3, #0
	and r1, r1, r7
	add r0, r7, #0
	and r0, r0, r2
	cmp r1, r0
	beq _08132F16
	add r0, r3, #1
	lsl r0, r0, #16
	lsr r3, r0, #16
_08132F16:
	strh r3, [r4]
	add r6, r6, #1
	cmp r6, #128
	bne _08132F22
	mov r6, #128
	lsl r6, r6, #1
_08132F22:
	mov r0, #128
	lsl r0, r0, #2
	cmp r6, r0
	bne _08132EDC
	mov r1, r8
	ldr r0, _08132F6C  @ =0x00000CF8
	add r2, r1, r0
	ldrh r0, [r2]
	add r0, r0, #1
	strh r0, [r2]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #31
	bne _08132F4C
	mov r0, #0
	strh r0, [r2]
	ldr r0, _08132F70  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_08132F4C:
	ldr r1, _08132F74  @ =0x0000099B
	add r1, r1, r8
	mov r0, #1
	strb r0, [r1]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08132F60:
	.4byte gRam
_08132F64:
	.4byte gUnknown_02000C00
_08132F68:
	.4byte gUnknown_02000800
_08132F6C:
	.4byte 0x00000CF8
_08132F70:
	.4byte 0x000009E8
_08132F74:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08132EC8


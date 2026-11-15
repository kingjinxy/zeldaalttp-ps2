	THUMB_FUNC_START sub_08132E00
sub_08132E00: @ 0x08132E00
	push {r4-r7,lr}
	ldr r2, _08132EA4  @ =gRam
	ldr r1, _08132EA8  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	add r7, r2, #0
	cmp r0, #0
	beq _08132E92
	mov r5, #32
	mov r6, #248
	lsl r6, r6, #7
_08132E1A:
	lsl r0, r5, #1
	ldr r1, _08132EAC  @ =gUnknown_02000C00
	add r4, r0, r1
	ldrh r3, [r4]
	ldr r1, _08132EB0  @ =gUnknown_02000800
	add r0, r0, r1
	ldrh r2, [r0]
	add r1, r3, #0
	and r1, r1, r6
	add r0, r6, #0
	and r0, r0, r2
	cmp r1, r0
	beq _08132E3C
	ldr r1, _08132EB4  @ =0xFFFFFC00
	add r0, r3, r1
	lsl r0, r0, #16
	lsr r3, r0, #16
_08132E3C:
	strh r3, [r4]
	add r5, r5, #1
	cmp r5, #128
	bne _08132E48
	mov r5, #128
	lsl r5, r5, #1
_08132E48:
	mov r0, #128
	lsl r0, r0, #2
	cmp r5, r0
	bne _08132E1A
	ldr r1, _08132EB8  @ =0x00000CF8
	add r0, r7, r1
	ldrh r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _08132E6C
	ldr r0, _08132EBC  @ =0x00000D02
	add r1, r7, r0
	ldrh r0, [r1]
	cmp r0, #0
	beq _08132E6C
	sub r0, r0, #1
	strh r0, [r1]
_08132E6C:
	ldr r0, _08132EB8  @ =0x00000CF8
	add r1, r7, r0
	ldrh r0, [r1]
	add r0, r0, #1
	mov r2, #0
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #31
	bne _08132E92
	strh r2, [r1]
	ldr r1, _08132EC0  @ =0x000009E8
	add r0, r7, r1
	ldrh r1, [r0]
	add r1, r1, #1
	strh r1, [r0]
	ldr r1, _08132EBC  @ =0x00000D02
	add r0, r7, r1
	strh r2, [r0]
_08132E92:
	ldr r0, _08132EC4  @ =0x0000099B
	add r1, r7, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08132EA4:
	.4byte gRam
_08132EA8:
	.4byte 0x00000996
_08132EAC:
	.4byte gUnknown_02000C00
_08132EB0:
	.4byte gUnknown_02000800
_08132EB4:
	.4byte 0xFFFFFC00
_08132EB8:
	.4byte 0x00000CF8
_08132EBC:
	.4byte 0x00000D02
_08132EC0:
	.4byte 0x000009E8
_08132EC4:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08132E00


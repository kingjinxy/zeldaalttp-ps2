	THUMB_FUNC_START sub_08132B4C
sub_08132B4C: @ 0x08132B4C
	push {r4-r6,lr}
	sub sp, sp, #4
	ldr r5, _08132B94  @ =gRam
	ldr r0, _08132B98  @ =0x000009E8
	add r6, r5, r0
	ldrh r4, [r6]
	cmp r4, #0
	bne _08132BB4
	mov r0, #53
	mov r1, #0
	bl sub_0812A324
	ldr r0, _08132B9C  @ =gUnknown_02000800
	ldr r1, _08132BA0  @ =gUnknown_02010540
	mov r2, #128
	lsl r2, r2, #2
	bl CpuSet
	mov r1, sp
	ldr r2, _08132BA4  @ =0x00007FFF
	add r0, r2, #0
	strh r0, [r1]
	mov r0, sp
	ldr r1, _08132B9C  @ =gUnknown_02000800
	ldr r2, _08132BA8  @ =0x01000200
	bl CpuSet
	ldr r1, _08132BAC  @ =0x00000CF8
	add r0, r5, r1
	strh r4, [r0]
	ldr r2, _08132BB0  @ =0x00000CFA
	add r1, r5, r2
	mov r0, #2
	strh r0, [r1]
	b _08132BC8
	.byte 0x00
	.byte 0x00
_08132B94:
	.4byte gRam
_08132B98:
	.4byte 0x000009E8
_08132B9C:
	.4byte gUnknown_02000800
_08132BA0:
	.4byte gUnknown_02010540
_08132BA4:
	.4byte 0x00007FFF
_08132BA8:
	.4byte 0x01000200
_08132BAC:
	.4byte 0x00000CF8
_08132BB0:
	.4byte 0x00000CFA
_08132BB4:
	bl sub_08131AF0
	ldr r1, _08132BD0  @ =0x00000CFA
	add r0, r5, r1
	ldrh r4, [r0]
	cmp r4, #255
	bne _08132BD8
	ldr r2, _08132BD4  @ =0x00000CF8
	add r0, r5, r2
	strh r4, [r0]
_08132BC8:
	ldrh r0, [r6]
	add r0, r0, #1
	strh r0, [r6]
	b _08132C0E
_08132BD0:
	.4byte 0x00000CFA
_08132BD4:
	.4byte 0x00000CF8
_08132BD8:
	cmp r4, #0
	bne _08132BF8
	ldr r1, _08132C18  @ =0x00000CF8
	add r0, r5, r1
	ldrh r0, [r0]
	cmp r0, #31
	bne _08132BF8
	ldr r0, _08132C1C  @ =gUnknown_02010540
	ldr r1, _08132C20  @ =gUnknown_02000800
	mov r2, #128
	lsl r2, r2, #2
	bl CpuSet
	ldr r2, _08132C24  @ =0x000009B5
	add r0, r5, r2
	strb r4, [r0]
_08132BF8:
	ldr r0, _08132C28  @ =gRam
	ldr r1, _08132C18  @ =0x00000CF8
	add r0, r0, r1
	ldrh r0, [r0]
	cmp r0, #31
	bne _08132C0E
	ldr r0, _08132C2C  @ =gUnknown_0200BB90
	ldr r1, _08132C30  @ =gUnknown_020008D0
	mov r2, #7
	bl CpuSet
_08132C0E:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08132C18:
	.4byte 0x00000CF8
_08132C1C:
	.4byte gUnknown_02010540
_08132C20:
	.4byte gUnknown_02000800
_08132C24:
	.4byte 0x000009B5
_08132C28:
	.4byte gRam
_08132C2C:
	.4byte gUnknown_0200BB90
_08132C30:
	.4byte gUnknown_020008D0
	THUMB_FUNC_END sub_08132B4C


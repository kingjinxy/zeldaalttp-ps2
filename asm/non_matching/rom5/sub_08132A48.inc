	THUMB_FUNC_START sub_08132A48
sub_08132A48: @ 0x08132A48
	push {r4,r5,lr}
	bl sub_08131AF0
	ldr r5, _08132A8C  @ =gRam
	ldr r1, _08132A90  @ =0x00000CFA
	add r0, r5, r1
	ldrh r4, [r0]
	cmp r4, #255
	bne _08132AA4
	add r4, r5, #0
	mov r3, #0
	ldr r2, _08132A94  @ =gUnknown_02000CB0
	ldr r1, _08132A98  @ =gUnknown_020008B0
	mov r0, #6
_08132A64:
	strh r3, [r1]
	strh r3, [r2]
	add r2, r2, #2
	add r1, r1, #2
	sub r0, r0, #1
	cmp r0, #0
	bge _08132A64
	ldr r3, _08132A9C  @ =0x00000CF8
	add r0, r4, r3
	mov r2, #0
	mov r1, #0
	strh r1, [r0]
	add r3, r3, #2
	add r0, r4, r3
	strh r1, [r0]
	ldr r1, _08132AA0  @ =0x000009AD
	add r0, r4, r1
	strb r2, [r0]
	b _08132AC4
	.byte 0x00
	.byte 0x00
_08132A8C:
	.4byte gRam
_08132A90:
	.4byte 0x00000CFA
_08132A94:
	.4byte gUnknown_02000CB0
_08132A98:
	.4byte gUnknown_020008B0
_08132A9C:
	.4byte 0x00000CF8
_08132AA0:
	.4byte 0x000009AD
_08132AA4:
	cmp r4, #0
	bne _08132AC4
	ldr r3, _08132ACC  @ =0x00000CF8
	add r0, r5, r3
	ldrh r0, [r0]
	cmp r0, #31
	bne _08132AC4
	ldr r0, _08132AD0  @ =gUnknown_02010540
	ldr r1, _08132AD4  @ =gUnknown_02000800
	mov r2, #128
	lsl r2, r2, #2
	bl CpuSet
	ldr r1, _08132AD8  @ =0x000009B5
	add r0, r5, r1
	strb r4, [r0]
_08132AC4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08132ACC:
	.4byte 0x00000CF8
_08132AD0:
	.4byte gUnknown_02010540
_08132AD4:
	.4byte gUnknown_02000800
_08132AD8:
	.4byte 0x000009B5
	THUMB_FUNC_END sub_08132A48


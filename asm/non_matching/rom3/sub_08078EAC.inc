	THUMB_FUNC_START sub_08078EAC
sub_08078EAC: @ 0x08078EAC
	push {r4,r5,lr}
	sub sp, sp, #4
	ldr r4, _08078F28  @ =gRam
	ldr r1, _08078F2C  @ =0x000016F7
	add r0, r4, r1
	mov r5, #0
	mov r1, #128
	strb r1, [r0]
	ldr r2, _08078F30  @ =0x000016F6
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _08078F34  @ =0x000016F4
	add r0, r4, r1
	mov r1, #15
	strb r1, [r0]
	sub r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _08078F38  @ =0x000016C8
	add r1, r4, r0
	mov r0, #255
	strb r0, [r1]
	sub r2, r2, #38
	add r1, r4, r2
	mov r0, #1
	neg r0, r0
	strb r0, [r1]
	ldr r0, _08078F3C  @ =gUnknown_08163430
	ldr r1, _08078F40  @ =gUnknown_020029C0
	mov r2, #128
	lsl r2, r2, #1
	bl CpuSet
	ldr r0, _08078F44  @ =gUnknown_081635D2
	ldr r1, _08078F48  @ =gUnknown_02002BC0
	mov r2, #192
	bl CpuSet
	mov r0, sp
	strh r5, [r0]
	ldr r1, _08078F4C  @ =gUnknown_02002880
	ldr r2, _08078F50  @ =0x01000080
	bl CpuSet
	mov r0, sp
	add r0, r0, #2
	strh r5, [r0]
	ldr r1, _08078F54  @ =gUnknown_02002600
	ldr r2, _08078F58  @ =0x01000140
	bl CpuSet
	ldr r1, _08078F5C  @ =0x00001A56
	add r0, r4, r1
	strh r5, [r0]
	ldr r2, _08078F60  @ =0x00000B64
	add r4, r4, r2
	strh r5, [r4]
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08078F28:
	.4byte gRam
_08078F2C:
	.4byte 0x000016F7
_08078F30:
	.4byte 0x000016F6
_08078F34:
	.4byte 0x000016F4
_08078F38:
	.4byte 0x000016C8
_08078F3C:
	.4byte gUnknown_08163430
_08078F40:
	.4byte gUnknown_020029C0
_08078F44:
	.4byte gUnknown_081635D2
_08078F48:
	.4byte gUnknown_02002BC0
_08078F4C:
	.4byte gUnknown_02002880
_08078F50:
	.4byte 0x01000080
_08078F54:
	.4byte gUnknown_02002600
_08078F58:
	.4byte 0x01000140
_08078F5C:
	.4byte 0x00001A56
_08078F60:
	.4byte 0x00000B64
	THUMB_FUNC_END sub_08078EAC


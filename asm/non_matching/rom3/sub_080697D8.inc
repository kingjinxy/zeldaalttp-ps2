	THUMB_FUNC_START sub_080697D8
sub_080697D8: @ 0x080697D8
	push {r4,lr}
	sub sp, sp, #4
	bl sub_0812A90C
	mov r1, sp
	mov r0, #127
	strh r0, [r1]
	mov r4, #192
	lsl r4, r4, #19
	ldr r2, _08069818  @ =0x0100C000
	mov r0, sp
	add r1, r4, #0
	bl CpuSet
	ldr r0, _0806981C  @ =gRam
	ldr r1, _08069820  @ =0x0000098E
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _08069830
	ldr r0, _08069824  @ =gUnknown_083B0F1C
	add r1, r4, #0
	bl LZ77UnCompVram
	ldr r0, _08069828  @ =gUnknown_083B1A38
	ldr r1, _0806982C  @ =0x06008000
	bl LZ77UnCompVram
	b _08069840
	.byte 0x00
	.byte 0x00
_08069818:
	.4byte 0x0100C000
_0806981C:
	.4byte gRam
_08069820:
	.4byte 0x0000098E
_08069824:
	.4byte gUnknown_083B0F1C
_08069828:
	.4byte gUnknown_083B1A38
_0806982C:
	.4byte 0x06008000
_08069830:
	ldr r0, _0806989C  @ =gUnknown_083B2064
	add r1, r4, #0
	bl LZ77UnCompVram
	ldr r0, _080698A0  @ =gUnknown_083B3154
	ldr r1, _080698A4  @ =0x06008000
	bl LZ77UnCompVram
_08069840:
	ldr r0, _080698A8  @ =gUnknown_083B1998
	ldr r1, _080698AC  @ =gUnknown_02000C00
	mov r2, #40
	bl CpuFastSet
	ldr r1, _080698B0  @ =gRam
	ldr r3, _080698B4  @ =0x0000099B
	add r2, r1, r3
	mov r0, #1
	strb r0, [r2]
	ldr r4, _080698B8  @ =0x0000050C
	add r2, r1, r4
	add r0, r0, #255
	strh r0, [r2]
	ldr r2, _080698BC  @ =0x04000008
	ldr r3, _080698C0  @ =0x0000D001
	add r0, r3, #0
	strh r0, [r2]
	ldr r2, _080698C4  @ =gUnknown_0814C844
	ldr r4, _080698C8  @ =0x00000994
	add r3, r1, r4
	ldrb r0, [r3]
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r2, [r0]
	sub r4, r4, #68
	add r0, r1, r4
	strh r2, [r0]
	ldr r2, _080698CC  @ =gUnknown_0814C852
	ldrb r0, [r3]
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r2, [r0]
	ldr r3, _080698D0  @ =0x00000956
	add r0, r1, r3
	strh r2, [r0]
	add r4, r4, #84
	add r1, r1, r4
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806989C:
	.4byte gUnknown_083B2064
_080698A0:
	.4byte gUnknown_083B3154
_080698A4:
	.4byte 0x06008000
_080698A8:
	.4byte gUnknown_083B1998
_080698AC:
	.4byte gUnknown_02000C00
_080698B0:
	.4byte gRam
_080698B4:
	.4byte 0x0000099B
_080698B8:
	.4byte 0x0000050C
_080698BC:
	.4byte 0x04000008
_080698C0:
	.4byte 0x0000D001
_080698C4:
	.4byte gUnknown_0814C844
_080698C8:
	.4byte 0x00000994
_080698CC:
	.4byte gUnknown_0814C852
_080698D0:
	.4byte 0x00000956
	THUMB_FUNC_END sub_080697D8


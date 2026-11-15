	THUMB_FUNC_START sub_08076440
sub_08076440: @ 0x08076440
	push {lr}
	sub sp, sp, #4
	mov r0, #0
	str r0, [sp]
	mov r0, sp
	ldr r1, _080764B0  @ =gUnknown_02000C00
	ldr r2, _080764B4  @ =0x01000100
	bl CpuFastSet
	ldr r0, _080764B8  @ =gUnknown_02000800
	ldr r1, _080764B0  @ =gUnknown_02000C00
	mov r2, #16
	bl CpuFastSet
	ldr r0, _080764BC  @ =gUnknown_02000900
	ldr r1, _080764C0  @ =gUnknown_02000D00
	mov r2, #1
	bl CpuFastSet
	ldr r0, _080764C4  @ =gUnknown_02000920
	ldr r1, _080764C8  @ =gUnknown_02000D20
	mov r2, #1
	bl CpuFastSet
	ldr r0, _080764CC  @ =gUnknown_02000940
	ldr r1, _080764D0  @ =gUnknown_02000D40
	mov r2, #1
	bl CpuFastSet
	ldr r0, _080764D4  @ =gUnknown_02000960
	ldr r1, _080764D8  @ =gUnknown_02000D60
	mov r2, #1
	bl CpuFastSet
	ldr r0, _080764DC  @ =gUnknown_02000AB0
	ldr r1, _080764E0  @ =gUnknown_02000EB0
	mov r2, #8
	bl CpuSet
	ldr r0, _080764E4  @ =gUnknown_02000AE0
	ldr r1, _080764E8  @ =gUnknown_02000EE0
	mov r2, #4
	bl CpuFastSet
	ldr r1, _080764EC  @ =gRam
	ldr r0, _080764F0  @ =0x00000D02
	add r2, r1, r0
	mov r0, #247
	strh r0, [r2]
	ldr r0, _080764F4  @ =0x0000099B
	add r1, r1, r0
	mov r0, #1
	strb r0, [r1]
	add sp, sp, #4
	pop {r0}
	bx r0
_080764B0:
	.4byte gUnknown_02000C00
_080764B4:
	.4byte 0x01000100
_080764B8:
	.4byte gUnknown_02000800
_080764BC:
	.4byte gUnknown_02000900
_080764C0:
	.4byte gUnknown_02000D00
_080764C4:
	.4byte gUnknown_02000920
_080764C8:
	.4byte gUnknown_02000D20
_080764CC:
	.4byte gUnknown_02000940
_080764D0:
	.4byte gUnknown_02000D40
_080764D4:
	.4byte gUnknown_02000960
_080764D8:
	.4byte gUnknown_02000D60
_080764DC:
	.4byte gUnknown_02000AB0
_080764E0:
	.4byte gUnknown_02000EB0
_080764E4:
	.4byte gUnknown_02000AE0
_080764E8:
	.4byte gUnknown_02000EE0
_080764EC:
	.4byte gRam
_080764F0:
	.4byte 0x00000D02
_080764F4:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08076440


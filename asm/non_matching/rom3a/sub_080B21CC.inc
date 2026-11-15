	THUMB_FUNC_START sub_080B21CC
sub_080B21CC: @ 0x080B21CC
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	sub sp, sp, #8
	bl sub_08069E08
	mov r0, #0
	bl sub_080B1B18
	ldr r4, _080B2298  @ =gRam
	mov r1, #202
	lsl r1, r1, #4
	add r0, r4, r1
	ldrb r1, [r0]
	mov r2, #0
	mov r8, r2
	mov r5, #0
	strh r1, [r0]
	ldr r1, _080B229C  @ =0x00000CAA
	add r0, r4, r1
	mov r2, r8
	strb r2, [r0]
	bl sub_0812E8DC
	bl sub_080AA7FC
	ldr r0, _080B22A0  @ =0x00FC00FC
	str r0, [sp]
	ldr r1, _080B22A4  @ =gUnknown_02001600
	ldr r6, _080B22A8  @ =0x01000080
	mov r0, sp
	add r2, r6, #0
	bl CpuFastSet
	ldr r0, _080B22AC  @ =gUnknown_02010540
	ldr r1, _080B22B0  @ =gUnknown_02000800
	mov r2, #128
	lsl r2, r2, #2
	bl CpuSet
	str r5, [sp, #4]
	add r0, sp, #4
	ldr r1, _080B22B4  @ =gUnknown_02000C00
	add r2, r6, #0
	bl CpuFastSet
	ldr r0, _080B22B8  @ =0x0000099B
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080B22BC  @ =0x000009EA
	add r2, r4, r1
	ldrh r1, [r2]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r1
	strh r0, [r2]
	ldr r2, _080B22C0  @ =0x00000A4C
	add r0, r4, r2
	strh r5, [r0]
	ldr r1, _080B22C4  @ =0x000009E8
	add r0, r4, r1
	strh r5, [r0]
	sub r2, r2, #50
	add r0, r4, r2
	ldrh r1, [r0]
	sub r2, r2, #110
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _080B22C8  @ =0x000009AD
	add r1, r4, r0
	mov r0, #32
	strb r0, [r1]
	ldr r0, _080B22CC  @ =gUnknown_02000400
	mov r1, r8
	strb r1, [r0]
	add r0, r0, #1
	strb r1, [r0]
	ldr r2, _080B22D0  @ =0x00001ABA
	add r0, r4, r2
	ldrh r1, [r0]
	ldr r2, _080B22D4  @ =0x000009D5
	add r0, r4, r2
	strb r1, [r0]
	mov r0, #66
	mov r1, #0
	bl sub_0812A324
	ldr r0, _080B22D8  @ =0x00000A3C
	add r4, r4, r0
	ldr r0, _080B22DC  @ =0x0000FFF3
	strh r0, [r4]
	bl sub_0806BDA4
	add sp, sp, #8
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B2298:
	.4byte gRam
_080B229C:
	.4byte 0x00000CAA
_080B22A0:
	.4byte 0x00FC00FC
_080B22A4:
	.4byte gUnknown_02001600
_080B22A8:
	.4byte 0x01000080
_080B22AC:
	.4byte gUnknown_02010540
_080B22B0:
	.4byte gUnknown_02000800
_080B22B4:
	.4byte gUnknown_02000C00
_080B22B8:
	.4byte 0x0000099B
_080B22BC:
	.4byte 0x000009EA
_080B22C0:
	.4byte 0x00000A4C
_080B22C4:
	.4byte 0x000009E8
_080B22C8:
	.4byte 0x000009AD
_080B22CC:
	.4byte gUnknown_02000400
_080B22D0:
	.4byte 0x00001ABA
_080B22D4:
	.4byte 0x000009D5
_080B22D8:
	.4byte 0x00000A3C
_080B22DC:
	.4byte 0x0000FFF3
	THUMB_FUNC_END sub_080B21CC


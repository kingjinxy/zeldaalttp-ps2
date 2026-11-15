	THUMB_FUNC_START sub_080B22E0
sub_080B22E0: @ 0x080B22E0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	ldr r4, _080B23B0  @ =gRam
	ldr r0, _080B23B4  @ =gUnknown_03002BDC
	ldrb r0, [r0]
	mov r10, r0
	ldr r1, _080B23B8  @ =0x000009AD
	add r1, r1, r4
	mov r9, r1
	ldrb r7, [r1]
	bl sub_08069E08
	mov r0, #0
	bl sub_080B1B18
	mov r2, #202
	lsl r2, r2, #4
	add r0, r4, r2
	ldrb r1, [r0]
	mov r2, #0
	mov r8, r2
	mov r6, #0
	strh r1, [r0]
	ldr r1, _080B23BC  @ =0x00000CAA
	add r0, r4, r1
	mov r2, r8
	strb r2, [r0]
	bl sub_0812E8DC
	bl sub_080AA7FC
	ldr r0, _080B23C0  @ =0x00FC00FC
	str r0, [sp]
	ldr r1, _080B23C4  @ =gUnknown_02001600
	ldr r5, _080B23C8  @ =0x01000080
	mov r0, sp
	add r2, r5, #0
	bl CpuFastSet
	ldr r0, _080B23CC  @ =gUnknown_02010540
	ldr r1, _080B23D0  @ =gUnknown_02000800
	mov r2, #128
	lsl r2, r2, #2
	bl CpuSet
	str r6, [sp, #4]
	add r0, sp, #4
	ldr r1, _080B23D4  @ =gUnknown_02000C00
	add r2, r5, #0
	bl CpuFastSet
	ldr r0, _080B23D8  @ =0x0000099B
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080B23DC  @ =0x000009EA
	add r2, r4, r1
	ldrh r1, [r2]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r1
	strh r0, [r2]
	ldr r2, _080B23E0  @ =0x00001ABA
	add r0, r4, r2
	ldrh r1, [r0]
	ldr r2, _080B23E4  @ =0x000009D5
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _080B23E8  @ =0x00000A3C
	add r1, r4, r0
	ldr r0, _080B23EC  @ =0x0000FFF3
	strh r0, [r1]
	bl sub_0806BDA4
	bl sub_08072F1C
	bl sub_08077064
	mov r2, r10
	ldr r1, _080B23B4  @ =gUnknown_03002BDC
	strb r2, [r1]
	mov r0, r9
	strb r7, [r0]
	ldr r2, _080B23F0  @ =0x00000A4C
	add r1, r4, r2
	mov r0, #9
	strh r0, [r1]
	ldr r0, _080B23F4  @ =0x0000099D
	add r4, r4, r0
	mov r1, r8
	strb r1, [r4]
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080B23B0:
	.4byte gRam
_080B23B4:
	.4byte gUnknown_03002BDC
_080B23B8:
	.4byte 0x000009AD
_080B23BC:
	.4byte 0x00000CAA
_080B23C0:
	.4byte 0x00FC00FC
_080B23C4:
	.4byte gUnknown_02001600
_080B23C8:
	.4byte 0x01000080
_080B23CC:
	.4byte gUnknown_02010540
_080B23D0:
	.4byte gUnknown_02000800
_080B23D4:
	.4byte gUnknown_02000C00
_080B23D8:
	.4byte 0x0000099B
_080B23DC:
	.4byte 0x000009EA
_080B23E0:
	.4byte 0x00001ABA
_080B23E4:
	.4byte 0x000009D5
_080B23E8:
	.4byte 0x00000A3C
_080B23EC:
	.4byte 0x0000FFF3
_080B23F0:
	.4byte 0x00000A4C
_080B23F4:
	.4byte 0x0000099D
	THUMB_FUNC_END sub_080B22E0


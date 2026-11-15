	THUMB_FUNC_START sub_080B6F1C
sub_080B6F1C: @ 0x080B6F1C
	push {r4-r6,lr}
	sub sp, sp, #8
	ldr r6, _080B6F38  @ =gRam
	ldr r1, _080B6F3C  @ =0x00000BB4
	add r0, r6, r1
	ldrb r5, [r0]
	cmp r5, #0
	beq _080B6F7C
	cmp r5, #7
	bhi _080B6F40
	bl sub_08069F08
	b _080B6F48
	.byte 0x00
	.byte 0x00
_080B6F38:
	.4byte gRam
_080B6F3C:
	.4byte 0x00000BB4
_080B6F40:
	ldr r0, _080B6F6C  @ =0x0000099D
	add r1, r6, r0
	mov r0, #0
	strb r0, [r1]
_080B6F48:
	ldr r1, _080B6F70  @ =gUnknown_02006885
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080B6FC2
	mov r0, #2
	strb r0, [r1]
	ldr r1, _080B6F74  @ =gRam
	ldr r0, _080B6F78  @ =0x00000BB4
	add r1, r1, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	bl sub_080B7EA4
	b _080B6FC2
_080B6F6C:
	.4byte 0x0000099D
_080B6F70:
	.4byte gUnknown_02006885
_080B6F74:
	.4byte gRam
_080B6F78:
	.4byte 0x00000BB4
_080B6F7C:
	ldr r1, _080B6FCC  @ =gUnknown_02006883
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	sub r1, r1, #1
	ldrb r0, [r1]
	sub r0, r0, #2
	strb r0, [r1]
	bl sub_08069E08
	ldr r0, _080B6FD0  @ =0x00FC00FC
	str r0, [sp]
	ldr r1, _080B6FD4  @ =gUnknown_02001600
	ldr r4, _080B6FD8  @ =0x01000080
	mov r0, sp
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080B6FDC  @ =gUnknown_02010540
	ldr r1, _080B6FE0  @ =gUnknown_02000800
	mov r2, #128
	lsl r2, r2, #2
	bl CpuSet
	str r5, [sp, #4]
	add r0, sp, #4
	ldr r1, _080B6FE4  @ =gUnknown_02000C00
	add r2, r4, #0
	bl CpuFastSet
	ldr r0, _080B6FE8  @ =0x0000099B
	add r1, r6, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080B6FC2:
	add sp, sp, #8
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B6FCC:
	.4byte gUnknown_02006883
_080B6FD0:
	.4byte 0x00FC00FC
_080B6FD4:
	.4byte gUnknown_02001600
_080B6FD8:
	.4byte 0x01000080
_080B6FDC:
	.4byte gUnknown_02010540
_080B6FE0:
	.4byte gUnknown_02000800
_080B6FE4:
	.4byte gUnknown_02000C00
_080B6FE8:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_080B6F1C


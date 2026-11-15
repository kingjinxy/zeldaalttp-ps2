	THUMB_FUNC_START sub_0806B204
sub_0806B204: @ 0x0806B204
	push {r4-r6,lr}
	sub sp, sp, #4
	bl sub_08069F08
	ldr r5, _0806B29C  @ =gRam
	ldr r1, _0806B2A0  @ =0x0000099D
	add r0, r5, r1
	mov r6, #0
	ldrsb r6, [r0, r6]
	cmp r6, #0
	bne _0806B294
	ldr r2, _0806B2A4  @ =0x00000A2A
	add r0, r5, r2
	mov r4, #0
	strh r6, [r0]
	add r1, r1, #139
	add r0, r5, r1
	strh r6, [r0]
	ldr r2, _0806B2A8  @ =0x000016D6
	add r0, r5, r2
	strb r4, [r0]
	ldr r1, _0806B2AC  @ =0x00001770
	add r0, r5, r1
	strb r4, [r0]
	bl sub_08133600
	ldr r2, _0806B2B0  @ =0x00001718
	add r0, r5, r2
	strb r4, [r0]
	ldr r1, _0806B2B4  @ =0x0000180D
	add r0, r5, r1
	strb r4, [r0]
	add r2, r2, #71
	add r0, r5, r2
	strb r4, [r0]
	sub r1, r1, #176
	add r0, r5, r1
	strb r4, [r0]
	ldr r2, _0806B2B8  @ =0x00000A1A
	add r0, r5, r2
	ldrh r1, [r0]
	sub r2, r2, #110
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _0806B2BC  @ =0x000009AD
	add r0, r5, r1
	strb r4, [r0]
	add r2, r2, #60
	add r0, r5, r2
	strh r6, [r0]
	bl sub_0806A948
	ldr r1, _0806B2C0  @ =0x0000099B
	add r0, r5, r1
	strb r4, [r0]
	mov r1, sp
	ldr r2, _0806B2C4  @ =0x000001E3
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _0806B2C8  @ =0x0600A000
	ldr r2, _0806B2CC  @ =0x01003000
	mov r0, sp
	bl CpuSet
	mov r0, sp
	add r0, r0, #2
	mov r1, #127
	strh r1, [r0]
	ldr r1, _0806B2D0  @ =0x06008000
	ldr r2, _0806B2D4  @ =0x01001000
	bl CpuSet
_0806B294:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_0806B29C:
	.4byte gRam
_0806B2A0:
	.4byte 0x0000099D
_0806B2A4:
	.4byte 0x00000A2A
_0806B2A8:
	.4byte 0x000016D6
_0806B2AC:
	.4byte 0x00001770
_0806B2B0:
	.4byte 0x00001718
_0806B2B4:
	.4byte 0x0000180D
_0806B2B8:
	.4byte 0x00000A1A
_0806B2BC:
	.4byte 0x000009AD
_0806B2C0:
	.4byte 0x0000099B
_0806B2C4:
	.4byte 0x000001E3
_0806B2C8:
	.4byte 0x0600A000
_0806B2CC:
	.4byte 0x01003000
_0806B2D0:
	.4byte 0x06008000
_0806B2D4:
	.4byte 0x01001000
	THUMB_FUNC_END sub_0806B204


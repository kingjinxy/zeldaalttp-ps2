	THUMB_FUNC_START sub_08133534
sub_08133534: @ 0x08133534
	push {lr}
	sub sp, sp, #4
	mov r1, sp
	ldr r2, _08133574  @ =0x00007FFF
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _08133578  @ =gUnknown_02000800
	ldr r2, _0813357C  @ =0x01000200
	mov r0, sp
	bl CpuSet
	ldr r1, _08133580  @ =gRam
	ldr r0, _08133584  @ =0x00000CF8
	add r2, r1, r0
	mov r3, #0
	mov r0, #0
	strh r0, [r2]
	ldr r0, _08133588  @ =0x00000CFA
	add r2, r1, r0
	mov r0, #2
	strh r0, [r2]
	ldr r0, _0813358C  @ =0x00000C85
	add r2, r1, r0
	mov r0, #8
	strb r0, [r2]
	ldr r2, _08133590  @ =0x00000C84
	add r1, r1, r2
	strb r3, [r1]
	add sp, sp, #4
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08133574:
	.4byte 0x00007FFF
_08133578:
	.4byte gUnknown_02000800
_0813357C:
	.4byte 0x01000200
_08133580:
	.4byte gRam
_08133584:
	.4byte 0x00000CF8
_08133588:
	.4byte 0x00000CFA
_0813358C:
	.4byte 0x00000C85
_08133590:
	.4byte 0x00000C84
	THUMB_FUNC_END sub_08133534


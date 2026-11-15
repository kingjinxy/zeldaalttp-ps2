	THUMB_FUNC_START sub_0800C41C
sub_0800C41C: @ 0x0800C41C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	ldr r5, _0800C4B0  @ =0x04000208
	mov r2, #0
	strh r2, [r5]
	ldr r4, _0800C4B4  @ =0x04000200
	ldrh r1, [r4]
	ldr r0, _0800C4B8  @ =0x0000FF3F
	and r0, r0, r1
	strh r0, [r4]
	mov r0, #1
	mov r8, r0
	strh r0, [r5]
	ldr r0, _0800C4BC  @ =0x04000134
	strh r2, [r0]
	ldr r2, _0800C4C0  @ =0x04000128
	mov r1, #128
	lsl r1, r1, #6
	add r0, r1, #0
	strh r0, [r2]
	ldrh r0, [r2]
	ldr r3, _0800C4C4  @ =0x00004003
	add r1, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	mov r6, #0
	str r6, [sp]
	ldr r7, _0800C4C8  @ =gUnknown_02030790
	ldr r2, _0800C4CC  @ =0x0500006E
	mov r0, sp
	add r1, r7, #0
	bl CpuSet
	ldr r0, _0800C4D0  @ =0x08000318
	ldr r1, _0800C4D4  @ =gUnknown_02030950
	ldr r2, _0800C4D8  @ =0x04000010
	bl CpuSet
	ldr r0, _0800C4DC  @ =0x0800C7E9
	ldr r1, _0800C4E0  @ =gUnknown_02030590
	ldr r2, _0800C4E4  @ =0x04000080
	bl CpuSet
	mov r0, #13
	str r0, [r7, #20]
	str r0, [r7, #24]
	add r0, r7, #0
	add r0, r0, #48
	str r0, [r7, #28]
	add r0, r0, #28
	str r0, [r7, #32]
	add r0, r0, #28
	str r0, [r7, #36]
	add r0, r0, #112
	str r0, [r7, #40]
	mov r1, #164
	lsl r1, r1, #1
	add r0, r7, r1
	str r0, [r7, #44]
	strh r6, [r5]
	ldrh r0, [r4]
	mov r1, #128
	orr r0, r0, r1
	strh r0, [r4]
	mov r3, r8
	strh r3, [r5]
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_0800C4B0:
	.4byte 0x04000208
_0800C4B4:
	.4byte 0x04000200
_0800C4B8:
	.4byte 0x0000FF3F
_0800C4BC:
	.4byte 0x04000134
_0800C4C0:
	.4byte 0x04000128
_0800C4C4:
	.4byte 0x00004003
_0800C4C8:
	.4byte gUnknown_02030790
_0800C4CC:
	.4byte 0x0500006E
_0800C4D0:
	.4byte 0x08000318
_0800C4D4:
	.4byte gUnknown_02030950
_0800C4D8:
	.4byte 0x04000010
_0800C4DC:
	.4byte 0x0800C7E9
_0800C4E0:
	.4byte gUnknown_02030590
_0800C4E4:
	.4byte 0x04000080
	THUMB_FUNC_END sub_0800C41C


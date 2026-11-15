	THUMB_FUNC_START sub_0812D338
sub_0812D338: @ 0x0812D338
	push {r4-r6,lr}
	sub sp, sp, #4
	mov r4, #0
	str r4, [sp]
	ldr r5, _0812D3E8  @ =gUnknown_02000C00
	ldr r2, _0812D3EC  @ =0x01000080
	mov r0, sp
	add r1, r5, #0
	bl CpuFastSet
	ldr r0, _0812D3F0  @ =gRam
	ldr r1, _0812D3F4  @ =0x00000CAA
	add r0, r0, r1
	strb r4, [r0]
	bl sub_08130384
	ldr r0, _0812D3F8  @ =gUnknown_02000800
	add r1, r5, #0
	mov r2, #32
	bl CpuSet
	ldr r5, _0812D3FC  @ =gUnknown_083B556C
	ldr r6, _0812D400  @ =gUnknown_02000840
	mov r4, #127
_0812D368:
	ldrh r0, [r5]
	bl sub_08133468
	strh r0, [r6]
	add r5, r5, #2
	add r6, r6, #2
	sub r4, r4, #1
	cmp r4, #0
	bge _0812D368
	ldr r5, _0812D404  @ =gUnknown_0822B048
	ldr r6, _0812D408  @ =gUnknown_020009A0
	mov r4, #15
_0812D380:
	ldrh r0, [r5]
	bl sub_08133468
	strh r0, [r6]
	add r5, r5, #2
	add r6, r6, #2
	sub r4, r4, #1
	cmp r4, #0
	bge _0812D380
	ldr r5, _0812D40C  @ =gUnknown_083B566C
	ldr r6, _0812D410  @ =gUnknown_02000A00
	mov r4, #111
_0812D398:
	ldrh r0, [r5]
	bl sub_08133468
	strh r0, [r6]
	add r5, r5, #2
	add r6, r6, #2
	sub r4, r4, #1
	cmp r4, #0
	bge _0812D398
	ldr r1, _0812D3F0  @ =gRam
	ldr r3, _0812D414  @ =0x00000CFA
	add r2, r1, r3
	mov r4, #0
	mov r3, #0
	mov r0, #2
	strh r0, [r2]
	ldr r0, _0812D418  @ =0x00000CF8
	add r2, r1, r0
	mov r0, #31
	strh r0, [r2]
	ldr r2, _0812D41C  @ =0x00000CFC
	add r0, r1, r2
	strh r3, [r0]
	sub r2, r2, #94
	add r0, r1, r2
	strh r3, [r0]
	ldr r2, _0812D420  @ =gUnknown_02000EE2
	ldr r3, _0812D424  @ =0x00007FFF
	add r0, r3, #0
	strh r0, [r2]
	ldr r0, _0812D428  @ =0x0000099B
	add r1, r1, r0
	mov r0, #1
	strb r0, [r1]
	ldr r0, _0812D42C  @ =gUnknown_02006880
	strb r4, [r0]
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_0812D3E8:
	.4byte gUnknown_02000C00
_0812D3EC:
	.4byte 0x01000080
_0812D3F0:
	.4byte gRam
_0812D3F4:
	.4byte 0x00000CAA
_0812D3F8:
	.4byte gUnknown_02000800
_0812D3FC:
	.4byte gUnknown_083B556C
_0812D400:
	.4byte gUnknown_02000840
_0812D404:
	.4byte gUnknown_0822B048
_0812D408:
	.4byte gUnknown_020009A0
_0812D40C:
	.4byte gUnknown_083B566C
_0812D410:
	.4byte gUnknown_02000A00
_0812D414:
	.4byte 0x00000CFA
_0812D418:
	.4byte 0x00000CF8
_0812D41C:
	.4byte 0x00000CFC
_0812D420:
	.4byte gUnknown_02000EE2
_0812D424:
	.4byte 0x00007FFF
_0812D428:
	.4byte 0x0000099B
_0812D42C:
	.4byte gUnknown_02006880
	THUMB_FUNC_END sub_0812D338


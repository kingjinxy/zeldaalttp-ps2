	THUMB_FUNC_START sub_080A7A48
sub_080A7A48: @ 0x080A7A48
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	ldr r2, _080A7AE0  @ =gUnknown_02000400
	mov r8, r2
	ldrh r5, [r2]
	ldr r2, _080A7AE4  @ =gRam
	ldr r3, _080A7AE8  @ =0x00000964
	add r2, r2, r3
	mov r4, #0
	ldrsh r2, [r2, r4]
	lsl r3, r2, #2
	lsl r2, r2, #1
	add r3, r3, r2
	lsl r3, r3, #1
	add r0, r0, r3
	lsl r3, r5, #1
	ldr r6, _080A7AEC  @ =gUnknown_02000402
	add r4, r3, r6
	ldr r6, _080A7AF0  @ =0xFFFF8000
	add r2, r1, r6
	strh r2, [r4]
	ldr r4, _080A7AF4  @ =gUnknown_02000404
	add r2, r3, r4
	ldr r4, _080A7AF8  @ =0x00008003
	add r6, r4, #0
	strh r6, [r2]
	ldr r2, _080A7AFC  @ =gUnknown_02000406
	add r4, r3, r2
	ldrh r2, [r0]
	strh r2, [r4]
	add r0, r0, #2
	ldr r2, _080A7B00  @ =gUnknown_02000408
	add r4, r3, r2
	ldrh r2, [r0]
	strh r2, [r4]
	add r0, r0, #2
	ldr r2, _080A7B04  @ =gUnknown_0200040A
	add r4, r3, r2
	ldrh r2, [r0]
	strh r2, [r4]
	add r0, r0, #2
	ldr r4, _080A7B08  @ =gUnknown_0200040C
	add r2, r3, r4
	ldr r4, _080A7B0C  @ =0xFFFF8002
	add r1, r1, r4
	strh r1, [r2]
	ldr r2, _080A7B10  @ =gUnknown_0200040E
	add r1, r3, r2
	strh r6, [r1]
	ldr r4, _080A7B14  @ =gUnknown_02000410
	add r2, r3, r4
	ldrh r1, [r0]
	strh r1, [r2]
	add r0, r0, #2
	ldr r6, _080A7B18  @ =gUnknown_02000412
	add r2, r3, r6
	ldrh r1, [r0]
	strh r1, [r2]
	ldr r2, _080A7B1C  @ =gUnknown_02000414
	add r1, r3, r2
	ldrh r0, [r0, #2]
	strh r0, [r1]
	add r4, r4, #6
	add r3, r3, r4
	ldr r6, _080A7B20  @ =0x0000FFFF
	add r0, r6, #0
	strh r0, [r3]
	add r5, r5, #10
	mov r0, r8
	strh r5, [r0]
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
_080A7AE0:
	.4byte gUnknown_02000400
_080A7AE4:
	.4byte gRam
_080A7AE8:
	.4byte 0x00000964
_080A7AEC:
	.4byte gUnknown_02000402
_080A7AF0:
	.4byte 0xFFFF8000
_080A7AF4:
	.4byte gUnknown_02000404
_080A7AF8:
	.4byte 0x00008003
_080A7AFC:
	.4byte gUnknown_02000406
_080A7B00:
	.4byte gUnknown_02000408
_080A7B04:
	.4byte gUnknown_0200040A
_080A7B08:
	.4byte gUnknown_0200040C
_080A7B0C:
	.4byte 0xFFFF8002
_080A7B10:
	.4byte gUnknown_0200040E
_080A7B14:
	.4byte gUnknown_02000410
_080A7B18:
	.4byte gUnknown_02000412
_080A7B1C:
	.4byte gUnknown_02000414
_080A7B20:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_080A7A48


	THUMB_FUNC_START sub_080B1504
sub_080B1504: @ 0x080B1504
	push {r4,r5,lr}
	sub sp, sp, #4
	ldr r0, _080B1578  @ =gHeartsFiller
	ldrb r5, [r0]
	cmp r5, #0
	bne _080B1568
	ldr r0, _080B157C  @ =gUnknown_02010540
	ldr r1, _080B1580  @ =gUnknown_02000800
	mov r2, #128
	lsl r2, r2, #2
	bl CpuSet
	ldr r4, _080B1584  @ =gRam
	ldr r1, _080B1588  @ =0x0000051C
	add r0, r4, r1
	strh r5, [r0]
	ldr r0, _080B158C  @ =0x00FC00FC
	str r0, [sp]
	ldr r1, _080B1590  @ =gUnknown_02001600
	ldr r2, _080B1594  @ =0x01000080
	mov r0, sp
	bl CpuFastSet
	mov r0, #1
	bl sub_0806BD6C
	ldr r2, _080B1598  @ =0x00000CF8
	add r0, r4, r2
	strh r5, [r0]
	ldr r0, _080B159C  @ =0x00000CFA
	add r1, r4, r0
	mov r0, #2
	strh r0, [r1]
	ldr r1, _080B15A0  @ =0x00001ABC
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _080B15A4  @ =0x000009D3
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _080B15A8  @ =0x00001ABD
	add r0, r4, r1
	ldrb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _080B15AC  @ =0x000009AD
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_080B1568:
	bl sub_080B06A8
	bl sub_080AA6D8
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_080B1578:
	.4byte gHeartsFiller
_080B157C:
	.4byte gUnknown_02010540
_080B1580:
	.4byte gUnknown_02000800
_080B1584:
	.4byte gRam
_080B1588:
	.4byte 0x0000051C
_080B158C:
	.4byte 0x00FC00FC
_080B1590:
	.4byte gUnknown_02001600
_080B1594:
	.4byte 0x01000080
_080B1598:
	.4byte 0x00000CF8
_080B159C:
	.4byte 0x00000CFA
_080B15A0:
	.4byte 0x00001ABC
_080B15A4:
	.4byte 0x000009D3
_080B15A8:
	.4byte 0x00001ABD
_080B15AC:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080B1504


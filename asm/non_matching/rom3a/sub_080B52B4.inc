	THUMB_FUNC_START sub_080B52B4
sub_080B52B4: @ 0x080B52B4
	push {r4,r5,lr}
	bl sub_0812E8DC
	ldr r4, _080B5324  @ =gRam
	mov r1, #202
	lsl r1, r1, #4
	add r0, r4, r1
	mov r1, #0
	mov r5, #0
	strh r5, [r0]
	ldr r2, _080B5328  @ =0x00000CAA
	add r0, r4, r2
	strb r1, [r0]
	bl sub_080AA7FC
	ldr r1, _080B532C  @ =0x00000ABE
	add r0, r4, r1
	strh r5, [r0]
	ldr r2, _080B5330  @ =0x00000B04
	add r4, r4, r2
	strh r5, [r4]
_080B52DE:
	bl sub_08079338
	bl sub_080792A4
	ldrh r0, [r4]
	cmp r0, #16
	bne _080B52DE
	ldr r4, _080B5324  @ =gRam
	ldr r1, _080B5334  @ =0x000009AF
	add r0, r4, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _080B5338  @ =0x000009E8
	add r0, r4, r2
	strh r1, [r0]
	ldr r0, _080B533C  @ =gUnknown_02010540
	ldr r1, _080B5340  @ =gUnknown_02000800
	mov r2, #128
	lsl r2, r2, #2
	bl CpuSet
	ldr r0, _080B5344  @ =0x00000A3C
	add r1, r4, r0
	ldr r0, _080B5348  @ =0x0000FFF3
	strh r0, [r1]
	bl sub_08070C24
	ldr r1, _080B534C  @ =0x00000A4C
	add r4, r4, r1
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	pop {r4,r5}
	pop {r0}
	bx r0
_080B5324:
	.4byte gRam
_080B5328:
	.4byte 0x00000CAA
_080B532C:
	.4byte 0x00000ABE
_080B5330:
	.4byte 0x00000B04
_080B5334:
	.4byte 0x000009AF
_080B5338:
	.4byte 0x000009E8
_080B533C:
	.4byte gUnknown_02010540
_080B5340:
	.4byte gUnknown_02000800
_080B5344:
	.4byte 0x00000A3C
_080B5348:
	.4byte 0x0000FFF3
_080B534C:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_080B52B4


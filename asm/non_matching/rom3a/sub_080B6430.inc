	THUMB_FUNC_START sub_080B6430
sub_080B6430: @ 0x080B6430
	push {r4-r6,lr}
	sub sp, sp, #8
	ldr r4, _080B6478  @ =gRam
	ldr r0, _080B647C  @ =0x0000099D
	add r1, r4, r0
	mov r0, #0
	strb r0, [r1]
	ldr r0, _080B6480  @ =gUnknown_02000800
	ldr r1, _080B6484  @ =gUnknown_02010540
	mov r2, #128
	lsl r2, r2, #2
	bl CpuSet
	ldr r5, _080B6488  @ =gUnknown_02000200
	str r5, [sp]
	ldr r1, _080B648C  @ =gUnknown_02003080
	ldr r6, _080B6490  @ =0x01000400
	mov r0, sp
	add r2, r6, #0
	bl CpuFastSet
	str r5, [sp, #4]
	add r0, sp, #4
	ldr r1, _080B6494  @ =gUnknown_02004080
	add r2, r6, #0
	bl CpuFastSet
	ldr r0, _080B6498  @ =0x00000A4C
	add r4, r4, r0
	ldrh r0, [r4]
	add r0, r0, #1
	strh r0, [r4]
	add sp, sp, #8
	pop {r4-r6}
	pop {r0}
	bx r0
_080B6478:
	.4byte gRam
_080B647C:
	.4byte 0x0000099D
_080B6480:
	.4byte gUnknown_02000800
_080B6484:
	.4byte gUnknown_02010540
_080B6488:
	.4byte gUnknown_02000200
_080B648C:
	.4byte gUnknown_02003080
_080B6490:
	.4byte 0x01000400
_080B6494:
	.4byte gUnknown_02004080
_080B6498:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_080B6430


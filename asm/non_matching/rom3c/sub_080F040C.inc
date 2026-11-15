	THUMB_FUNC_START sub_080F040C
sub_080F040C: @ 0x080F040C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080F0470  @ =gRam
	ldr r0, _080F0474  @ =0x00000FA2
	add r6, r5, r0
	add r1, r4, r6
	mov r0, #0
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080F04D8
	lsl r0, r0, #24
	asr r2, r0, #24
	cmp r2, #0
	blt _080F046A
	add r1, r2, r6
	mov r0, #6
	strb r0, [r1]
	ldr r1, _080F0478  @ =0x00000F82
	add r0, r5, r1
	add r0, r2, r0
	mov r1, #2
	strb r1, [r0]
	ldr r3, _080F047C  @ =0x00001122
	add r0, r5, r3
	add r0, r2, r0
	strb r1, [r0]
	ldr r1, _080F0480  @ =0x00001132
	add r0, r5, r1
	add r0, r2, r0
	mov r1, #9
	strb r1, [r0]
	ldr r3, _080F0484  @ =0x00000FD2
	add r0, r5, r3
	add r0, r2, r0
	mov r1, #31
	strb r1, [r0]
	ldr r1, _080F0488  @ =0x00001012
	add r0, r5, r1
	add r0, r2, r0
	mov r1, #3
	strb r1, [r0]
	add r0, r4, #0
	mov r1, #41
	bl sub_080CF0AC
_080F046A:
	pop {r4-r6}
	pop {r0}
	bx r0
_080F0470:
	.4byte gRam
_080F0474:
	.4byte 0x00000FA2
_080F0478:
	.4byte 0x00000F82
_080F047C:
	.4byte 0x00001122
_080F0480:
	.4byte 0x00001132
_080F0484:
	.4byte 0x00000FD2
_080F0488:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080F040C


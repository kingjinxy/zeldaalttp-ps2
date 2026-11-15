	THUMB_FUNC_START sub_080CC6DC
sub_080CC6DC: @ 0x080CC6DC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r3, _080CC834  @ =gRam
	ldr r1, _080CC838  @ =0x00000D23
	add r0, r3, r1
	add r0, r7, r0
	ldrb r0, [r0]
	mov r4, #150
	lsl r4, r4, #4
	add r2, r3, r4
	strb r0, [r2]
	ldr r5, _080CC83C  @ =0x00000D2B
	add r0, r3, r5
	add r0, r7, r0
	ldrb r1, [r0]
	add r4, r4, #1
	add r0, r3, r4
	strb r1, [r0]
	add r5, r5, #8
	add r0, r3, r5
	add r0, r7, r0
	ldrb r0, [r0]
	ldr r1, _080CC840  @ =0x00000964
	add r4, r3, r1
	strb r0, [r4]
	add r5, r5, #8
	add r0, r3, r5
	add r0, r7, r0
	ldrb r1, [r0]
	ldr r5, _080CC844  @ =0x00000965
	add r0, r3, r5
	strb r1, [r0]
	ldr r0, _080CC848  @ =0x000016C4
	add r1, r3, r0
	ldrh r0, [r2]
	ldrh r1, [r1]
	sub r0, r0, r1
	add r0, r0, #24
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #47
	bhi _080CC82A
	mov r1, #182
	lsl r1, r1, #5
	add r0, r3, r1
	ldrh r1, [r4]
	ldrh r0, [r0]
	sub r1, r1, r0
	add r1, r1, #24
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #47
	bhi _080CC82A
	ldr r2, _080CC84C  @ =0x00000D1B
	add r0, r3, r2
	add r0, r7, r0
	mov r1, #0
	strb r1, [r0]
	mov r4, #3
	add r6, r3, #0
	ldr r5, _080CC850  @ =0x00000FB2
	add r5, r5, r6
	mov r8, r5
_080CC760:
	mov r0, #167
	add r1, r7, #0
	mov r2, #12
	bl sub_080C9AAC
	add r5, r0, #0
	lsl r4, r4, #24
	mov r12, r4
	cmp r5, #0
	blt _080CC81E
	ldr r1, _080CC848  @ =0x000016C4
	add r0, r6, r1
	ldrb r3, [r0]
	ldr r2, _080CC854  @ =0x000016C5
	add r0, r6, r2
	mov r1, #0
	ldrsb r1, [r0, r1]
	lsl r1, r1, #8
	ldr r0, _080CC858  @ =gUnknown_08172A10
	asr r4, r4, #24
	add r0, r4, r0
	orr r3, r3, r1
	ldrb r0, [r0]
	add r3, r3, r0
	ldr r0, _080CC85C  @ =gUnknown_08172A14
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r3, r3, r0
	mov r1, #182
	lsl r1, r1, #5
	add r0, r6, r1
	ldrb r2, [r0]
	add r1, r1, #1
	add r0, r6, r1
	mov r1, #0
	ldrsb r1, [r0, r1]
	lsl r1, r1, #8
	ldr r0, _080CC860  @ =gUnknown_08172A18
	add r0, r4, r0
	orr r2, r2, r1
	ldrb r0, [r0]
	add r2, r2, r0
	ldr r0, _080CC864  @ =gUnknown_08172A1C
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r1, _080CC868  @ =0x00000EE2
	add r0, r6, r1
	add r0, r5, r0
	strb r3, [r0]
	add r1, r1, #32
	add r0, r6, r1
	add r0, r5, r0
	lsr r3, r3, #8
	strb r3, [r0]
	sub r1, r1, #48
	add r0, r6, r1
	add r0, r5, r0
	strb r2, [r0]
	add r1, r1, #32
	add r0, r6, r1
	add r0, r5, r0
	lsr r2, r2, #8
	strb r2, [r0]
	ldr r2, _080CC86C  @ =0x00000FC2
	add r1, r6, r2
	add r1, r5, r1
	ldr r0, _080CC870  @ =gUnknown_08172A20
	add r4, r4, r0
	ldrb r0, [r4]
	strb r0, [r1]
	ldr r4, _080CC874  @ =0x000010F2
	add r1, r6, r4
	add r1, r5, r1
	ldr r2, _080CC878  @ =0x00000D5B
	add r0, r6, r2
	add r0, r7, r0
	ldrb r0, [r0]
	strb r0, [r1]
	sub r4, r4, #144
	add r0, r6, r4
	add r0, r5, r0
	mov r1, #1
	strb r1, [r0]
	ldr r1, _080CC87C  @ =0x00001012
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #3
	strb r1, [r0]
	mov r2, r8
	add r1, r5, r2
	mov r0, #2
	strb r0, [r1]
_080CC81E:
	mov r0, #255
	lsl r0, r0, #24
	add r0, r0, r12
	lsr r4, r0, #24
	cmp r0, #0
	bge _080CC760
_080CC82A:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080CC834:
	.4byte gRam
_080CC838:
	.4byte 0x00000D23
_080CC83C:
	.4byte 0x00000D2B
_080CC840:
	.4byte 0x00000964
_080CC844:
	.4byte 0x00000965
_080CC848:
	.4byte 0x000016C4
_080CC84C:
	.4byte 0x00000D1B
_080CC850:
	.4byte 0x00000FB2
_080CC854:
	.4byte 0x000016C5
_080CC858:
	.4byte gUnknown_08172A10
_080CC85C:
	.4byte gUnknown_08172A14
_080CC860:
	.4byte gUnknown_08172A18
_080CC864:
	.4byte gUnknown_08172A1C
_080CC868:
	.4byte 0x00000EE2
_080CC86C:
	.4byte 0x00000FC2
_080CC870:
	.4byte gUnknown_08172A20
_080CC874:
	.4byte 0x000010F2
_080CC878:
	.4byte 0x00000D5B
_080CC87C:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080CC6DC


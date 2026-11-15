	THUMB_FUNC_START sub_080B96FC
sub_080B96FC: @ 0x080B96FC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	mov r1, #4
	ldr r3, _080B9794  @ =gRam
	ldr r0, _080B9798  @ =0x00000FC2
	add r7, r3, r0
	mov r6, #0
	sub r0, r0, #32
	add r5, r3, r0
	ldr r4, _080B979C  @ =gUnknown_08170F42
_080B9718:
	lsl r0, r1, #24
	asr r0, r0, #24
	add r2, r0, r7
	add r1, r0, r4
	ldrb r1, [r1]
	strb r1, [r2]
	add r1, r0, r5
	strb r6, [r1]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080B9718
	ldr r0, _080B97A0  @ =0x00000FF7
	add r1, r3, r0
	mov r0, #46
	strb r0, [r1]
	mov r1, #1
	ldr r0, _080B97A4  @ =0x00000FF2
	add r0, r0, r3
	mov r12, r0
	ldr r0, _080B97A8  @ =0x00001012
	add r7, r3, r0
	add r0, r0, #32
	add r6, r3, r0
	mov r5, #16
_080B974C:
	lsl r2, r1, #24
	asr r2, r2, #24
	add r4, r2, #7
	mov r0, r12
	add r1, r4, r0
	mov r0, #159
	strb r0, [r1]
	add r3, r2, #0
	add r3, r3, #9
	mov r0, r12
	add r1, r3, r0
	mov r0, #160
	strb r0, [r1]
	add r1, r4, r7
	mov r0, #1
	strb r0, [r1]
	add r1, r3, r7
	mov r0, #2
	strb r0, [r1]
	add r4, r4, r6
	strb r5, [r4]
	add r3, r3, r6
	strb r5, [r3]
	sub r2, r2, #1
	lsl r2, r2, #24
	lsr r1, r2, #24
	cmp r2, #0
	bge _080B974C
	mov r0, r8
	bl sub_080B9454
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080B9794:
	.4byte gRam
_080B9798:
	.4byte 0x00000FC2
_080B979C:
	.4byte gUnknown_08170F42
_080B97A0:
	.4byte 0x00000FF7
_080B97A4:
	.4byte 0x00000FF2
_080B97A8:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080B96FC


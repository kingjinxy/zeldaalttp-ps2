	THUMB_FUNC_START sub_0806D7E4
sub_0806D7E4: @ 0x0806D7E4
	push {r4,lr}
	ldr r3, _0806D830  @ =gRam
	ldr r0, _0806D834  @ =0x000009E8
	add r1, r3, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	mov r4, #22
	ldr r0, _0806D838  @ =gUnknown_0814CAD4
	ldr r2, _0806D83C  @ =0x00000ABA
	add r1, r3, r2
	ldrh r1, [r1]
	add r0, r1, r0
	ldrb r2, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _0806D80E
	mov r4, #23
	mov r2, #0
_0806D80E:
	cmp r1, #2
	bne _0806D814
	mov r2, #3
_0806D814:
	ldr r1, _0806D840  @ =0x000009B4
	add r0, r3, r1
	strb r4, [r0]
	add r1, r1, #1
	add r0, r3, r1
	strb r2, [r0]
	bl sub_0806D598
	bl sub_0807166C
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806D830:
	.4byte gRam
_0806D834:
	.4byte 0x000009E8
_0806D838:
	.4byte gUnknown_0814CAD4
_0806D83C:
	.4byte 0x00000ABA
_0806D840:
	.4byte 0x000009B4
	THUMB_FUNC_END sub_0806D7E4


	THUMB_FUNC_START sub_0806B6FC
sub_0806B6FC: @ 0x0806B6FC
	push {lr}
	bl sub_081269D0
	mov r0, #187
	lsl r0, r0, #1
	bl sub_080AF4FC
	bl sub_081295CC
	ldr r1, _0806B738  @ =gRam
	ldr r0, _0806B73C  @ =0x00000A02
	add r2, r1, r0
	mov r3, #0
	mov r0, #128
	strb r0, [r2]
	ldr r0, _0806B740  @ =0x000009AC
	add r2, r1, r0
	mov r0, #25
	strb r0, [r2]
	ldr r2, _0806B744  @ =0x00000D02
	add r0, r1, r2
	strh r3, [r0]
	ldr r0, _0806B748  @ =0x000009E8
	add r1, r1, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806B738:
	.4byte gRam
_0806B73C:
	.4byte 0x00000A02
_0806B740:
	.4byte 0x000009AC
_0806B744:
	.4byte 0x00000D02
_0806B748:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806B6FC


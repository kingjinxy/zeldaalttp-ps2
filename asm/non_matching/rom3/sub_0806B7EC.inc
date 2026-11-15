	THUMB_FUNC_START sub_0806B7EC
sub_0806B7EC: @ 0x0806B7EC
	push {r4,lr}
	bl sub_08126D7C
	bl sub_081335C4
	ldr r4, _0806B834  @ =gRam
	ldr r1, _0806B838  @ =0x00000CFA
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #255
	bne _0806B82E
	ldr r0, _0806B83C  @ =0x00000A02
	add r3, r4, r0
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #99
	bls _0806B82E
	ldr r1, _0806B840  @ =0x000009E8
	add r2, r4, r1
	ldrh r0, [r2]
	add r0, r0, #1
	mov r1, #0
	strh r0, [r2]
	strb r1, [r3]
	ldr r0, _0806B844  @ =0x0000050C
	add r2, r4, r0
	ldrh r1, [r2]
	ldr r0, _0806B848  @ =0x0000EDFF
	and r0, r0, r1
	strh r0, [r2]
_0806B82E:
	pop {r4}
	pop {r0}
	bx r0
_0806B834:
	.4byte gRam
_0806B838:
	.4byte 0x00000CFA
_0806B83C:
	.4byte 0x00000A02
_0806B840:
	.4byte 0x000009E8
_0806B844:
	.4byte 0x0000050C
_0806B848:
	.4byte 0x0000EDFF
	THUMB_FUNC_END sub_0806B7EC


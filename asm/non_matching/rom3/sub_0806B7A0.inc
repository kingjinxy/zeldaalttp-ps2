	THUMB_FUNC_START sub_0806B7A0
sub_0806B7A0: @ 0x0806B7A0
	push {r4,lr}
	bl sub_08126D7C
	bl sub_081295CC
	ldr r3, _0806B7D8  @ =gRam
	ldr r0, _0806B7DC  @ =0x000009AD
	add r4, r3, r0
	ldrb r1, [r4]
	cmp r1, #0
	bne _0806B7D2
	ldr r2, _0806B7E0  @ =0x00000A4C
	add r0, r3, r2
	mov r2, #0
	strh r1, [r0]
	ldr r0, _0806B7E4  @ =0x000009AC
	add r1, r3, r0
	mov r0, #25
	strb r0, [r1]
	strb r2, [r4]
	ldr r2, _0806B7E8  @ =0x000009E8
	add r1, r3, r2
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_0806B7D2:
	pop {r4}
	pop {r0}
	bx r0
_0806B7D8:
	.4byte gRam
_0806B7DC:
	.4byte 0x000009AD
_0806B7E0:
	.4byte 0x00000A4C
_0806B7E4:
	.4byte 0x000009AC
_0806B7E8:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806B7A0


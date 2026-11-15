	THUMB_FUNC_START sub_0806B74C
sub_0806B74C: @ 0x0806B74C
	push {r4,lr}
	bl sub_08126D7C
	ldr r3, _0806B78C  @ =gRam
	ldr r1, _0806B790  @ =0x000009E8
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r0, #11
	bne _0806B784
	ldr r4, _0806B794  @ =0x00000A3C
	add r1, r3, r4
	mov r2, #0
	mov r0, #31
	strh r0, [r1]
	ldr r0, _0806B798  @ =0x000009AC
	add r1, r3, r0
	mov r0, #25
	strb r0, [r1]
	sub r4, r4, #143
	add r1, r3, r4
	ldr r4, _0806B79C  @ =0x00001727
	add r0, r3, r4
	strb r2, [r0]
	sub r4, r4, #91
	add r0, r3, r4
	strb r2, [r0]
	mov r0, #1
	strb r0, [r1]
_0806B784:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806B78C:
	.4byte gRam
_0806B790:
	.4byte 0x000009E8
_0806B794:
	.4byte 0x00000A3C
_0806B798:
	.4byte 0x000009AC
_0806B79C:
	.4byte 0x00001727
	THUMB_FUNC_END sub_0806B74C


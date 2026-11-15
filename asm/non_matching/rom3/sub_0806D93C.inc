	THUMB_FUNC_START sub_0806D93C
sub_0806D93C: @ 0x0806D93C
	push {r4,lr}
	ldr r1, _0806D9A4  @ =gRam
	ldr r2, _0806D9A8  @ =0x00000D02
	add r0, r1, r2
	mov r2, #0
	strh r2, [r0]
	ldr r3, _0806D9AC  @ =0x00000CFA
	add r0, r1, r3
	strh r2, [r0]
	sub r3, r3, #2
	add r0, r1, r3
	strh r2, [r0]
	ldr r0, _0806D9B0  @ =0x00000CFC
	add r3, r1, r0
	mov r0, #31
	strh r0, [r3]
	ldr r3, _0806D9B4  @ =0x00000C9E
	add r0, r1, r3
	strh r2, [r0]
	ldr r3, _0806D9B8  @ =0x00000B02
	add r0, r1, r3
	strh r2, [r0]
	mov r2, #176
	lsl r2, r2, #4
	add r0, r1, r2
	ldrh r0, [r0]
	add r4, r1, #0
	cmp r0, #0
	beq _0806D9D0
	ldr r3, _0806D9BC  @ =0x000009D3
	add r0, r4, r3
	mov r1, #2
	strb r1, [r0]
	ldr r1, _0806D9C0  @ =0x000009DA
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #11
	beq _0806D99C
	cmp r0, #106
	beq _0806D99C
	cmp r0, #146
	beq _0806D99C
	cmp r0, #147
	beq _0806D99C
	cmp r0, #153
	beq _0806D99C
	cmp r0, #186
	bne _0806D9C8
_0806D99C:
	ldr r2, _0806D9C4  @ =0x000009D4
	add r1, r4, r2
	mov r0, #179
	b _0806D9CE
_0806D9A4:
	.4byte gRam
_0806D9A8:
	.4byte 0x00000D02
_0806D9AC:
	.4byte 0x00000CFA
_0806D9B0:
	.4byte 0x00000CFC
_0806D9B4:
	.4byte 0x00000C9E
_0806D9B8:
	.4byte 0x00000B02
_0806D9BC:
	.4byte 0x000009D3
_0806D9C0:
	.4byte 0x000009DA
_0806D9C4:
	.4byte 0x000009D4
_0806D9C8:
	ldr r3, _0806D9F4  @ =0x000009D4
	add r1, r4, r3
	mov r0, #176
_0806D9CE:
	strb r0, [r1]
_0806D9D0:
	mov r0, #176
	lsl r0, r0, #4
	add r1, r4, r0
	mov r0, #0
	strh r0, [r1]
	bl sub_0807166C
	bl sub_08077D98
	ldr r2, _0806D9F8  @ =0x000009E8
	add r1, r4, r2
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806D9F4:
	.4byte 0x000009D4
_0806D9F8:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806D93C


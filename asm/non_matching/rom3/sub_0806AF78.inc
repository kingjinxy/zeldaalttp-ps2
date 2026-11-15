	THUMB_FUNC_START sub_0806AF78
sub_0806AF78: @ 0x0806AF78
	push {r4,lr}
	ldr r2, _0806AFB8  @ =gRam
	ldr r0, _0806AFBC  @ =0x000009E8
	add r1, r2, r0
	ldrh r0, [r1]
	sub r0, r0, #1
	mov r4, #0
	strh r0, [r1]
	lsl r0, r0, #16
	lsr r3, r0, #16
	cmp r3, #0
	bne _0806AFB2
	ldr r0, _0806AFC0  @ =0x000009AD
	add r1, r2, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _0806AFC4  @ =0x000016D6
	add r0, r2, r1
	strb r4, [r0]
	add r1, r1, #1
	add r0, r2, r1
	strb r4, [r0]
	ldr r1, _0806AFC8  @ =0x00000D08
	add r0, r2, r1
	strh r3, [r0]
	ldr r1, _0806AFCC  @ =0x0000099D
	add r0, r2, r1
	strb r4, [r0]
_0806AFB2:
	pop {r4}
	pop {r0}
	bx r0
_0806AFB8:
	.4byte gRam
_0806AFBC:
	.4byte 0x000009E8
_0806AFC0:
	.4byte 0x000009AD
_0806AFC4:
	.4byte 0x000016D6
_0806AFC8:
	.4byte 0x00000D08
_0806AFCC:
	.4byte 0x0000099D
	THUMB_FUNC_END sub_0806AF78


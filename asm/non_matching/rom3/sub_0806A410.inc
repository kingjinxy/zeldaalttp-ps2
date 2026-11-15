	THUMB_FUNC_START sub_0806A410
sub_0806A410: @ 0x0806A410
	push {lr}
	ldr r0, _0806A438  @ =gUnknown_02002434
	ldrh r3, [r0]
	cmp r3, #0
	bne _0806A450
	ldr r1, _0806A43C  @ =gRam
	ldr r0, _0806A440  @ =0x000009AC
	add r2, r1, r0
	mov r0, #20
	strb r0, [r2]
	ldr r2, _0806A444  @ =0x000009AD
	add r0, r1, r2
	strb r3, [r0]
	ldr r0, _0806A448  @ =gUnknown_02006882
	strb r3, [r0]
	ldr r0, _0806A44C  @ =0x0000099D
	add r1, r1, r0
	strb r3, [r1]
	b _0806A464
	.byte 0x00
	.byte 0x00
_0806A438:
	.4byte gUnknown_02002434
_0806A43C:
	.4byte gRam
_0806A440:
	.4byte 0x000009AC
_0806A444:
	.4byte 0x000009AD
_0806A448:
	.4byte gUnknown_02006882
_0806A44C:
	.4byte 0x0000099D
_0806A450:
	ldr r1, _0806A468  @ =gRam
	ldr r0, _0806A46C  @ =0x000009AC
	add r2, r1, r0
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	ldr r2, _0806A470  @ =0x00000B52
	add r1, r1, r2
	mov r0, #1
	strh r0, [r1]
_0806A464:
	pop {r0}
	bx r0
_0806A468:
	.4byte gRam
_0806A46C:
	.4byte 0x000009AC
_0806A470:
	.4byte 0x00000B52
	THUMB_FUNC_END sub_0806A410


	THUMB_FUNC_START sub_0806BFB4
sub_0806BFB4: @ 0x0806BFB4
	push {lr}
	ldr r2, _0806BFE8  @ =gRam
	ldr r1, _0806BFEC  @ =0x00000A1C
	add r0, r2, r1
	ldrh r1, [r0]
	mov r0, #44
	mul r0, r1, r0
	ldr r1, _0806BFF0  @ =gUnknown_08150EC4
	add r0, r0, r1
	ldrh r0, [r0, #40]
	cmp r0, #3
	bne _0806BFD6
	ldr r1, _0806BFF4  @ =0x0000165E
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #1
	bls _0806BFDE
_0806BFD6:
	ldr r0, _0806BFF8  @ =0x00000A3C
	add r1, r2, r0
	ldr r0, _0806BFFC  @ =0x0000FFF1
	strh r0, [r1]
_0806BFDE:
	bl sub_080709C0
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806BFE8:
	.4byte gRam
_0806BFEC:
	.4byte 0x00000A1C
_0806BFF0:
	.4byte gUnknown_08150EC4
_0806BFF4:
	.4byte 0x0000165E
_0806BFF8:
	.4byte 0x00000A3C
_0806BFFC:
	.4byte 0x0000FFF1
	THUMB_FUNC_END sub_0806BFB4


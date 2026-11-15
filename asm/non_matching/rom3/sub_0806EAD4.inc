	THUMB_FUNC_START sub_0806EAD4
sub_0806EAD4: @ 0x0806EAD4
	push {lr}
	ldr r2, _0806EB08  @ =gRam
	ldr r1, _0806EB0C  @ =0x00000A4C
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #5
	bne _0806EB2C
	ldr r1, _0806EB10  @ =0x00000CFA
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _0806EB2C
	ldr r1, _0806EB14  @ =0x000009E8
	add r0, r2, r1
	ldrh r1, [r0]
	add r1, r1, #1
	strh r1, [r0]
	ldr r1, _0806EB18  @ =0x000009DA
	add r0, r2, r1
	ldrh r0, [r0]
	cmp r0, #48
	bne _0806EB20
	ldr r0, _0806EB1C  @ =0x00000A3C
	add r1, r2, r0
	mov r0, #18
	b _0806EB2A
_0806EB08:
	.4byte gRam
_0806EB0C:
	.4byte 0x00000A4C
_0806EB10:
	.4byte 0x00000CFA
_0806EB14:
	.4byte 0x000009E8
_0806EB18:
	.4byte 0x000009DA
_0806EB1C:
	.4byte 0x00000A3C
_0806EB20:
	cmp r0, #64
	bne _0806EB2C
	ldr r0, _0806EB30  @ =0x00000A3C
	add r1, r2, r0
	mov r0, #9
_0806EB2A:
	strh r0, [r1]
_0806EB2C:
	pop {r0}
	bx r0
_0806EB30:
	.4byte 0x00000A3C
	THUMB_FUNC_END sub_0806EAD4


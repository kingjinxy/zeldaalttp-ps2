	THUMB_FUNC_START sub_0806E060
sub_0806E060: @ 0x0806E060
	push {r4,lr}
	bl sub_0808ABA4
	bl sub_0806DFFC
	ldr r3, _0806E094  @ =gRam
	ldr r1, _0806E098  @ =0x000009DA
	add r0, r3, r1
	ldrh r2, [r0]
	cmp r2, #0
	bne _0806E0AC
	ldr r4, _0806E09C  @ =0x0000099A
	add r0, r3, r4
	ldr r4, _0806E0A0  @ =0x00000D08
	add r1, r3, r4
	ldrb r0, [r0]
	ldrh r1, [r1]
	cmp r0, r1
	bne _0806E0CA
	ldr r1, _0806E0A4  @ =0x000009AD
	add r0, r3, r1
	strb r2, [r0]
	ldr r4, _0806E0A8  @ =0x000009E8
	add r0, r3, r4
	strh r2, [r0]
	b _0806E0CA
_0806E094:
	.4byte gRam
_0806E098:
	.4byte 0x000009DA
_0806E09C:
	.4byte 0x0000099A
_0806E0A0:
	.4byte 0x00000D08
_0806E0A4:
	.4byte 0x000009AD
_0806E0A8:
	.4byte 0x000009E8
_0806E0AC:
	ldr r1, _0806E0D0  @ =0x00000999
	add r0, r3, r1
	ldr r2, _0806E0D4  @ =0x00000D08
	add r1, r3, r2
	ldrb r0, [r0]
	ldrh r1, [r1]
	cmp r0, r1
	bne _0806E0CA
	ldr r4, _0806E0D8  @ =0x000009AD
	add r0, r3, r4
	mov r1, #0
	strb r1, [r0]
	ldr r2, _0806E0DC  @ =0x000009E8
	add r0, r3, r2
	strh r1, [r0]
_0806E0CA:
	pop {r4}
	pop {r0}
	bx r0
_0806E0D0:
	.4byte 0x00000999
_0806E0D4:
	.4byte 0x00000D08
_0806E0D8:
	.4byte 0x000009AD
_0806E0DC:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806E060


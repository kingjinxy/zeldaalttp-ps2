	THUMB_FUNC_START sub_0806E6B8
sub_0806E6B8: @ 0x0806E6B8
	push {lr}
	bl sub_080C1B40
	bl sub_0808A8C4
	ldr r2, _0806E6E4  @ =gRam
	ldr r1, _0806E6E8  @ =0x000009AD
	add r0, r2, r1
	ldrb r1, [r0]
	cmp r1, #0
	bne _0806E72E
	ldr r3, _0806E6EC  @ =0x000009E8
	add r0, r2, r3
	strh r1, [r0]
	ldr r1, _0806E6F0  @ =0x00001651
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _0806E6F4
	mov r1, #14
	b _0806E702
	.byte 0x00
	.byte 0x00
_0806E6E4:
	.4byte gRam
_0806E6E8:
	.4byte 0x000009AD
_0806E6EC:
	.4byte 0x000009E8
_0806E6F0:
	.4byte 0x00001651
_0806E6F4:
	ldr r3, _0806E734  @ =0x00000AB2
	add r0, r2, r3
	ldrh r0, [r0]
	lsl r1, r0, #16
	cmp r0, #255
	beq _0806E71A
	lsr r1, r1, #17
_0806E702:
	cmp r1, #14
	bhi _0806E71A
	ldr r0, _0806E738  @ =gUnknown_0814CCCC
	lsl r1, r1, #1
	add r1, r1, r0
	ldrh r1, [r1]
	ldr r0, _0806E73C  @ =0x0000FFFF
	cmp r1, r0
	beq _0806E71A
	add r0, r1, #0
	bl sub_080C95C0
_0806E71A:
	ldr r2, _0806E740  @ =gRam
	ldr r1, _0806E744  @ =0x00000A46
	add r0, r2, r1
	ldrh r1, [r0]
	ldr r0, _0806E73C  @ =0x0000FFFF
	cmp r1, r0
	beq _0806E72E
	ldr r3, _0806E748  @ =0x00000A3C
	add r0, r2, r3
	strh r1, [r0]
_0806E72E:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806E734:
	.4byte 0x00000AB2
_0806E738:
	.4byte gUnknown_0814CCCC
_0806E73C:
	.4byte 0x0000FFFF
_0806E740:
	.4byte gRam
_0806E744:
	.4byte 0x00000A46
_0806E748:
	.4byte 0x00000A3C
	THUMB_FUNC_END sub_0806E6B8


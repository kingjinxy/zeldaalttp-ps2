	THUMB_FUNC_START sub_0806E1D8
sub_0806E1D8: @ 0x0806E1D8
	push {r4,lr}
	ldr r4, _0806E20C  @ =gRam
	ldr r1, _0806E210  @ =0x00000B0C
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #8
	bhi _0806E1F8
	bl sub_08130FF8
	ldr r3, _0806E214  @ =0x00000CF8
	add r0, r4, r3
	ldrh r0, [r0]
	cmp r0, #0
	beq _0806E1F8
	bl sub_08130FF8
_0806E1F8:
	ldr r2, _0806E20C  @ =gRam
	ldr r0, _0806E210  @ =0x00000B0C
	add r1, r2, r0
	ldrh r0, [r1]
	cmp r0, #0
	beq _0806E218
	sub r0, r0, #1
	strh r0, [r1]
	b _0806E228
	.byte 0x00
	.byte 0x00
_0806E20C:
	.4byte gRam
_0806E210:
	.4byte 0x00000B0C
_0806E214:
	.4byte 0x00000CF8
_0806E218:
	mov r1, #184
	lsl r1, r1, #5
	add r0, r2, r1
	mov r1, #12
	strb r1, [r0]
	ldr r3, _0806E230  @ =0x00001787
	add r0, r2, r3
	strb r1, [r0]
_0806E228:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806E230:
	.4byte 0x00001787
	THUMB_FUNC_END sub_0806E1D8


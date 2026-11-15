	THUMB_FUNC_START sub_0806EBCC
sub_0806EBCC: @ 0x0806EBCC
	push {lr}
	ldr r0, _0806EBF8  @ =gRam
	ldr r2, _0806EBFC  @ =0x00000952
	add r1, r0, r2
	ldrh r1, [r1]
	ldr r3, _0806EC00  @ =0x00001A58
	add r2, r0, r3
	add r3, r0, #0
	ldrh r0, [r2]
	cmp r1, r0
	beq _0806EC14
	ldrh r2, [r2]
	sub r0, r1, r2
	cmp r0, #0
	blt _0806EC04
	sub r0, r1, #1
	lsl r0, r0, #16
	lsr r1, r0, #16
	cmp r1, r2
	beq _0806EC14
	sub r0, r1, #1
	b _0806EC10
_0806EBF8:
	.4byte gRam
_0806EBFC:
	.4byte 0x00000952
_0806EC00:
	.4byte 0x00001A58
_0806EC04:
	add r0, r1, #1
	lsl r0, r0, #16
	lsr r1, r0, #16
	cmp r1, r2
	beq _0806EC14
	add r0, r1, #1
_0806EC10:
	lsl r0, r0, #16
	lsr r1, r0, #16
_0806EC14:
	ldr r2, _0806EC40  @ =0x00000952
	add r0, r3, r2
	strh r1, [r0]
	ldr r1, _0806EC44  @ =0x00000958
	add r0, r3, r1
	ldrh r1, [r0]
	ldr r2, _0806EC48  @ =0x00001A5A
	add r0, r3, r2
	ldrh r2, [r0]
	cmp r1, r2
	beq _0806EC5C
	ldrh r2, [r0]
	sub r0, r1, r2
	cmp r0, #0
	blt _0806EC4C
	sub r0, r1, #1
	lsl r0, r0, #16
	lsr r1, r0, #16
	cmp r1, r2
	beq _0806EC5C
	sub r0, r1, #1
	b _0806EC58
_0806EC40:
	.4byte 0x00000952
_0806EC44:
	.4byte 0x00000958
_0806EC48:
	.4byte 0x00001A5A
_0806EC4C:
	add r0, r1, #1
	lsl r0, r0, #16
	lsr r1, r0, #16
	cmp r1, r2
	beq _0806EC5C
	add r0, r1, #1
_0806EC58:
	lsl r0, r0, #16
	lsr r1, r0, #16
_0806EC5C:
	ldr r2, _0806ECB4  @ =0x00000958
	add r0, r3, r2
	strh r1, [r0]
	mov r2, #0
	ldrsh r1, [r0, r2]
	ldr r2, _0806ECB8  @ =0x00001A5A
	add r0, r3, r2
	ldrh r0, [r0]
	cmp r1, r0
	bne _0806EC8C
	ldr r1, _0806ECBC  @ =0x00000952
	add r0, r3, r1
	mov r2, #0
	ldrsh r1, [r0, r2]
	ldr r2, _0806ECC0  @ =0x00001A58
	add r0, r3, r2
	ldrh r0, [r0]
	cmp r1, r0
	bne _0806EC8C
	ldr r0, _0806ECC4  @ =0x000009E8
	add r1, r3, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_0806EC8C:
	mov r1, #176
	lsl r1, r1, #4
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _0806ECB0
	ldr r2, _0806ECBC  @ =0x00000952
	add r0, r3, r2
	ldrh r1, [r0]
	sub r2, r2, #2
	add r0, r3, r2
	strh r1, [r0]
	ldr r1, _0806ECB4  @ =0x00000958
	add r0, r3, r1
	ldrh r1, [r0]
	add r2, r2, #6
	add r0, r3, r2
	strh r1, [r0]
_0806ECB0:
	pop {r0}
	bx r0
_0806ECB4:
	.4byte 0x00000958
_0806ECB8:
	.4byte 0x00001A5A
_0806ECBC:
	.4byte 0x00000952
_0806ECC0:
	.4byte 0x00001A58
_0806ECC4:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806EBCC


	THUMB_FUNC_START sub_0806DE78
sub_0806DE78: @ 0x0806DE78
	push {r4,lr}
	ldr r0, _0806DED4  @ =gRam
	ldr r2, _0806DED8  @ =0x00000B0C
	add r1, r0, r2
	ldrh r1, [r1]
	add r3, r0, #0
	cmp r1, #0
	bne _0806DECC
	ldr r4, _0806DEDC  @ =0x00001727
	add r0, r3, r4
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _0806DEB2
	ldr r0, _0806DEE0  @ =0x00000B1E
	add r1, r3, r0
	mov r0, #1
	strh r0, [r1]
	mov r1, #175
	lsl r1, r1, #4
	add r0, r3, r1
	ldrh r0, [r0]
	cmp r0, #2
	beq _0806DEB2
	sub r2, r2, #252
	add r1, r3, r2
	mov r0, #1
	strb r0, [r1]
_0806DEB2:
	ldr r4, _0806DEE4  @ =0x000009E8
	add r0, r3, r4
	mov r2, #0
	mov r1, #0
	strh r1, [r0]
	add r4, r4, #214
	add r0, r3, r4
	strh r1, [r0]
	ldr r1, _0806DEE8  @ =0x000009AD
	add r0, r3, r1
	strb r2, [r0]
	bl sub_0806FE5C
_0806DECC:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806DED4:
	.4byte gRam
_0806DED8:
	.4byte 0x00000B0C
_0806DEDC:
	.4byte 0x00001727
_0806DEE0:
	.4byte 0x00000B1E
_0806DEE4:
	.4byte 0x000009E8
_0806DEE8:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_0806DE78


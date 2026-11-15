	THUMB_FUNC_START sub_0806DF4C
sub_0806DF4C: @ 0x0806DF4C
	push {r4,r5,lr}
	mov r5, #1
	ldr r4, _0806DF80  @ =gRam
	ldr r1, _0806DF84  @ =0x000009D4
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #179
	bne _0806DF9C
	ldr r0, _0806DF88  @ =0x0000050C
	add r1, r4, r0
	mov r0, #248
	lsl r0, r0, #5
	strh r0, [r1]
	ldr r0, _0806DF8C  @ =0x0000051E
	add r1, r4, r0
	ldr r0, _0806DF90  @ =0x00003C42
	strh r0, [r1]
	ldr r1, _0806DF94  @ =0x00000514
	add r2, r4, r1
	ldrh r1, [r2]
	ldr r0, _0806DF98  @ =0x0000FFFC
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strh r0, [r2]
	b _0806DFF2
_0806DF80:
	.4byte gRam
_0806DF84:
	.4byte 0x000009D4
_0806DF88:
	.4byte 0x0000050C
_0806DF8C:
	.4byte 0x0000051E
_0806DF90:
	.4byte 0x00003C42
_0806DF94:
	.4byte 0x00000514
_0806DF98:
	.4byte 0x0000FFFC
_0806DF9C:
	cmp r0, #176
	bne _0806DFF0
	ldr r0, _0806DFD4  @ =0x0000050C
	add r1, r4, r0
	mov r2, #0
	mov r0, #248
	lsl r0, r0, #5
	strh r0, [r1]
	ldr r0, _0806DFD8  @ =0x0000051E
	add r1, r4, r0
	ldr r0, _0806DFDC  @ =0x00003C42
	strh r0, [r1]
	ldr r1, _0806DFE0  @ =0x00000998
	add r0, r4, r1
	strb r2, [r0]
	ldr r0, _0806DFE4  @ =0x00000999
	add r1, r4, r0
	mov r0, #31
	strb r0, [r1]
	bl sub_08070CC8
	ldr r1, _0806DFE8  @ =0x00000514
	add r2, r4, r1
	ldrh r1, [r2]
	ldr r0, _0806DFEC  @ =0x0000FFFC
	and r0, r0, r1
	strh r0, [r2]
	b _0806DFF2
_0806DFD4:
	.4byte 0x0000050C
_0806DFD8:
	.4byte 0x0000051E
_0806DFDC:
	.4byte 0x00003C42
_0806DFE0:
	.4byte 0x00000998
_0806DFE4:
	.4byte 0x00000999
_0806DFE8:
	.4byte 0x00000514
_0806DFEC:
	.4byte 0x0000FFFC
_0806DFF0:
	mov r5, #0
_0806DFF2:
	add r0, r5, #0
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0806DF4C

	.byte 0x00
	.byte 0x00

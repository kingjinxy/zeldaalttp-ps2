	THUMB_FUNC_START sub_080F7A28
sub_080F7A28: @ 0x080F7A28
	push {r4-r6,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #192
	bl sub_080CA538
	add r6, r0, #0
	cmp r6, #0
	blt _080F7A92
	lsl r5, r6, #24
	lsr r5, r5, #24
	add r0, r5, #0
	bl sub_080CAE50
	ldr r4, _080F7A98  @ =gRam
	ldr r1, _080F7A9C  @ =0x00000F22
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #24
	strb r1, [r0]
	ldr r1, _080F7AA0  @ =0x00001152
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #48
	strb r1, [r0]
	ldr r1, _080F7AA4  @ =0x00000F62
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #17
	strb r1, [r0]
	add r0, r5, #0
	mov r1, #108
	bl sub_080CF0AC
	ldr r1, _080F7AA8  @ =0x00001012
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #131
	strb r1, [r0]
	ldr r1, _080F7AAC  @ =0x00001032
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #88
	strb r1, [r0]
	ldr r0, _080F7AB0  @ =0x00001122
	add r4, r4, r0
	add r4, r6, r4
	mov r0, #8
	strb r0, [r4]
	mov r0, #28
	bl sub_0812FBC4
_080F7A92:
	pop {r4-r6}
	pop {r0}
	bx r0
_080F7A98:
	.4byte gRam
_080F7A9C:
	.4byte 0x00000F22
_080F7AA0:
	.4byte 0x00001152
_080F7AA4:
	.4byte 0x00000F62
_080F7AA8:
	.4byte 0x00001012
_080F7AAC:
	.4byte 0x00001032
_080F7AB0:
	.4byte 0x00001122
	THUMB_FUNC_END sub_080F7A28


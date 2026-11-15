	THUMB_FUNC_START sub_080F7AB4
sub_080F7AB4: @ 0x080F7AB4
	push {r4,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #192
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080F7B02
	lsl r0, r4, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r2, _080F7B0C  @ =gRam
	ldr r1, _080F7B10  @ =0x00000F62
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #128
	strb r1, [r0]
	ldr r3, _080F7B14  @ =0x00001012
	add r0, r2, r3
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	ldr r3, _080F7B18  @ =0x00001172
	add r0, r2, r3
	add r0, r4, r0
	strb r1, [r0]
	ldr r1, _080F7B1C  @ =0x00001122
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #4
	strb r1, [r0]
	ldr r3, _080F7B20  @ =0x00000FC2
	add r2, r2, r3
	add r2, r4, r2
	mov r0, #31
	strb r0, [r2]
_080F7B02:
	add r0, r4, #0
	pop {r4}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080F7B0C:
	.4byte gRam
_080F7B10:
	.4byte 0x00000F62
_080F7B14:
	.4byte 0x00001012
_080F7B18:
	.4byte 0x00001172
_080F7B1C:
	.4byte 0x00001122
_080F7B20:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080F7AB4


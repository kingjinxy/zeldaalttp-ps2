	THUMB_FUNC_START sub_080CE3A0
sub_080CE3A0: @ 0x080CE3A0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080CE3D8  @ =gRam
	ldr r2, _080CE3DC  @ =0x00001286
	add r4, r1, r2
	add r4, r0, r4
	ldr r5, _080CE3E0  @ =0x000012C2
	add r3, r1, r5
	add r3, r0, r3
	ldrb r2, [r3]
	sub r5, r5, #180
	add r1, r1, r5
	add r0, r0, r1
	ldrb r1, [r0]
	lsl r1, r1, #8
	add r2, r2, r1
	mov r1, #0
	ldrsb r1, [r4, r1]
	lsl r1, r1, #4
	add r2, r2, r1
	strb r2, [r3]
	lsr r2, r2, #8
	strb r2, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CE3D8:
	.4byte gRam
_080CE3DC:
	.4byte 0x00001286
_080CE3E0:
	.4byte 0x000012C2
	THUMB_FUNC_END sub_080CE3A0


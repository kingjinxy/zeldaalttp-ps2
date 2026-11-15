	THUMB_FUNC_START sub_080EA394
sub_080EA394: @ 0x080EA394
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r1, _080EA3B8  @ =gRam
	ldr r2, _080EA3BC  @ =0x00000FC2
	add r0, r1, r2
	add r4, r3, r0
	ldrb r0, [r4]
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _080EA3C4
	ldr r5, _080EA3C0  @ =0x00000F52
	add r0, r1, r5
	add r0, r3, r0
	strb r2, [r0]
	strb r2, [r4]
	b _080EA3D4
_080EA3B8:
	.4byte gRam
_080EA3BC:
	.4byte 0x00000FC2
_080EA3C0:
	.4byte 0x00000F52
_080EA3C4:
	ldr r2, _080EA3DC  @ =0x00000F92
	add r1, r1, r2
	add r1, r3, r1
	ldr r2, _080EA3E0  @ =gUnknown_08177CCE
	lsr r0, r0, #25
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_080EA3D4:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EA3DC:
	.4byte 0x00000F92
_080EA3E0:
	.4byte gUnknown_08177CCE
	THUMB_FUNC_END sub_080EA394


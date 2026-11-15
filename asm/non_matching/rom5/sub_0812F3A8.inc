	THUMB_FUNC_START sub_0812F3A8
sub_0812F3A8: @ 0x0812F3A8
	push {r4,lr}
	ldr r4, _0812F3D4  @ =gRam
	ldr r0, _0812F3D8  @ =0x00000C84
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _0812F3DC  @ =gUnknown_02000C00
	ldrh r1, [r0]
	ldr r0, _0812F3E0  @ =0x00007FFF
	cmp r1, r0
	bne _0812F3EC
	bl sub_0812F300
	ldr r0, _0812F3E4  @ =0x0000050C
	add r2, r4, r0
	ldrh r1, [r2]
	ldr r0, _0812F3E8  @ =0x0000F1FF
	and r0, r0, r1
	strh r0, [r2]
	b _0812F3F4
	.byte 0x00
	.byte 0x00
_0812F3D4:
	.4byte gRam
_0812F3D8:
	.4byte 0x00000C84
_0812F3DC:
	.4byte gUnknown_02000C00
_0812F3E0:
	.4byte 0x00007FFF
_0812F3E4:
	.4byte 0x0000050C
_0812F3E8:
	.4byte 0x0000F1FF
_0812F3EC:
	ldr r0, _0812F3FC  @ =0x00000A4C
	add r1, r4, r0
	mov r0, #0
	strh r0, [r1]
_0812F3F4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812F3FC:
	.4byte 0x00000A4C
	THUMB_FUNC_END sub_0812F3A8


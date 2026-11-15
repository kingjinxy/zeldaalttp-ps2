	THUMB_FUNC_START sub_080D6220
sub_080D6220: @ 0x080D6220
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080D6254  @ =gRam
	ldr r1, _080D6258  @ =0x00000F92
	add r3, r2, r1
	add r3, r0, r3
	ldr r4, _080D625C  @ =gUnknown_08175248
	ldr r5, _080D6260  @ =0x00000FB2
	add r1, r2, r5
	add r1, r0, r1
	ldrb r1, [r1]
	add r1, r1, r4
	ldrb r1, [r1]
	strb r1, [r3]
	ldr r1, _080D6264  @ =0x00001032
	add r2, r2, r1
	add r0, r0, r2
	ldrb r2, [r0]
	mov r1, #191
	and r1, r1, r2
	strb r1, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D6254:
	.4byte gRam
_080D6258:
	.4byte 0x00000F92
_080D625C:
	.4byte gUnknown_08175248
_080D6260:
	.4byte 0x00000FB2
_080D6264:
	.4byte 0x00001032
	THUMB_FUNC_END sub_080D6220


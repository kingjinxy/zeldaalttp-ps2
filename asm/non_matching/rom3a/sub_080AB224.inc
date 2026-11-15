	THUMB_FUNC_START sub_080AB224
sub_080AB224: @ 0x080AB224
	ldr r2, _080AB248  @ =gRam
	ldr r0, _080AB24C  @ =0x00000AC2
	add r1, r2, r0
	ldrh r0, [r1]
	mov r3, #128
	lsl r3, r3, #8
	add r0, r0, r3
	strh r0, [r1]
	lsr r0, r0, #16
	mov r3, #150
	lsl r3, r3, #4
	add r1, r2, r3
	strh r0, [r1]
	neg r0, r0
	ldr r1, _080AB250  @ =0x0000179C
	add r2, r2, r1
	strh r0, [r2]
	bx lr
_080AB248:
	.4byte gRam
_080AB24C:
	.4byte 0x00000AC2
_080AB250:
	.4byte 0x0000179C
	THUMB_FUNC_END sub_080AB224


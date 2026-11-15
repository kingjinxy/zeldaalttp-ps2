	THUMB_FUNC_START sub_080804BC
sub_080804BC: @ 0x080804BC
	push {r4,r5,lr}
	ldr r2, _080804F0  @ =gRam
	ldr r0, _080804F4  @ =0x00000B4E
	add r4, r2, r0
	ldrh r3, [r4]
	lsl r1, r3, #1
	ldr r5, _080804F8  @ =0x00000C22
	add r0, r2, r5
	add r1, r1, r0
	mov r5, #151
	lsl r5, r5, #4
	add r0, r2, r5
	ldrh r0, [r0]
	lsl r0, r0, #16
	asr r0, r0, #17
	strh r0, [r1]
	add r3, r3, #1
	strh r3, [r4]
	mov r0, #181
	lsl r0, r0, #4
	add r2, r2, r0
	strh r3, [r2]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080804F0:
	.4byte gRam
_080804F4:
	.4byte 0x00000B4E
_080804F8:
	.4byte 0x00000C22
	THUMB_FUNC_END sub_080804BC


	THUMB_FUNC_START sub_080B9680
sub_080B9680: @ 0x080B9680
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r2, _080B96DC  @ =gRam
	ldr r0, _080B96E0  @ =0x00000F67
	add r1, r2, r0
	mov r0, #22
	strb r0, [r1]
	ldr r3, _080B96E4  @ =gUnknown_08170B32
	ldrb r1, [r3, #1]
	ldr r4, _080B96E8  @ =0x00000F12
	add r0, r2, r4
	strb r1, [r0]
	ldrb r1, [r3]
	ldr r3, _080B96EC  @ =0x00000F13
	add r0, r2, r3
	strb r1, [r0]
	ldr r4, _080B96F0  @ =0x00001083
	add r1, r2, r4
	mov r0, #1
	strb r0, [r1]
	mov r1, #2
	ldr r0, _080B96F4  @ =0x00000FF2
	add r6, r2, r0
	ldr r3, _080B96F8  @ =0x00001122
	add r5, r2, r3
	mov r4, #87
	mov r3, #49
_080B96B8:
	lsl r0, r1, #24
	asr r0, r0, #24
	add r2, r0, #2
	add r1, r2, r6
	strb r4, [r1]
	add r2, r2, r5
	strb r3, [r2]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080B96B8
	add r0, r7, #0
	bl sub_080B9454
	pop {r4-r7}
	pop {r0}
	bx r0
_080B96DC:
	.4byte gRam
_080B96E0:
	.4byte 0x00000F67
_080B96E4:
	.4byte gUnknown_08170B32
_080B96E8:
	.4byte 0x00000F12
_080B96EC:
	.4byte 0x00000F13
_080B96F0:
	.4byte 0x00001083
_080B96F4:
	.4byte 0x00000FF2
_080B96F8:
	.4byte 0x00001122
	THUMB_FUNC_END sub_080B9680


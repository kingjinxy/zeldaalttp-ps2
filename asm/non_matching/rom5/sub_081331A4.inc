	THUMB_FUNC_START sub_081331A4
sub_081331A4: @ 0x081331A4
	push {r4,lr}
	ldr r2, _081331E0  @ =gUnknown_0822BB64
	ldr r1, _081331E4  @ =gRam
	ldr r3, _081331E8  @ =0x00000CA8
	add r0, r1, r3
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	mov r3, #7
	lsl r0, r0, #1
	ldr r4, _081331EC  @ =gUnknown_02030210
	add r2, r0, r4
	mov r0, #202
	lsl r0, r0, #4
	add r1, r1, r0
	ldrh r0, [r1]
	lsl r0, r0, #1
	ldr r4, _081331F0  @ =gUnknown_02000AC0
	add r1, r0, r4
_081331CC:
	ldrh r0, [r2]
	strh r0, [r1]
	add r2, r2, #2
	add r1, r1, #2
	sub r3, r3, #1
	cmp r3, #0
	bge _081331CC
	pop {r4}
	pop {r0}
	bx r0
_081331E0:
	.4byte gUnknown_0822BB64
_081331E4:
	.4byte gRam
_081331E8:
	.4byte 0x00000CA8
_081331EC:
	.4byte gUnknown_02030210
_081331F0:
	.4byte gUnknown_02000AC0
	THUMB_FUNC_END sub_081331A4


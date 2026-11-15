	THUMB_FUNC_START sub_080C95C0
sub_080C95C0: @ 0x080C95C0
	ldr r1, _080C95EC  @ =gRam
	ldr r3, _080C95F0  @ =0x00001AE8
	add r2, r1, r3
	mov r3, #0
	strh r0, [r2]
	ldr r2, _080C95F4  @ =0x00001AD0
	add r0, r1, r2
	strb r3, [r0]
	ldr r3, _080C95F8  @ =0x000009AD
	add r2, r1, r3
	mov r0, #2
	strb r0, [r2]
	ldr r0, _080C95FC  @ =0x000009AC
	add r2, r1, r0
	ldrb r0, [r2]
	add r3, r3, #109
	add r1, r1, r3
	strh r0, [r1]
	mov r0, #14
	strb r0, [r2]
	bx lr
	.byte 0x00
	.byte 0x00
_080C95EC:
	.4byte gRam
_080C95F0:
	.4byte 0x00001AE8
_080C95F4:
	.4byte 0x00001AD0
_080C95F8:
	.4byte 0x000009AD
_080C95FC:
	.4byte 0x000009AC
	THUMB_FUNC_END sub_080C95C0


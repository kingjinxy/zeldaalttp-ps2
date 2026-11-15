	THUMB_FUNC_START sub_08074698
sub_08074698: @ 0x08074698
	ldr r1, _080746B4  @ =gRam
	ldr r0, _080746B8  @ =0x000009AC
	add r2, r1, r0
	mov r3, #0
	mov r0, #10
	strb r0, [r2]
	ldr r2, _080746BC  @ =0x000009AD
	add r0, r1, r2
	strb r3, [r0]
	ldr r0, _080746C0  @ =0x000009E8
	add r1, r1, r0
	strh r3, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_080746B4:
	.4byte gRam
_080746B8:
	.4byte 0x000009AC
_080746BC:
	.4byte 0x000009AD
_080746C0:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08074698


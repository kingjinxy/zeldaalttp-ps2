	THUMB_FUNC_START sub_080930E8
sub_080930E8: @ 0x080930E8
	ldr r1, _08093118  @ =gRam
	ldr r2, _0809311C  @ =0x00001793
	add r0, r1, r2
	mov r2, #0
	strb r2, [r0]
	ldr r3, _08093120  @ =0x000016E9
	add r0, r1, r3
	strb r2, [r0]
	add r3, r3, #168
	add r0, r1, r3
	strb r2, [r0]
	add r3, r3, #1
	add r0, r1, r3
	strb r2, [r0]
	add r3, r3, #118
	add r0, r1, r3
	strb r2, [r0]
	ldr r0, _08093124  @ =0x00001705
	add r1, r1, r0
	ldrb r2, [r1]
	mov r0, #254
	and r0, r0, r2
	strb r0, [r1]
	bx lr
_08093118:
	.4byte gRam
_0809311C:
	.4byte 0x00001793
_08093120:
	.4byte 0x000016E9
_08093124:
	.4byte 0x00001705
	THUMB_FUNC_END sub_080930E8


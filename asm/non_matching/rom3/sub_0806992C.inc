	THUMB_FUNC_START sub_0806992C
sub_0806992C: @ 0x0806992C
	ldr r1, _08069948  @ =gRam
	ldr r0, _0806994C  @ =0x00000994
	add r2, r1, r0
	mov r3, #0
	mov r0, #3
	strb r0, [r2]
	ldr r0, _08069950  @ =0x000009A3
	add r2, r1, r0
	mov r0, #2
	strb r0, [r2]
	ldr r0, _08069954  @ =0x000009A4
	add r1, r1, r0
	strb r3, [r1]
	bx lr
_08069948:
	.4byte gRam
_0806994C:
	.4byte 0x00000994
_08069950:
	.4byte 0x000009A3
_08069954:
	.4byte 0x000009A4
	THUMB_FUNC_END sub_0806992C


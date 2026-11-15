	THUMB_FUNC_START sub_080C2914
sub_080C2914: @ 0x080C2914
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080C2960  @ =gRam
	ldr r2, _080C2964  @ =0x00000FF2
	add r1, r3, r2
	add r1, r0, r1
	mov r4, #0
	mov r2, #74
	strb r2, [r1]
	ldr r2, _080C2968  @ =0x00000F82
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #1
	strb r2, [r1]
	ldr r2, _080C296C  @ =0x00000FD2
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #255
	strb r2, [r1]
	ldr r2, _080C2970  @ =0x00001032
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #24
	strb r2, [r1]
	ldr r2, _080C2974  @ =0x00001122
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #8
	strb r2, [r1]
	ldr r1, _080C2978  @ =0x00001022
	add r3, r3, r1
	add r0, r0, r3
	strb r4, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C2960:
	.4byte gRam
_080C2964:
	.4byte 0x00000FF2
_080C2968:
	.4byte 0x00000F82
_080C296C:
	.4byte 0x00000FD2
_080C2970:
	.4byte 0x00001032
_080C2974:
	.4byte 0x00001122
_080C2978:
	.4byte 0x00001022
	THUMB_FUNC_END sub_080C2914


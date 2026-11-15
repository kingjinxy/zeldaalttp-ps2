	THUMB_FUNC_START sub_0810F060
sub_0810F060: @ 0x0810F060
	push {r4,lr}
	sub sp, sp, #4
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r4, _0810F0A8  @ =gRam
	ldr r2, _0810F0AC  @ =0x00001172
	add r0, r4, r2
	add r0, r1, r0
	mov r2, #0
	strb r2, [r0]
	ldr r2, _0810F0B0  @ =0x00000D84
	add r0, r4, r2
	add r0, r1, r0
	mov r2, #8
	strb r2, [r0]
	ldr r2, _0810F0B4  @ =0x00000E75
	add r0, r4, r2
	add r0, r1, r0
	mov r2, #4
	strb r2, [r0]
	ldr r0, _0810F0B8  @ =0x00001132
	add r4, r4, r0
	add r4, r1, r4
	mov r0, #28
	strb r0, [r4]
	mov r0, sp
	bl sub_080C4948
	mov r0, #10
	strb r0, [r4]
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810F0A8:
	.4byte gRam
_0810F0AC:
	.4byte 0x00001172
_0810F0B0:
	.4byte 0x00000D84
_0810F0B4:
	.4byte 0x00000E75
_0810F0B8:
	.4byte 0x00001132
	THUMB_FUNC_END sub_0810F060


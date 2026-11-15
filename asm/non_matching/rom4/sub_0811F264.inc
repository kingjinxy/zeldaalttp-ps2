	THUMB_FUNC_START sub_0811F264
sub_0811F264: @ 0x0811F264
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _0811F2D4  @ =gRam
	ldr r2, _0811F2D8  @ =0x00000E15
	add r1, r3, r2
	add r1, r0, r1
	mov r4, #0
	mov r2, #46
	strb r2, [r1]
	ldr r1, _0811F2DC  @ =0x00000E5B
	add r2, r3, r1
	add r2, r0, r2
	ldr r1, _0811F2E0  @ =gUnknown_08226484
	add r1, r1, #45
	ldrb r1, [r1]
	strb r1, [r2]
	ldr r2, _0811F2E4  @ =0x00001844
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #3
	strb r2, [r1]
	ldr r2, _0811F2E8  @ =0x00000E1F
	add r1, r3, r2
	add r1, r0, r1
	strb r4, [r1]
	add r2, r2, #10
	add r1, r3, r2
	add r1, r0, r1
	strb r4, [r1]
	ldr r2, _0811F2EC  @ =0x00001832
	add r1, r3, r2
	add r1, r0, r1
	strb r4, [r1]
	add r2, r2, #5
	add r1, r3, r2
	add r1, r0, r1
	strb r4, [r1]
	add r2, r2, #73
	add r1, r3, r2
	add r1, r0, r1
	strb r4, [r1]
	ldr r2, _0811F2F0  @ =0x00000A74
	add r1, r3, r2
	add r1, r0, r1
	strb r4, [r1]
	ldr r1, _0811F2F4  @ =0x00000BC4
	add r3, r3, r1
	strb r4, [r3]
	mov r1, #42
	bl sub_080C19F8
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811F2D4:
	.4byte gRam
_0811F2D8:
	.4byte 0x00000E15
_0811F2DC:
	.4byte 0x00000E5B
_0811F2E0:
	.4byte gUnknown_08226484
_0811F2E4:
	.4byte 0x00001844
_0811F2E8:
	.4byte 0x00000E1F
_0811F2EC:
	.4byte 0x00001832
_0811F2F0:
	.4byte 0x00000A74
_0811F2F4:
	.4byte 0x00000BC4
	THUMB_FUNC_END sub_0811F264


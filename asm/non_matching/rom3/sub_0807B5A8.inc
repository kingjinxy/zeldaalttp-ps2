	THUMB_FUNC_START sub_0807B5A8
sub_0807B5A8: @ 0x0807B5A8
	push {lr}
	bl sub_080CAF64
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bne _0807B5C6
	ldr r0, _0807B5CC  @ =gRam
	ldr r2, _0807B5D0  @ =0x00001649
	add r1, r0, r2
	mov r2, #0
	strb r2, [r1]
	ldr r1, _0807B5D4  @ =0x000009E7
	add r0, r0, r1
	strb r2, [r0]
_0807B5C6:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0807B5CC:
	.4byte gRam
_0807B5D0:
	.4byte 0x00001649
_0807B5D4:
	.4byte 0x000009E7
	THUMB_FUNC_END sub_0807B5A8


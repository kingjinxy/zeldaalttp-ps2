	THUMB_FUNC_START sub_0806B0B4
sub_0806B0B4: @ 0x0806B0B4
	push {lr}
	ldr r2, _0806B0E0  @ =gRam
	ldr r0, _0806B0E4  @ =0x000009E8
	add r1, r2, r0
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	cmp r0, #0
	bne _0806B0DA
	ldr r0, _0806B0E8  @ =0x000009AD
	add r1, r2, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _0806B0EC  @ =0x00000A3E
	add r1, r2, r0
	mov r0, #6
	strb r0, [r1]
_0806B0DA:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806B0E0:
	.4byte gRam
_0806B0E4:
	.4byte 0x000009E8
_0806B0E8:
	.4byte 0x000009AD
_0806B0EC:
	.4byte 0x00000A3E
	THUMB_FUNC_END sub_0806B0B4


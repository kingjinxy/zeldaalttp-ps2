	THUMB_FUNC_START sub_0806C178
sub_0806C178: @ 0x0806C178
	push {lr}
	bl sub_081295CC
	ldr r1, _0806C19C  @ =gRam
	ldr r0, _0806C1A0  @ =0x000009AD
	add r2, r1, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _0806C196
	ldr r3, _0806C1A4  @ =0x000009E8
	add r0, r1, r3
	mov r1, #32
	strh r1, [r0]
	mov r0, #11
	strb r0, [r2]
_0806C196:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806C19C:
	.4byte gRam
_0806C1A0:
	.4byte 0x000009AD
_0806C1A4:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806C178


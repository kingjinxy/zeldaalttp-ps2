	THUMB_FUNC_START sub_0806DC38
sub_0806DC38: @ 0x0806DC38
	push {r4,lr}
	ldr r4, _0806DC9C  @ =gRam
	ldr r1, _0806DCA0  @ =0x00000952
	add r0, r4, r1
	ldrh r1, [r0]
	mov r2, #149
	lsl r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	ldr r3, _0806DCA4  @ =0x00000958
	add r0, r4, r3
	ldrh r1, [r0]
	add r2, r2, #6
	add r0, r4, r2
	strh r1, [r0]
	bl sub_0806F2E4
	mov r2, #22
	ldr r1, _0806DCA8  @ =gUnknown_0814CAD4
	ldr r3, _0806DCAC  @ =0x00000ABA
	add r0, r4, r3
	ldrh r0, [r0]
	add r0, r0, r1
	ldrb r1, [r0]
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _0806DC76
	mov r2, #23
	mov r1, #0
_0806DC76:
	ldr r3, _0806DCB0  @ =0x000009B4
	add r0, r4, r3
	strb r2, [r0]
	ldr r2, _0806DCB4  @ =0x000009B5
	add r0, r4, r2
	strb r1, [r0]
	bl sub_0806D598
	bl sub_08079338
	ldr r3, _0806DCB8  @ =0x000009E8
	add r1, r4, r3
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806DC9C:
	.4byte gRam
_0806DCA0:
	.4byte 0x00000952
_0806DCA4:
	.4byte 0x00000958
_0806DCA8:
	.4byte gUnknown_0814CAD4
_0806DCAC:
	.4byte 0x00000ABA
_0806DCB0:
	.4byte 0x000009B4
_0806DCB4:
	.4byte 0x000009B5
_0806DCB8:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806DC38


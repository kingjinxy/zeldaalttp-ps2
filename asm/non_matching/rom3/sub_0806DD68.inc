	THUMB_FUNC_START sub_0806DD68
sub_0806DD68: @ 0x0806DD68
	push {r4,lr}
	ldr r4, _0806DDB4  @ =gRam
	ldr r0, _0806DDB8  @ =0x00000A4C
	add r3, r4, r0
	ldrh r0, [r3]
	cmp r0, #5
	bne _0806DDEC
	mov r2, #0
	mov r1, #0
	strh r1, [r3]
	ldr r3, _0806DDBC  @ =0x000009E8
	add r0, r4, r3
	strh r1, [r0]
	add r3, r3, #214
	add r0, r4, r3
	strh r1, [r0]
	ldr r3, _0806DDC0  @ =0x000009AD
	add r0, r4, r3
	strb r2, [r0]
	mov r3, #188
	lsl r3, r3, #4
	add r0, r4, r3
	strh r1, [r0]
	ldr r1, _0806DDC4  @ =0x00000BBF
	add r0, r4, r1
	strb r2, [r0]
	bl sub_0808B1FC
	ldr r3, _0806DDC8  @ =0x000009DA
	add r0, r4, r3
	ldrh r0, [r0]
	cmp r0, #18
	bne _0806DDD0
	ldr r0, _0806DDCC  @ =0x00000A3C
	add r1, r4, r0
	mov r0, #10
	strh r0, [r1]
	b _0806DDE8
_0806DDB4:
	.4byte gRam
_0806DDB8:
	.4byte 0x00000A4C
_0806DDBC:
	.4byte 0x000009E8
_0806DDC0:
	.4byte 0x000009AD
_0806DDC4:
	.4byte 0x00000BBF
_0806DDC8:
	.4byte 0x000009DA
_0806DDCC:
	.4byte 0x00000A3C
_0806DDD0:
	cmp r0, #2
	bne _0806DDE4
	ldr r3, _0806DDE0  @ =0x00000A3C
	add r1, r4, r3
	mov r0, #9
	strh r0, [r1]
	b _0806DDE8
	.byte 0x00
	.byte 0x00
_0806DDE0:
	.4byte 0x00000A3C
_0806DDE4:
	bl sub_0806D2A0
_0806DDE8:
	bl sub_0812FA28
_0806DDEC:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0806DD68

	.byte 0x00
	.byte 0x00

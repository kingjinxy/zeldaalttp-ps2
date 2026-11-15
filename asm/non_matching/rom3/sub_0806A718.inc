	THUMB_FUNC_START sub_0806A718
sub_0806A718: @ 0x0806A718
	push {r4,lr}
	ldr r1, _0806A748  @ =gRam
	ldr r2, _0806A74C  @ =0x000009B2
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _0806A75E
	ldr r3, _0806A750  @ =0x000009AD
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #3
	bne _0806A758
	ldr r4, _0806A754  @ =0x00000A4C
	add r0, r1, r4
	ldrh r0, [r0]
	sub r0, r0, #2
	lsl r0, r0, #16
	lsr r0, r0, #16
	cmp r0, #6
	bhi _0806A776
	b _0806A786
	.byte 0x00
	.byte 0x00
_0806A748:
	.4byte gRam
_0806A74C:
	.4byte 0x000009B2
_0806A750:
	.4byte 0x000009AD
_0806A754:
	.4byte 0x00000A4C
_0806A758:
	bl sub_08089FB0
	b _0806A776
_0806A75E:
	ldr r2, _0806A7D8  @ =0x000009AD
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #7
	beq _0806A76C
	cmp r0, #10
	bne _0806A776
_0806A76C:
	ldr r3, _0806A7DC  @ =0x00000A4C
	add r0, r1, r3
	ldrh r0, [r0]
	cmp r0, #0
	bne _0806A786
_0806A776:
	bl sub_080C1B40
	bl sub_080A3EE0
	bl sub_08075A44
	bl sub_080AA6D8
_0806A786:
	bl sub_08075A6C
	ldr r1, _0806A7E0  @ =gRam
	ldr r4, _0806A7E4  @ =0x00000952
	add r3, r1, r4
	ldr r2, _0806A7E8  @ =0x00000A28
	add r0, r1, r2
	ldrh r2, [r0]
	ldrh r3, [r3]
	add r3, r2, r3
	add r4, r4, #218
	add r0, r1, r4
	strh r3, [r0]
	ldr r3, _0806A7EC  @ =0x00000958
	add r0, r1, r3
	ldrh r0, [r0]
	add r2, r2, r0
	add r4, r4, #4
	add r0, r1, r4
	strh r2, [r0]
	mov r0, #149
	lsl r0, r0, #4
	add r3, r1, r0
	ldr r2, _0806A7F0  @ =0x00000A2A
	add r0, r1, r2
	ldrh r2, [r0]
	ldrh r3, [r3]
	add r3, r2, r3
	sub r4, r4, #2
	add r0, r1, r4
	strh r3, [r0]
	ldr r3, _0806A7F4  @ =0x00000956
	add r0, r1, r3
	ldrh r0, [r0]
	add r2, r2, r0
	add r4, r4, #4
	add r1, r1, r4
	strh r2, [r1]
	pop {r4}
	pop {r0}
	bx r0
_0806A7D8:
	.4byte 0x000009AD
_0806A7DC:
	.4byte 0x00000A4C
_0806A7E0:
	.4byte gRam
_0806A7E4:
	.4byte 0x00000952
_0806A7E8:
	.4byte 0x00000A28
_0806A7EC:
	.4byte 0x00000958
_0806A7F0:
	.4byte 0x00000A2A
_0806A7F4:
	.4byte 0x00000956
	THUMB_FUNC_END sub_0806A718


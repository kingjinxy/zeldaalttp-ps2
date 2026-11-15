	THUMB_FUNC_START sub_0811F980
sub_0811F980: @ 0x0811F980
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _0811F9E0  @ =gRam
	ldr r3, _0811F9E4  @ =0x00000E15
	add r1, r2, r3
	add r0, r0, r1
	ldrb r0, [r0]
	ldr r3, _0811F9E8  @ =0x000015F9
	add r1, r2, r3
	strb r0, [r1]
	mov r3, #15
	add r5, r2, #0
	add r6, r1, #0
_0811F99C:
	lsl r0, r3, #24
	asr r2, r0, #24
	ldr r3, _0811F9EC  @ =0x00000FA2
	add r1, r5, r3
	add r1, r2, r1
	ldrb r1, [r1]
	add r4, r0, #0
	cmp r1, #8
	bls _0811F9CC
	ldr r0, _0811F9F0  @ =0x00001172
	add r1, r5, r0
	add r1, r2, r1
	ldr r3, _0811F9F4  @ =0x000010D2
	add r0, r5, r3
	add r0, r2, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	orr r0, r0, r1
	cmp r0, #0
	bne _0811F9CC
	lsr r0, r4, #24
	ldrb r1, [r6]
	bl sub_080C4EC4
_0811F9CC:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r4, r1
	lsr r3, r0, #24
	cmp r0, #0
	bge _0811F99C
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0811F9E0:
	.4byte gRam
_0811F9E4:
	.4byte 0x00000E15
_0811F9E8:
	.4byte 0x000015F9
_0811F9EC:
	.4byte 0x00000FA2
_0811F9F0:
	.4byte 0x00001172
_0811F9F4:
	.4byte 0x000010D2
	THUMB_FUNC_END sub_0811F980


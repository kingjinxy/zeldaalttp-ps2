	THUMB_FUNC_START sub_0811CAE8
sub_0811CAE8: @ 0x0811CAE8
	push {lr}
	ldr r3, _0811CB80  @ =gUnknown_03003962
	ldr r1, _0811CB84  @ =0xFFFFF22E
	add r0, r3, r1
	ldrh r0, [r0]
	add r1, r0, #4
	strb r1, [r3]
	add r0, r1, #0
	mov r1, #255
	lsl r1, r1, #8
	add r2, r1, #0
	and r0, r0, r2
	lsr r0, r0, #8
	strb r0, [r3, #1]
	ldr r1, _0811CB88  @ =0xFFFFF232
	add r0, r3, r1
	ldrh r0, [r0]
	add r1, r0, #4
	strb r1, [r3, #2]
	add r0, r1, #0
	and r0, r0, r2
	lsr r0, r0, #8
	strb r0, [r3, #3]
	add r1, r3, #0
	sub r1, r1, #114
	ldr r2, _0811CB8C  @ =0xFFFFF226
	add r0, r3, r2
	ldrh r1, [r1]
	ldrh r0, [r0]
	sub r1, r1, r0
	ldrb r2, [r3]
	ldrb r0, [r3, #1]
	lsl r0, r0, #8
	add r2, r2, r0
	sub r2, r2, #12
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r0, r1, #16
	asr r1, r1, #16
	cmp r1, #0
	bge _0811CB40
	neg r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
_0811CB40:
	lsl r0, r0, #16
	asr r0, r0, #16
	cmp r0, #11
	bgt _0811CB94
	add r1, r3, #0
	sub r1, r1, #110
	ldr r2, _0811CB90  @ =0xFFFFF220
	add r0, r3, r2
	ldrh r1, [r1]
	ldrh r0, [r0]
	sub r1, r1, r0
	ldrb r2, [r3, #2]
	ldrb r0, [r3, #3]
	lsl r0, r0, #8
	add r2, r2, r0
	sub r2, r2, #8
	sub r1, r1, r2
	lsl r1, r1, #16
	lsr r0, r1, #16
	asr r1, r1, #16
	cmp r1, #0
	bge _0811CB72
	neg r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
_0811CB72:
	lsl r0, r0, #16
	asr r0, r0, #16
	cmp r0, #11
	bgt _0811CB94
	mov r0, #1
	b _0811CB96
	.byte 0x00
	.byte 0x00
_0811CB80:
	.4byte gUnknown_03003962
_0811CB84:
	.4byte 0xFFFFF22E
_0811CB88:
	.4byte 0xFFFFF232
_0811CB8C:
	.4byte 0xFFFFF226
_0811CB90:
	.4byte 0xFFFFF220
_0811CB94:
	mov r0, #0
_0811CB96:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0811CAE8

	.byte 0x00
	.byte 0x00

	THUMB_FUNC_START sub_08070000
sub_08070000: @ 0x08070000
	push {r4,lr}
	ldr r2, _08070048  @ =gRam
	ldr r0, _0807004C  @ =0x000009E4
	add r3, r2, r0
	ldrb r0, [r3]
	mov r1, #2
	eor r0, r0, r1
	strb r0, [r3]
	ldr r3, _08070050  @ =0x00000AB4
	add r1, r2, r3
	ldrb r1, [r1]
	orr r0, r0, r1
	ldr r4, _08070054  @ =0x000009E3
	add r1, r2, r4
	ldrb r1, [r1]
	orr r0, r0, r1
	sub r3, r3, #210
	add r1, r2, r3
	strb r0, [r1]
	ldr r4, _08070058  @ =0x00000B74
	add r3, r2, r4
	ldr r1, _0807005C  @ =0xFFFFFF00
	add r0, r1, #0
	ldrh r4, [r3]
	add r1, r0, r4
	strh r1, [r3]
	ldr r1, _08070060  @ =0x00000B78
	add r2, r2, r1
	ldrh r3, [r2]
	add r0, r0, r3
	strh r0, [r2]
	bl sub_0806FE5C
	pop {r4}
	pop {r0}
	bx r0
_08070048:
	.4byte gRam
_0807004C:
	.4byte 0x000009E4
_08070050:
	.4byte 0x00000AB4
_08070054:
	.4byte 0x000009E3
_08070058:
	.4byte 0x00000B74
_0807005C:
	.4byte 0xFFFFFF00
_08070060:
	.4byte 0x00000B78
	THUMB_FUNC_END sub_08070000


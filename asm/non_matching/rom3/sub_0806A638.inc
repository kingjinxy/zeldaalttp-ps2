	THUMB_FUNC_START sub_0806A638
sub_0806A638: @ 0x0806A638
	push {r4,r5,lr}
	sub sp, sp, #4
	ldr r4, _0806A6E8  @ =gRam
	mov r0, #152
	lsl r0, r0, #4
	add r1, r4, r0
	mov r5, #0
	mov r0, #128
	strb r0, [r1]
	ldr r1, _0806A6EC  @ =0x00001AD0
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _0806A6F0  @ =0x00000A4C
	add r0, r4, r2
	mov r1, #0
	strh r5, [r0]
	ldr r2, _0806A6F4  @ =0x0000188B
	add r0, r4, r2
	strb r1, [r0]
	ldr r2, _0806A6F8  @ =0x00001759
	add r0, r4, r2
	strb r1, [r0]
	add r2, r2, #3
	add r0, r4, r2
	strb r1, [r0]
	add r2, r2, #43
	add r0, r4, r2
	strb r1, [r0]
	add r2, r2, #132
	add r0, r4, r2
	strb r1, [r0]
	add r2, r2, #138
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _0806A6FC  @ =0x007F007F
	str r0, [sp]
	ldr r1, _0806A700  @ =0x06008000
	ldr r2, _0806A704  @ =0x01000800
	mov r0, sp
	bl CpuFastSet
	ldr r0, _0806A708  @ =0x0000050C
	add r1, r4, r0
	mov r0, #136
	lsl r0, r0, #5
	strh r0, [r1]
	bl sub_0812EED8
	bl sub_0807499C
	bl sub_08092848
	bl sub_0812F250
	bl sub_0812FC84
	bl sub_08092D18
	bl sub_0812F9A8
	ldr r1, _0806A70C  @ =0x00001656
	add r0, r4, r1
	mov r1, #70
	strb r1, [r0]
	ldr r2, _0806A710  @ =0x00001657
	add r0, r4, r2
	strb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	add r2, r2, #1
	add r0, r4, r2
	strb r1, [r0]
	ldr r0, _0806A714  @ =0x00000D02
	add r4, r4, r0
	strh r5, [r4]
	bl sub_080A9E38
	bl sub_080AA7FC
	bl sub_080AA6F8
	bl sub_080700F8
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
_0806A6E8:
	.4byte gRam
_0806A6EC:
	.4byte 0x00001AD0
_0806A6F0:
	.4byte 0x00000A4C
_0806A6F4:
	.4byte 0x0000188B
_0806A6F8:
	.4byte 0x00001759
_0806A6FC:
	.4byte 0x007F007F
_0806A700:
	.4byte 0x06008000
_0806A704:
	.4byte 0x01000800
_0806A708:
	.4byte 0x0000050C
_0806A70C:
	.4byte 0x00001656
_0806A710:
	.4byte 0x00001657
_0806A714:
	.4byte 0x00000D02
	THUMB_FUNC_END sub_0806A638


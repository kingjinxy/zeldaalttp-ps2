	THUMB_FUNC_START sub_0812191C
sub_0812191C: @ 0x0812191C
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r2, r0, #24
	cmp r2, #0
	bne _081219C2
	ldr r3, _08121978  @ =gRam
	mov r1, sp
	ldr r4, _0812197C  @ =0x00000E1F
	add r0, r3, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	ldr r4, _08121980  @ =0x00000A92
	add r0, r3, r4
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	ldr r2, _08121984  @ =0x00000A88
	add r0, r3, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #24
	strb r1, [r0]
	ldr r4, _08121988  @ =0x000016D5
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r0, #4
	bne _08121990
	mov r0, sp
	ldr r2, _0812198C  @ =0x00000DF7
	add r1, r3, r2
	ldrb r0, [r0]
	add r1, r1, r0
	mov r0, #248
	b _0812199C
	.byte 0x00
	.byte 0x00
_08121978:
	.4byte gRam
_0812197C:
	.4byte 0x00000E1F
_08121980:
	.4byte 0x00000A92
_08121984:
	.4byte 0x00000A88
_08121988:
	.4byte 0x000016D5
_0812198C:
	.4byte 0x00000DF7
_08121990:
	mov r0, sp
	ldr r4, _081219CC  @ =0x00000DF7
	add r1, r3, r4
	ldrb r0, [r0]
	add r1, r1, r0
	mov r0, #4
_0812199C:
	strb r0, [r1]
	mov r0, #12
	bl sub_0812FBC4
	ldr r1, _081219D0  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r2, r1, r0
	ldr r0, _081219D4  @ =0x00000A8A
	strh r0, [r2]
	ldr r2, _081219D8  @ =0x00000964
	add r1, r1, r2
	mov r0, #146
	lsl r0, r0, #3
	strh r0, [r1]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_081219C2:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081219CC:
	.4byte 0x00000DF7
_081219D0:
	.4byte gRam
_081219D4:
	.4byte 0x00000A8A
_081219D8:
	.4byte 0x00000964
	THUMB_FUNC_END sub_0812191C


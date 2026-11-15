	THUMB_FUNC_START sub_08078F64
sub_08078F64: @ 0x08078F64
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r1, _08078FE8  @ =gRam
	ldr r2, _08078FEC  @ =0x00001661
	add r0, r1, r2
	ldrb r0, [r0]
	mov r8, r0
	mov r0, #44
	mov r2, r8
	mul r2, r0, r2
	ldr r0, _08078FF0  @ =gUnknown_08150D24
	add r2, r2, r0
	mov r12, r2
	ldrh r2, [r2, #40]
	ldr r3, _08078FF4  @ =0x00000A1C
	add r0, r1, r3
	strh r2, [r0]
	mov r4, r12
	ldrh r2, [r4]
	ldr r5, _08078FF8  @ =0x000009DA
	add r0, r1, r5
	strh r2, [r0]
	ldr r3, _08078FFC  @ =0x00000B36
	add r0, r1, r3
	strh r2, [r0]
	ldrh r0, [r4, #20]
	ldr r4, _08079000  @ =0x00000958
	add r7, r1, r4
	strh r0, [r7]
	sub r5, r5, #132
	add r6, r1, r5
	strh r0, [r6]
	mov r2, #163
	lsl r2, r2, #4
	add r5, r1, r2
	strh r0, [r5]
	add r4, r4, #218
	add r3, r1, r4
	strh r0, [r3]
	mov r0, r12
	ldrh r2, [r0, #18]
	sub r4, r4, #224
	add r0, r1, r4
	strh r2, [r0]
	sub r4, r4, #2
	add r0, r1, r4
	strh r2, [r0]
	add r4, r4, #220
	add r0, r1, r4
	strh r2, [r0]
	add r4, r4, #2
	add r0, r1, r4
	strh r2, [r0]
	ldr r2, _08079004  @ =0x0000165E
	add r0, r1, r2
	ldrb r0, [r0]
	add r4, r1, #0
	cmp r0, #0
	bne _0807900C
	ldr r0, _08079008  @ =0x00002148
	strh r0, [r7]
	strh r0, [r6]
	strh r0, [r5]
	strh r0, [r3]
	b _08079020
_08078FE8:
	.4byte gRam
_08078FEC:
	.4byte 0x00001661
_08078FF0:
	.4byte gUnknown_08150D24
_08078FF4:
	.4byte 0x00000A1C
_08078FF8:
	.4byte 0x000009DA
_08078FFC:
	.4byte 0x00000B36
_08079000:
	.4byte 0x00000958
_08079004:
	.4byte 0x0000165E
_08079008:
	.4byte 0x00002148
_0807900C:
	mov r3, r12
	ldrh r1, [r3, #22]
	mov r5, #182
	lsl r5, r5, #5
	add r0, r4, r5
	strh r1, [r0]
	ldrh r1, [r3, #24]
	ldr r2, _08079170  @ =0x000016C4
	add r0, r4, r2
	strh r1, [r0]
_08079020:
	mov r3, r12
	ldrh r1, [r3, #26]
	ldr r5, _08079174  @ =0x00000B8C
	add r0, r4, r5
	mov r3, #0
	mov r2, #0
	strh r1, [r0]
	add r1, r1, #2
	add r5, r5, #2
	add r0, r4, r5
	strh r1, [r0]
	mov r1, r12
	ldrh r0, [r1, #28]
	add r5, r5, #2
	add r1, r4, r5
	strh r0, [r1]
	add r0, r0, #2
	add r5, r5, #2
	add r1, r4, r5
	strh r0, [r1]
	ldr r0, _08079178  @ =0x00000A0E
	add r1, r4, r0
	mov r0, #252
	lsl r0, r0, #1
	strh r0, [r1]
	mov r5, r12
	ldrh r1, [r5, #38]
	ldr r5, _0807917C  @ =0x00000C08
	add r0, r4, r5
	strh r1, [r0]
	ldr r1, _08079180  @ =0x00000C0A
	add r0, r4, r1
	strh r2, [r0]
	sub r5, r5, #132
	add r0, r4, r5
	strh r2, [r0]
	ldr r0, _08079184  @ =0x00000B86
	add r1, r4, r0
	mov r0, #168
	lsl r0, r0, #1
	strh r0, [r1]
	ldr r2, _08079188  @ =0x00000B88
	add r1, r4, r2
	mov r0, #8
	strh r0, [r1]
	add r5, r5, #6
	add r1, r4, r5
	mov r0, #132
	lsl r0, r0, #1
	strh r0, [r1]
	mov r0, r12
	ldrh r1, [r0, #2]
	sub r2, r2, #20
	add r0, r4, r2
	strh r1, [r0]
	mov r5, r12
	ldrh r1, [r5, #4]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldrh r1, [r5, #6]
	ldr r5, _0807918C  @ =0x00000B78
	add r0, r4, r5
	strh r1, [r0]
	mov r0, r12
	ldrh r1, [r0, #8]
	add r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	mov r5, r12
	ldrh r1, [r5, #10]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldrh r1, [r5, #12]
	ldr r5, _08079190  @ =0x00000B7E
	add r0, r4, r5
	strh r1, [r0]
	mov r0, r12
	ldrh r1, [r0, #14]
	add r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	mov r5, r12
	ldrh r1, [r5, #16]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
	ldr r5, _08079194  @ =0x000016D5
	add r1, r4, r5
	mov r0, #2
	strb r0, [r1]
	mov r0, r12
	ldrb r1, [r0, #30]
	ldr r2, _08079198  @ =0x00000C99
	add r0, r4, r2
	strb r1, [r0]
	mov r5, r12
	ldrh r1, [r5, #32]
	ldr r2, _0807919C  @ =0x000009DE
	add r0, r4, r2
	strh r1, [r0]
	mov r0, r12
	add r0, r0, #34
	ldrb r1, [r0]
	ldr r5, _080791A0  @ =0x00000AB2
	add r0, r4, r5
	strh r1, [r0]
	ldr r1, _080791A4  @ =0x0000172C
	add r0, r4, r1
	strb r3, [r0]
	mov r2, r12
	add r2, r2, #35
	ldrb r0, [r2]
	lsr r0, r0, #4
	mov r3, #161
	lsl r3, r3, #4
	add r1, r4, r3
	strb r0, [r1]
	ldrb r1, [r2]
	mov r2, #15
	add r0, r2, #0
	and r0, r0, r1
	add r5, r5, #108
	add r1, r4, r5
	strh r0, [r1]
	mov r3, r12
	add r3, r3, #36
	ldrb r0, [r3]
	lsr r0, r0, #4
	mov r5, #158
	lsl r5, r5, #4
	add r1, r4, r5
	strb r0, [r1]
	ldrb r1, [r3]
	add r0, r2, #0
	and r0, r0, r1
	ldr r3, _080791A8  @ =0x000009E1
	add r1, r4, r3
	strb r0, [r1]
	mov r3, r12
	add r3, r3, #37
	ldrb r0, [r3]
	lsr r0, r0, #4
	add r5, r5, #3
	add r1, r4, r5
	strb r0, [r1]
	ldrb r0, [r3]
	and r2, r2, r0
	ldr r1, _080791AC  @ =0x000009E4
	add r0, r4, r1
	strb r2, [r0]
	mov r0, r12
	add r0, r0, #42
	ldrb r2, [r0]
	ldr r3, _080791B0  @ =0x00000A46
	add r1, r4, r3
	strh r2, [r1]
	mov r5, r8
	cmp r5, #0
	bne _080791BC
	ldr r3, _080791B4  @ =0x0000165E
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _080791BC
	ldr r0, _080791B8  @ =0x0000FFFF
	b _080791D6
_08079170:
	.4byte 0x000016C4
_08079174:
	.4byte 0x00000B8C
_08079178:
	.4byte 0x00000A0E
_0807917C:
	.4byte 0x00000C08
_08079180:
	.4byte 0x00000C0A
_08079184:
	.4byte 0x00000B86
_08079188:
	.4byte 0x00000B88
_0807918C:
	.4byte 0x00000B78
_08079190:
	.4byte 0x00000B7E
_08079194:
	.4byte 0x000016D5
_08079198:
	.4byte 0x00000C99
_0807919C:
	.4byte 0x000009DE
_080791A0:
	.4byte 0x00000AB2
_080791A4:
	.4byte 0x0000172C
_080791A8:
	.4byte 0x000009E1
_080791AC:
	.4byte 0x000009E4
_080791B0:
	.4byte 0x00000A46
_080791B4:
	.4byte 0x0000165E
_080791B8:
	.4byte 0x0000FFFF
_080791BC:
	ldr r5, _080791F4  @ =0x0000165E
	add r0, r4, r5
	ldrb r0, [r0]
	cmp r0, #1
	bne _080791D8
	ldr r1, _080791F8  @ =0x00001661
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #7
	bne _080791D8
	ldr r2, _080791FC  @ =0x00000A46
	add r1, r4, r2
	mov r0, #3
_080791D6:
	strh r0, [r1]
_080791D8:
	ldr r3, _08079200  @ =0x00000B52
	add r1, r4, r3
	mov r0, #0
	strh r0, [r1]
	bl sub_08078EAC
	bl sub_0806D2A0
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080791F4:
	.4byte 0x0000165E
_080791F8:
	.4byte 0x00001661
_080791FC:
	.4byte 0x00000A46
_08079200:
	.4byte 0x00000B52
	THUMB_FUNC_END sub_08078F64


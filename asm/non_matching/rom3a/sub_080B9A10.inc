	THUMB_FUNC_START sub_080B9A10
sub_080B9A10: @ 0x080B9A10
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r4, _080B9B24  @ =gRam
	ldr r1, _080B9B28  @ =0x00000996
	add r0, r4, r1
	ldrb r0, [r0]
	lsr r0, r0, #2
	mov r5, #1
	and r0, r0, r5
	ldr r1, _080B9B2C  @ =gUnknown_08170F79
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r2, _080B9B30  @ =0x00000CEA
	add r0, r4, r2
	strh r1, [r0]
	ldr r0, _080B9B34  @ =0x00000F28
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #31
	ldr r1, _080B9B38  @ =0x00001128
	add r3, r4, r1
	ldrb r1, [r2]
	ldr r2, _080B9B3C  @ =gUnknown_08170F7B
	add r0, r0, r2
	ldrb r0, [r0]
	add r1, r1, r0
	asr r1, r1, #1
	mov r0, #64
	and r1, r1, r0
	mov r0, #50
	orr r1, r1, r0
	strb r1, [r3]
	mov r0, #6
	mov r1, #36
	mov r2, #2
	bl sub_080BD874
	mov r0, #6
	bl sub_080B925C
	ldr r2, _080B9B40  @ =0x00001127
	add r1, r4, r2
	mov r0, #49
	strb r0, [r1]
	ldr r0, _080B9B44  @ =0x00000FC7
	add r3, r4, r0
	ldrb r0, [r3]
	cmp r0, #0
	bne _080B9A9C
	ldr r1, _080B9B48  @ =0x00000F67
	add r2, r4, r1
	ldrb r1, [r2]
	add r0, r1, #0
	eor r0, r0, r5
	strb r0, [r2]
	ldr r0, _080B9B4C  @ =gUnknown_08170F6B
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r3]
	ldr r0, _080B9B50  @ =0x00000F97
	add r2, r4, r0
	ldrb r0, [r2]
	add r0, r0, #1
	mov r1, #3
	and r0, r0, r1
	strb r0, [r2]
_080B9A9C:
	mov r0, #5
	mov r1, #38
	mov r2, #2
	bl sub_080BD874
	mov r2, #4
	add r6, r4, #0
	mov r1, #0
	mov r8, r1
	ldr r0, _080B9B54  @ =0x00001032
	add r7, r6, r0
_080B9AB2:
	ldr r1, _080B9B28  @ =0x00000996
	add r0, r6, r1
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	lsl r5, r2, #24
	cmp r0, #0
	bne _080B9AD2
	asr r2, r5, #24
	ldr r1, _080B9B58  @ =0x00000F92
	add r0, r6, r1
	add r2, r2, r0
	ldrb r0, [r2]
	mov r1, #1
	eor r0, r0, r1
	strb r0, [r2]
_080B9AD2:
	asr r4, r5, #24
	ldr r2, _080B9B5C  @ =0x00001122
	add r0, r6, r2
	add r0, r4, r0
	mov r1, #49
	strb r1, [r0]
	lsr r5, r5, #24
	ldr r0, _080B9B60  @ =gUnknown_08170F6D
	add r0, r4, r0
	ldrb r1, [r0]
	ldr r0, _080B9B64  @ =gUnknown_08170F72
	add r0, r4, r0
	ldrb r2, [r0]
	add r0, r5, #0
	bl sub_080BD874
	ldr r1, _080B9B68  @ =0x00001012
	add r0, r6, r1
	add r0, r5, r0
	mov r2, r8
	strb r2, [r0]
	add r1, r5, r7
	mov r0, #16
	strb r0, [r1]
	mov r0, #4
	bl sub_080CF370
	add r0, r5, #0
	bl sub_080C6230
	sub r4, r4, #1
	lsl r4, r4, #24
	lsr r2, r4, #24
	cmp r4, #0
	bge _080B9AB2
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B9B24:
	.4byte gRam
_080B9B28:
	.4byte 0x00000996
_080B9B2C:
	.4byte gUnknown_08170F79
_080B9B30:
	.4byte 0x00000CEA
_080B9B34:
	.4byte 0x00000F28
_080B9B38:
	.4byte 0x00001128
_080B9B3C:
	.4byte gUnknown_08170F7B
_080B9B40:
	.4byte 0x00001127
_080B9B44:
	.4byte 0x00000FC7
_080B9B48:
	.4byte 0x00000F67
_080B9B4C:
	.4byte gUnknown_08170F6B
_080B9B50:
	.4byte 0x00000F97
_080B9B54:
	.4byte 0x00001032
_080B9B58:
	.4byte 0x00000F92
_080B9B5C:
	.4byte 0x00001122
_080B9B60:
	.4byte gUnknown_08170F6D
_080B9B64:
	.4byte gUnknown_08170F72
_080B9B68:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080B9A10


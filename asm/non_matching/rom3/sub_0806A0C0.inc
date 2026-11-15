	THUMB_FUNC_START sub_0806A0C0
sub_0806A0C0: @ 0x0806A0C0
	push {r4-r7,lr}
	ldr r5, _0806A17C  @ =gRam
	ldr r0, _0806A180  @ =0x00000AB8
	add r1, r5, r0
	mov r0, #0
	strh r0, [r1]
	ldr r1, _0806A184  @ =0x000009C6
	add r2, r5, r1
	ldrh r0, [r2]
	ldr r3, _0806A188  @ =gUnknown_02002D40
	add r0, r0, r3
	ldrb r1, [r0]
	ldr r3, _0806A18C  @ =0x00000C9B
	add r0, r5, r3
	strb r1, [r0]
	ldr r1, _0806A190  @ =gUnknown_0814C868
	ldrh r0, [r2]
	add r0, r0, r1
	ldrb r1, [r0]
	sub r3, r3, #1
	add r0, r5, r3
	strb r1, [r0]
	ldrh r6, [r2]
	mov r4, #63
	and r4, r4, r6
	ldr r0, _0806A194  @ =0x00000C92
	add r2, r5, r0
	ldrh r1, [r2]
	sub r3, r3, #6
	add r0, r5, r3
	strh r1, [r0]
	ldr r0, _0806A198  @ =gUnknown_0814D2BA
	add r0, r4, r0
	ldrb r7, [r0]
	strh r7, [r2]
	ldr r0, _0806A19C  @ =0x00000C96
	add r3, r5, r0
	ldrb r1, [r3]
	ldr r2, _0806A1A0  @ =gUnknown_0814D2FA
	lsl r0, r4, #1
	add r0, r0, r2
	ldrh r0, [r0]
	orr r1, r1, r0
	strh r1, [r3]
	mov r1, #32
	mov r4, #0
	mov r0, #64
	and r0, r0, r6
	cmp r0, #0
	beq _0806A128
	mov r1, #33
	mov r4, #8
_0806A128:
	ldr r2, _0806A1A4  @ =0x00000C99
	add r0, r5, r2
	strb r1, [r0]
	ldr r1, _0806A1A8  @ =gUnknown_0822BA38
	add r0, r4, #6
	add r0, r0, r1
	ldrb r1, [r0]
	ldr r3, _0806A1AC  @ =0x00000C9C
	add r0, r5, r3
	strh r1, [r0]
	mov r0, #191
	and r0, r0, r6
	ldr r1, _0806A1B0  @ =gUnknown_0814D37A
	lsl r0, r0, #1
	add r1, r0, r1
	ldrh r2, [r1]
	sub r3, r3, #20
	add r1, r5, r3
	strh r2, [r1]
	ldr r1, _0806A1B4  @ =gUnknown_0814D3FA
	add r0, r0, r1
	ldrh r1, [r0]
	ldr r2, _0806A1B8  @ =0x00000C8C
	add r0, r5, r2
	strh r1, [r0]
	mov r4, #254
	lsl r4, r4, #2
	cmp r7, #0
	bne _0806A166
	mov r4, #252
	lsl r4, r4, #1
_0806A166:
	ldr r3, _0806A1BC  @ =0x00000C8A
	add r0, r5, r3
	strh r4, [r0]
	asr r1, r4, #3
	ldr r2, _0806A1C0  @ =0x00000C8E
	add r0, r5, r2
	strh r1, [r0]
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806A17C:
	.4byte gRam
_0806A180:
	.4byte 0x00000AB8
_0806A184:
	.4byte 0x000009C6
_0806A188:
	.4byte gUnknown_02002D40
_0806A18C:
	.4byte 0x00000C9B
_0806A190:
	.4byte gUnknown_0814C868
_0806A194:
	.4byte 0x00000C92
_0806A198:
	.4byte gUnknown_0814D2BA
_0806A19C:
	.4byte 0x00000C96
_0806A1A0:
	.4byte gUnknown_0814D2FA
_0806A1A4:
	.4byte 0x00000C99
_0806A1A8:
	.4byte gUnknown_0822BA38
_0806A1AC:
	.4byte 0x00000C9C
_0806A1B0:
	.4byte gUnknown_0814D37A
_0806A1B4:
	.4byte gUnknown_0814D3FA
_0806A1B8:
	.4byte 0x00000C8C
_0806A1BC:
	.4byte 0x00000C8A
_0806A1C0:
	.4byte 0x00000C8E
	THUMB_FUNC_END sub_0806A0C0


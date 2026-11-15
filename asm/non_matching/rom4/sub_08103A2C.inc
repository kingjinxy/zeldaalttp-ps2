	THUMB_FUNC_START sub_08103A2C
sub_08103A2C: @ 0x08103A2C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _08103A80  @ =gRam
	ldr r1, _08103A84  @ =0x00001172
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C5044
	ldr r5, _08103A88  @ =0x00000FC2
	add r0, r6, r5
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _08103A9C
	cmp r0, #32
	bne _08103A5A
	add r0, r4, #0
	bl sub_08103AB8
_08103A5A:
	ldr r0, _08103A8C  @ =0x00000F92
	add r2, r6, r0
	add r2, r4, r2
	ldr r0, _08103A90  @ =gUnknown_0817BA44
	ldrb r1, [r5]
	lsr r1, r1, #3
	add r1, r1, r0
	ldr r3, _08103A94  @ =gUnknown_0817BA4C
	ldr r5, _08103A98  @ =0x00000FB2
	add r0, r6, r5
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r3
	ldrb r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	strb r0, [r2]
	b _08103AAC
	.byte 0x00
	.byte 0x00
_08103A80:
	.4byte gRam
_08103A84:
	.4byte 0x00001172
_08103A88:
	.4byte 0x00000FC2
_08103A8C:
	.4byte 0x00000F92
_08103A90:
	.4byte gUnknown_0817BA44
_08103A94:
	.4byte gUnknown_0817BA4C
_08103A98:
	.4byte 0x00000FB2
_08103A9C:
	ldr r1, _08103AB4  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #63
	strb r0, [r5]
_08103AAC:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08103AB4:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_08103A2C


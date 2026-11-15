	THUMB_FUNC_START sub_080E3F60
sub_080E3F60: @ 0x080E3F60
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080E3FDC  @ =gRam
	ldr r1, _080E3FE0  @ =0x00001172
	add r0, r6, r1
	add r0, r4, r0
	mov r7, #0
	strb r7, [r0]
	add r0, r4, #0
	bl sub_080C5044
	ldr r1, _080E3FE4  @ =0x00000FC2
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	beq _080E3FF8
	sub r1, r1, #96
	add r0, r6, r1
	add r1, r4, r0
	strb r7, [r1]
	ldrb r0, [r5]
	cmp r0, #39
	bhi _080E3F96
	sub r0, r7, #1
	strb r0, [r1]
_080E3F96:
	ldrb r0, [r5]
	cmp r0, #16
	bne _080E3FA2
	add r0, r4, #0
	bl sub_080E3A94
_080E3FA2:
	ldr r1, _080E3FE8  @ =0x00000FB2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #3
	ldrb r1, [r5]
	lsr r1, r1, #3
	orr r0, r0, r1
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080E3FEC  @ =0x00000FF2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #73
	bne _080E3FCA
	add r0, r2, #0
	add r0, r0, #32
	lsl r0, r0, #24
	lsr r2, r0, #24
_080E3FCA:
	ldr r1, _080E3FF0  @ =0x00000F92
	add r0, r6, r1
	add r0, r4, r0
	ldr r1, _080E3FF4  @ =gUnknown_0817710C
	add r1, r2, r1
	ldrb r1, [r1]
	strb r1, [r0]
	b _080E400E
	.byte 0x00
	.byte 0x00
_080E3FDC:
	.4byte gRam
_080E3FE0:
	.4byte 0x00001172
_080E3FE4:
	.4byte 0x00000FC2
_080E3FE8:
	.4byte 0x00000FB2
_080E3FEC:
	.4byte 0x00000FF2
_080E3FF0:
	.4byte 0x00000F92
_080E3FF4:
	.4byte gUnknown_0817710C
_080E3FF8:
	ldr r1, _080E4014  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #48
	strb r0, [r5]
	add r0, r4, #0
	bl sub_080E41E8
_080E400E:
	pop {r4-r7}
	pop {r0}
	bx r0
_080E4014:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E3F60


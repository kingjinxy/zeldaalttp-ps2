	THUMB_FUNC_START sub_0806FE5C
sub_0806FE5C: @ 0x0806FE5C
	push {r4,lr}
	ldr r3, _0806FEB8  @ =gRam
	ldr r1, _0806FEBC  @ =0x000009E1
	add r0, r3, r1
	ldrb r0, [r0]
	lsl r0, r0, #2
	mov r2, #150
	lsl r2, r2, #4
	add r1, r3, r2
	strb r0, [r1]
	add r2, r2, #128
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #1
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	orr r0, r0, r1
	add r2, r2, #4
	add r1, r3, r2
	ldrb r1, [r1]
	orr r0, r0, r1
	sub r2, r2, #1
	add r1, r3, r2
	ldrb r1, [r1]
	orr r0, r0, r1
	ldr r1, _0806FEC0  @ =0x00000AAE
	add r4, r3, r1
	ldr r1, _0806FEC4  @ =gUnknown_0814CDFC
	add r0, r0, r1
	ldrb r2, [r0]
	ldrh r0, [r4]
	orr r2, r2, r0
	strh r2, [r4]
	ldr r0, _0806FEC8  @ =0x000009DA
	add r3, r3, r0
	ldrh r0, [r3]
	lsl r0, r0, #1
	ldr r1, _0806FECC  @ =gUnknown_02002000
	add r0, r0, r1
	ldrh r1, [r0]
	orr r2, r2, r1
	strh r2, [r0]
	pop {r4}
	pop {r0}
	bx r0
_0806FEB8:
	.4byte gRam
_0806FEBC:
	.4byte 0x000009E1
_0806FEC0:
	.4byte 0x00000AAE
_0806FEC4:
	.4byte gUnknown_0814CDFC
_0806FEC8:
	.4byte 0x000009DA
_0806FECC:
	.4byte gUnknown_02002000
	THUMB_FUNC_END sub_0806FE5C


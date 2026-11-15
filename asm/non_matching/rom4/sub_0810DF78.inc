	THUMB_FUNC_START sub_0810DF78
sub_0810DF78: @ 0x0810DF78
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _0810DFF8  @ =gRam
	ldr r2, _0810DFFC  @ =0x00000FC2
	add r0, r1, r2
	add r2, r4, r0
	ldrb r3, [r2]
	add r5, r1, #0
	cmp r3, #0
	bne _0810DF9A
	ldr r6, _0810E000  @ =0x00000F52
	add r0, r5, r6
	add r0, r4, r0
	strb r3, [r0]
	mov r0, #32
	strb r0, [r2]
_0810DF9A:
	ldr r1, _0810E004  @ =0x00001042
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0810DFB6
	ldr r2, _0810E008  @ =0x00000FB2
	add r1, r5, r2
	add r1, r4, r1
	ldr r2, _0810E00C  @ =gUnknown_0817CF62
	ldrb r0, [r1]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_0810DFB6:
	ldr r6, _0810E010  @ =0x000010A2
	add r2, r5, r6
	add r2, r4, r2
	ldr r1, _0810E008  @ =0x00000FB2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	ldrb r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r6, _0810E014  @ =0x00000F22
	add r2, r5, r6
	add r2, r4, r2
	ldr r0, _0810E018  @ =gUnknown_0817CF52
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r0, _0810E01C  @ =0x00000F12
	add r2, r5, r0
	add r2, r4, r2
	ldr r0, _0810E020  @ =gUnknown_0817CF5A
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r2]
	cmp r1, #3
	bls _0810E028
	ldr r1, _0810E024  @ =0x00000996
	add r0, r5, r1
	ldrb r0, [r0]
	lsr r3, r0, #1
	b _0810E030
	.byte 0x00
	.byte 0x00
_0810DFF8:
	.4byte gRam
_0810DFFC:
	.4byte 0x00000FC2
_0810E000:
	.4byte 0x00000F52
_0810E004:
	.4byte 0x00001042
_0810E008:
	.4byte 0x00000FB2
_0810E00C:
	.4byte gUnknown_0817CF62
_0810E010:
	.4byte 0x000010A2
_0810E014:
	.4byte 0x00000F22
_0810E018:
	.4byte gUnknown_0817CF52
_0810E01C:
	.4byte 0x00000F12
_0810E020:
	.4byte gUnknown_0817CF5A
_0810E024:
	.4byte 0x00000996
_0810E028:
	ldr r2, _0810E054  @ =0x00000996
	add r0, r5, r2
	ldrb r0, [r0]
	lsr r3, r0, #2
_0810E030:
	mov r0, #1
	and r3, r3, r0
	ldr r6, _0810E058  @ =0x00000F62
	add r1, r5, r6
	add r1, r4, r1
	ldr r2, _0810E05C  @ =gUnknown_0817CF4A
	add r6, r6, #80
	add r0, r5, r6
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #1
	orr r0, r0, r3
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
_0810E054:
	.4byte 0x00000996
_0810E058:
	.4byte 0x00000F62
_0810E05C:
	.4byte gUnknown_0817CF4A
	THUMB_FUNC_END sub_0810DF78


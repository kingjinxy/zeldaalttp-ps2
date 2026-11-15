	THUMB_FUNC_START sub_08102138
sub_08102138: @ 0x08102138
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r6, r3, #0
	ldr r4, _08102194  @ =gRam
	ldr r1, _08102198  @ =0x00000FC2
	add r0, r4, r1
	add r5, r3, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _08102182
	ldr r0, _0810219C  @ =0x00000F52
	add r1, r4, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _081021A0  @ =0x00000FB2
	add r0, r4, r1
	add r0, r3, r0
	ldrb r2, [r0]
	ldr r0, _081021A4  @ =0x00000F22
	add r1, r4, r0
	add r1, r3, r1
	ldr r0, _081021A8  @ =gUnknown_0817B616
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _081021AC  @ =0x00000F12
	add r1, r4, r0
	add r1, r3, r1
	ldr r0, _081021B0  @ =gUnknown_0817B61A
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	mov r0, #32
	strb r0, [r5]
_08102182:
	ldrb r0, [r5]
	cmp r0, #31
	bhi _081021B8
	ldr r1, _081021B4  @ =0x00000F92
	add r0, r4, r1
	add r0, r3, r0
	mov r1, #255
	strb r1, [r0]
	b _081021DC
_08102194:
	.4byte gRam
_08102198:
	.4byte 0x00000FC2
_0810219C:
	.4byte 0x00000F52
_081021A0:
	.4byte 0x00000FB2
_081021A4:
	.4byte 0x00000F22
_081021A8:
	.4byte gUnknown_0817B616
_081021AC:
	.4byte 0x00000F12
_081021B0:
	.4byte gUnknown_0817B61A
_081021B4:
	.4byte 0x00000F92
_081021B8:
	ldr r0, _081021E4  @ =0x00000F92
	add r2, r4, r0
	add r2, r6, r2
	ldr r0, _081021E8  @ =gUnknown_0817B60C
	ldrb r1, [r5]
	sub r1, r1, #32
	asr r1, r1, #2
	add r1, r1, r0
	ldr r3, _081021EC  @ =gUnknown_0817B612
	ldr r5, _081021F0  @ =0x00000FB2
	add r0, r4, r5
	add r0, r6, r0
	ldrb r0, [r0]
	add r0, r0, r3
	ldrb r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	strb r0, [r2]
_081021DC:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081021E4:
	.4byte 0x00000F92
_081021E8:
	.4byte gUnknown_0817B60C
_081021EC:
	.4byte gUnknown_0817B612
_081021F0:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_08102138


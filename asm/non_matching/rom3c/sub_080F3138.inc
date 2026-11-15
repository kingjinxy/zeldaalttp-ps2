	THUMB_FUNC_START sub_080F3138
sub_080F3138: @ 0x080F3138
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _080F31D4  @ =gRam
	ldr r2, _080F31D8  @ =0x00000FC2
	add r0, r1, r2
	add r2, r4, r0
	ldrb r0, [r2]
	add r6, r1, #0
	cmp r0, #0
	bne _080F31BA
	ldr r1, _080F31DC  @ =0x00000F62
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _080F3166
	ldr r0, _080F31E0  @ =0x00000ED2
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #2
	strb r0, [r1]
_080F3166:
	ldr r1, _080F31E4  @ =gUnknown_081792BC
	ldrb r0, [r5]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r1, _080F31E8  @ =0x00000FB2
	add r3, r6, r1
	add r3, r4, r3
	ldr r1, _080F31EC  @ =gUnknown_081792BE
	ldrb r0, [r5]
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r3]
	ldr r2, _080F31F0  @ =0x00000F22
	add r1, r6, r2
	add r1, r4, r1
	ldr r2, _080F31F4  @ =gUnknown_081792C0
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080F31F8  @ =0x00000F12
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080F31FC  @ =gUnknown_081792C4
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #3
	bne _080F31BA
	ldr r2, _080F3200  @ =0x00000F52
	add r1, r6, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080F31BA:
	ldr r0, _080F3204  @ =0x00000F92
	add r2, r6, r0
	add r2, r4, r2
	ldr r1, _080F3208  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	lsr r0, r0, #3
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	pop {r4-r6}
	pop {r0}
	bx r0
_080F31D4:
	.4byte gRam
_080F31D8:
	.4byte 0x00000FC2
_080F31DC:
	.4byte 0x00000F62
_080F31E0:
	.4byte 0x00000ED2
_080F31E4:
	.4byte gUnknown_081792BC
_080F31E8:
	.4byte 0x00000FB2
_080F31EC:
	.4byte gUnknown_081792BE
_080F31F0:
	.4byte 0x00000F22
_080F31F4:
	.4byte gUnknown_081792C0
_080F31F8:
	.4byte 0x00000F12
_080F31FC:
	.4byte gUnknown_081792C4
_080F3200:
	.4byte 0x00000F52
_080F3204:
	.4byte 0x00000F92
_080F3208:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080F3138


	THUMB_FUNC_START sub_080B9318
sub_080B9318: @ 0x080B9318
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080B934C  @ =gRam
	ldr r1, _080B9350  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #63
	bhi _080B935C
	ldr r0, _080B9354  @ =0x00000F82
	add r2, r5, r0
	add r2, r4, r2
	ldrb r0, [r2]
	add r0, r0, #1
	mov r1, #3
	and r0, r0, r1
	strb r0, [r2]
	ldr r0, _080B9358  @ =0x00000F62
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080B938E
	.byte 0x00
	.byte 0x00
_080B934C:
	.4byte gRam
_080B9350:
	.4byte 0x00000FC2
_080B9354:
	.4byte 0x00000F82
_080B9358:
	.4byte 0x00000F62
_080B935C:
	ldr r0, _080B9394  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r3, _080B9398  @ =gUnknown_08170B34
	add r0, r0, #96
	add r2, r5, r0
	add r2, r4, r2
	ldrb r0, [r2]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080B939C  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	ldr r3, _080B93A0  @ =gUnknown_08170B38
	ldrb r0, [r2]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080B93A4  @ =0x000015DC
	add r0, r5, r1
	strb r4, [r0]
	add r0, r4, #0
	bl sub_080CA58C
_080B938E:
	pop {r4,r5}
	pop {r0}
	bx r0
_080B9394:
	.4byte 0x00000F22
_080B9398:
	.4byte gUnknown_08170B34
_080B939C:
	.4byte 0x00000F12
_080B93A0:
	.4byte gUnknown_08170B38
_080B93A4:
	.4byte 0x000015DC
	THUMB_FUNC_END sub_080B9318


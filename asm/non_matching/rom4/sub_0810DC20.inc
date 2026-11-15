	THUMB_FUNC_START sub_0810DC20
sub_0810DC20: @ 0x0810DC20
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _0810DCB0  @ =gRam
	ldr r2, _0810DCB4  @ =0x00000FC2
	add r0, r1, r2
	add r6, r4, r0
	ldrb r5, [r6]
	add r7, r1, #0
	cmp r5, #0
	bne _0810DC54
	ldr r1, _0810DCB8  @ =0x0000164C
	add r0, r7, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0810DC48
	add r0, r4, #0
	mov r1, #85
	bl sub_080CF140
_0810DC48:
	ldr r2, _0810DCBC  @ =0x00000F52
	add r0, r7, r2
	add r0, r4, r0
	strb r5, [r0]
	mov r0, #80
	strb r0, [r6]
_0810DC54:
	add r0, r7, #0
	ldr r2, _0810DCC0  @ =0x00000FB2
	add r1, r0, r2
	add r3, r4, r1
	ldrb r2, [r3]
	ldr r1, _0810DCC4  @ =0x00001042
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0810DC74
	ldr r0, _0810DCC8  @ =gUnknown_0817CF30
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r3]
	ldrb r2, [r3]
_0810DC74:
	ldr r0, _0810DCCC  @ =0x00000F22
	add r1, r7, r0
	add r1, r4, r1
	ldr r0, _0810DCD0  @ =gUnknown_0817CF28
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _0810DCD4  @ =0x00000F12
	add r1, r7, r0
	add r1, r4, r1
	ldr r0, _0810DCD8  @ =gUnknown_0817CF2C
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _0810DCDC  @ =0x00000F62
	add r0, r7, r1
	add r4, r4, r0
	ldr r5, _0810DCE0  @ =gUnknown_0817CF20
	ldrb r0, [r3]
	lsl r2, r0, #1
	ldr r1, _0810DCE4  @ =0x00000996
	add r0, r7, r1
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	cmp r0, #0
	beq _0810DCE8
	mov r0, #1
	orr r0, r0, r2
	b _0810DCEA
_0810DCB0:
	.4byte gRam
_0810DCB4:
	.4byte 0x00000FC2
_0810DCB8:
	.4byte 0x0000164C
_0810DCBC:
	.4byte 0x00000F52
_0810DCC0:
	.4byte 0x00000FB2
_0810DCC4:
	.4byte 0x00001042
_0810DCC8:
	.4byte gUnknown_0817CF30
_0810DCCC:
	.4byte 0x00000F22
_0810DCD0:
	.4byte gUnknown_0817CF28
_0810DCD4:
	.4byte 0x00000F12
_0810DCD8:
	.4byte gUnknown_0817CF2C
_0810DCDC:
	.4byte 0x00000F62
_0810DCE0:
	.4byte gUnknown_0817CF20
_0810DCE4:
	.4byte 0x00000996
_0810DCE8:
	add r0, r2, #0
_0810DCEA:
	add r0, r5, r0
	ldrb r0, [r0]
	strb r0, [r4]
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810DC20

	.byte 0x00
	.byte 0x00

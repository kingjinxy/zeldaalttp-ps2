	THUMB_FUNC_START sub_080EAC64
sub_080EAC64: @ 0x080EAC64
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080EACEC  @ =gRam
	ldr r1, _080EACF0  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	ldr r2, _080EACF4  @ =0x00000FC2
	add r1, r5, r2
	add r6, r4, r1
	ldrb r1, [r6]
	orr r0, r0, r1
	cmp r0, #0
	bne _080EACE6
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r1, _080EACF8  @ =0x0000097C
	add r0, r5, r1
	ldrb r0, [r0]
	add r0, r0, #40
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #79
	bhi _080EACE6
	ldr r2, _080EACFC  @ =0x0000097D
	add r0, r5, r2
	ldrb r0, [r0]
	add r0, r0, #40
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #79
	bhi _080EACE6
	add r0, r4, #0
	mov r1, #100
	bl sub_080CF140
	ldr r0, _080EAD00  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r1, #64
	strb r1, [r6]
	ldr r2, _080EAD04  @ =0x00000F72
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r2, _080EAD08  @ =0x00000F62
	add r1, r5, r2
	add r1, r4, r1
	ldr r2, _080EAD0C  @ =gUnknown_08177D4E
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_080EACE6:
	pop {r4-r6}
	pop {r0}
	bx r0
_080EACEC:
	.4byte gRam
_080EACF0:
	.4byte 0x00000996
_080EACF4:
	.4byte 0x00000FC2
_080EACF8:
	.4byte 0x0000097C
_080EACFC:
	.4byte 0x0000097D
_080EAD00:
	.4byte 0x00000F52
_080EAD04:
	.4byte 0x00000F72
_080EAD08:
	.4byte 0x00000F62
_080EAD0C:
	.4byte gUnknown_08177D4E
	THUMB_FUNC_END sub_080EAC64


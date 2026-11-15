	THUMB_FUNC_START sub_080B6D78
sub_080B6D78: @ 0x080B6D78
	push {r4-r6,lr}
	mov r0, #0
	bl sub_080B65DC
	ldr r4, _080B6E00  @ =gRam
	mov r0, #201
	lsl r0, r0, #4
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	mov r6, #0
	mov r5, #0
	strh r0, [r1]
	bl sub_08079410
	ldr r1, _080B6E04  @ =0x0000095A
	add r0, r4, r1
	strh r5, [r0]
	ldr r1, _080B6E08  @ =0x00000BB8
	add r0, r4, r1
	strh r5, [r0]
	sub r1, r1, #2
	add r0, r4, r1
	strh r5, [r0]
	ldr r1, _080B6E0C  @ =0x00000A2E
	add r0, r4, r1
	strh r5, [r0]
	add r1, r1, #4
	add r0, r4, r1
	strh r5, [r0]
	ldr r0, _080B6E10  @ =gUnknown_02002434
	ldrh r0, [r0]
	cmp r0, #0
	bne _080B6E38
	ldr r0, _080B6E14  @ =0x00000A3C
	add r1, r4, r0
	ldr r0, _080B6E18  @ =0x0000FFF1
	strh r0, [r1]
	ldr r0, _080B6E1C  @ =gUnknown_02006883
	strb r6, [r0]
	ldr r0, _080B6E20  @ =0x000009AC
	add r1, r4, r0
	mov r0, #5
	strb r0, [r1]
	ldr r1, _080B6E24  @ =0x000009AD
	add r0, r4, r1
	strb r6, [r0]
	add r1, r1, #59
	add r0, r4, r1
	strh r5, [r0]
	bl sub_0806BDB8
	ldr r1, _080B6E28  @ =0x00001AD0
	add r0, r4, r1
	strb r6, [r0]
	ldr r1, _080B6E2C  @ =0x00000B52
	add r0, r4, r1
	strh r5, [r0]
	ldr r1, _080B6E30  @ =0x00000A1C
	add r0, r4, r1
	strh r5, [r0]
	ldr r1, _080B6E34  @ =0x00000CAA
	add r0, r4, r1
	strb r6, [r0]
	bl sub_08130384
	b _080B6E56
	.byte 0x00
	.byte 0x00
_080B6E00:
	.4byte gRam
_080B6E04:
	.4byte 0x0000095A
_080B6E08:
	.4byte 0x00000BB8
_080B6E0C:
	.4byte 0x00000A2E
_080B6E10:
	.4byte gUnknown_02002434
_080B6E14:
	.4byte 0x00000A3C
_080B6E18:
	.4byte 0x0000FFF1
_080B6E1C:
	.4byte gUnknown_02006883
_080B6E20:
	.4byte 0x000009AC
_080B6E24:
	.4byte 0x000009AD
_080B6E28:
	.4byte 0x00001AD0
_080B6E2C:
	.4byte 0x00000B52
_080B6E30:
	.4byte 0x00000A1C
_080B6E34:
	.4byte 0x00000CAA
_080B6E38:
	ldr r0, _080B6E5C  @ =0x00000A3C
	add r1, r4, r0
	ldr r0, _080B6E60  @ =0x0000FFF1
	strh r0, [r1]
	ldr r0, _080B6E64  @ =gUnknown_02006883
	strb r6, [r0]
	ldr r1, _080B6E68  @ =0x000009AC
	add r0, r4, r1
	strb r6, [r0]
	add r1, r1, #1
	add r0, r4, r1
	strb r6, [r0]
	add r1, r1, #59
	add r0, r4, r1
	strh r5, [r0]
_080B6E56:
	pop {r4-r6}
	pop {r0}
	bx r0
_080B6E5C:
	.4byte 0x00000A3C
_080B6E60:
	.4byte 0x0000FFF1
_080B6E64:
	.4byte gUnknown_02006883
_080B6E68:
	.4byte 0x000009AC
	THUMB_FUNC_END sub_080B6D78


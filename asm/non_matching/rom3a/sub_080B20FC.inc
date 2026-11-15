	THUMB_FUNC_START sub_080B20FC
sub_080B20FC: @ 0x080B20FC
	push {r4,lr}
	bl sub_08069F08
	ldr r2, _080B219C  @ =gRam
	ldr r1, _080B21A0  @ =0x0000099D
	add r0, r2, r1
	mov r3, #0
	ldrsb r3, [r0, r3]
	cmp r3, #0
	bne _080B2194
	ldr r4, _080B21A4  @ =0x00001ABC
	add r0, r2, r4
	ldrb r1, [r0]
	ldr r4, _080B21A8  @ =0x000009D3
	add r0, r2, r4
	strb r1, [r0]
	ldr r1, _080B21AC  @ =0x00001ABD
	add r0, r2, r1
	ldrb r1, [r0]
	add r4, r4, #1
	add r0, r2, r4
	strb r1, [r0]
	ldr r1, _080B21B0  @ =0x00000954
	add r0, r2, r1
	strh r3, [r0]
	sub r4, r4, #122
	add r0, r2, r4
	strh r3, [r0]
	ldr r1, _080B21B4  @ =0x00001A98
	add r0, r2, r1
	ldrh r1, [r0]
	sub r4, r4, #10
	add r0, r2, r4
	strh r1, [r0]
	ldr r1, _080B21B8  @ =0x00001A9A
	add r0, r2, r1
	ldrh r1, [r0]
	add r4, r4, #2
	add r0, r2, r4
	strh r1, [r0]
	ldr r1, _080B21BC  @ =0x00001A9E
	add r0, r2, r1
	ldrh r1, [r0]
	add r4, r4, #4
	add r0, r2, r4
	strh r1, [r0]
	mov r1, #213
	lsl r1, r1, #5
	add r0, r2, r1
	ldrh r1, [r0]
	add r4, r4, #2
	add r0, r2, r4
	strh r1, [r0]
	ldr r1, _080B21C0  @ =0x00001AC5
	add r0, r2, r1
	ldrb r1, [r0]
	add r4, r4, #92
	add r0, r2, r4
	strb r1, [r0]
	ldr r0, _080B21C4  @ =0x00000A4C
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	add r4, r4, #33
	add r1, r2, r4
	mov r0, #128
	strb r0, [r1]
	ldr r0, _080B21C8  @ =0x000009CE
	add r1, r2, r0
	mov r0, #9
	strb r0, [r1]
	mov r1, #201
	lsl r1, r1, #4
	add r0, r2, r1
	strh r3, [r0]
_080B2194:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B219C:
	.4byte gRam
_080B21A0:
	.4byte 0x0000099D
_080B21A4:
	.4byte 0x00001ABC
_080B21A8:
	.4byte 0x000009D3
_080B21AC:
	.4byte 0x00001ABD
_080B21B0:
	.4byte 0x00000954
_080B21B4:
	.4byte 0x00001A98
_080B21B8:
	.4byte 0x00001A9A
_080B21BC:
	.4byte 0x00001A9E
_080B21C0:
	.4byte 0x00001AC5
_080B21C4:
	.4byte 0x00000A4C
_080B21C8:
	.4byte 0x000009CE
	THUMB_FUNC_END sub_080B20FC


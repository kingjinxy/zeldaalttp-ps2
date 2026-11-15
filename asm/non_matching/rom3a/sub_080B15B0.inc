	THUMB_FUNC_START sub_080B15B0
sub_080B15B0: @ 0x080B15B0
	push {r4,r5,lr}
	bl sub_08069FF4
	ldr r4, _080B1630  @ =gRam
	ldr r1, _080B1634  @ =0x0000099D
	add r0, r4, r1
	mov r5, #0
	ldrsb r5, [r0, r5]
	cmp r5, #0
	bne _080B162A
	ldr r2, _080B1638  @ =0x000009B2
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080B15D6
	bl sub_08130AB4
_080B15D6:
	ldr r3, _080B163C  @ =0x00001AC6
	add r0, r4, r3
	ldrb r1, [r0]
	ldr r2, _080B1640  @ =0x000009B5
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _080B1644  @ =0x00000A1A
	add r0, r4, r3
	ldrh r1, [r0]
	sub r2, r2, #9
	add r0, r4, r2
	strb r1, [r0]
	sub r3, r3, #109
	add r0, r4, r3
	strb r5, [r0]
	ldr r0, _080B1648  @ =0x000017AA
	add r1, r4, r0
	mov r0, #144
	strb r0, [r1]
	ldr r1, _080B164C  @ =0x00001AB8
	add r0, r4, r1
	ldrh r1, [r0]
	ldrb r2, [r0]
	add r3, r3, #143
	add r0, r4, r3
	strh r2, [r0]
	lsr r1, r1, #8
	ldr r2, _080B1650  @ =0x00000A3E
	add r0, r4, r2
	strb r1, [r0]
	ldr r3, _080B1654  @ =0x00001AB4
	add r0, r4, r3
	ldrh r1, [r0]
	ldr r2, _080B1658  @ =0x00000CF8
	add r0, r4, r2
	strh r1, [r0]
	add r3, r3, #2
	add r0, r4, r3
	ldrh r1, [r0]
	add r2, r2, #2
	add r0, r4, r2
	strh r1, [r0]
_080B162A:
	pop {r4,r5}
	pop {r0}
	bx r0
_080B1630:
	.4byte gRam
_080B1634:
	.4byte 0x0000099D
_080B1638:
	.4byte 0x000009B2
_080B163C:
	.4byte 0x00001AC6
_080B1640:
	.4byte 0x000009B5
_080B1644:
	.4byte 0x00000A1A
_080B1648:
	.4byte 0x000017AA
_080B164C:
	.4byte 0x00001AB8
_080B1650:
	.4byte 0x00000A3E
_080B1654:
	.4byte 0x00001AB4
_080B1658:
	.4byte 0x00000CF8
	THUMB_FUNC_END sub_080B15B0


	THUMB_FUNC_START sub_080B0214
sub_080B0214: @ 0x080B0214
	push {r4,lr}
	mov r1, #4
	ldr r2, _080B0238  @ =gUnknown_03003045
	ldr r0, _080B023C  @ =0x00000A2F
	add r4, r2, r0
	mov r3, #1
_080B0220:
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #34
	bne _080B022C
	add r0, r1, r4
	strb r3, [r0]
_080B022C:
	sub r1, r1, #1
	cmp r1, #0
	bge _080B0220
	pop {r4}
	pop {r0}
	bx r0
_080B0238:
	.4byte gUnknown_03003045
_080B023C:
	.4byte 0x00000A2F
	THUMB_FUNC_END sub_080B0214


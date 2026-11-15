	THUMB_FUNC_START sub_080ABAD4
sub_080ABAD4: @ 0x080ABAD4
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080ABB1C  @ =gRam
	ldr r3, _080ABB20  @ =0x00000DC5
	add r1, r2, r3
	add r1, r0, r1
	ldrb r3, [r1]
	mov r4, #150
	lsl r4, r4, #4
	add r1, r2, r4
	strb r3, [r1]
	ldr r3, _080ABB24  @ =0x00000DD9
	add r1, r2, r3
	add r1, r0, r1
	ldrb r3, [r1]
	add r4, r4, #1
	add r1, r2, r4
	strb r3, [r1]
	ldr r3, _080ABB28  @ =0x00000DCF
	add r1, r2, r3
	add r1, r0, r1
	ldrb r3, [r1]
	add r4, r4, #3
	add r1, r2, r4
	strb r3, [r1]
	ldr r3, _080ABB2C  @ =0x00000DE3
	add r1, r2, r3
	add r0, r0, r1
	ldrb r0, [r0]
	add r4, r4, #1
	add r2, r2, r4
	strb r0, [r2]
	pop {r4}
	pop {r0}
	bx r0
_080ABB1C:
	.4byte gRam
_080ABB20:
	.4byte 0x00000DC5
_080ABB24:
	.4byte 0x00000DD9
_080ABB28:
	.4byte 0x00000DCF
_080ABB2C:
	.4byte 0x00000DE3
	THUMB_FUNC_END sub_080ABAD4


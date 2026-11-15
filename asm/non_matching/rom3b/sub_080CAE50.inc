	THUMB_FUNC_START sub_080CAE50
sub_080CAE50: @ 0x080CAE50
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080CAEA8  @ =gRam
	ldr r2, _080CAEAC  @ =0x00000EE2
	add r1, r3, r2
	add r1, r0, r1
	mov r4, #150
	lsl r4, r4, #4
	add r2, r3, r4
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _080CAEB0  @ =0x00000F02
	add r1, r3, r2
	add r1, r0, r1
	add r4, r4, #1
	add r2, r3, r4
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _080CAEB4  @ =0x00000ED2
	add r1, r3, r2
	add r1, r0, r1
	add r4, r4, #3
	add r2, r3, r4
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _080CAEB8  @ =0x00000EF2
	add r1, r3, r2
	add r1, r0, r1
	add r4, r4, #1
	add r2, r3, r4
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _080CAEBC  @ =0x00001142
	add r1, r3, r2
	add r0, r0, r1
	add r4, r4, #3
	add r3, r3, r4
	ldrb r1, [r3]
	strb r1, [r0]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CAEA8:
	.4byte gRam
_080CAEAC:
	.4byte 0x00000EE2
_080CAEB0:
	.4byte 0x00000F02
_080CAEB4:
	.4byte 0x00000ED2
_080CAEB8:
	.4byte 0x00000EF2
_080CAEBC:
	.4byte 0x00001142
	THUMB_FUNC_END sub_080CAE50


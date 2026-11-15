	THUMB_FUNC_START sub_080E9FDC
sub_080E9FDC: @ 0x080E9FDC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080EA044  @ =gRam
	ldr r1, _080EA048  @ =0x00000FC2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080EA03C
	ldr r4, _080EA04C  @ =0x00000EE2
	add r1, r3, r4
	add r1, r2, r1
	add r4, r4, #128
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080EA050  @ =0x00000F02
	add r1, r3, r0
	add r1, r2, r1
	add r4, r4, #16
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080EA054  @ =0x00000ED2
	add r1, r3, r0
	add r1, r2, r1
	add r4, r4, #16
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080EA058  @ =0x00000EF2
	add r1, r3, r0
	add r1, r2, r1
	ldr r4, _080EA05C  @ =0x00001082
	add r0, r3, r4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080EA060  @ =0x00000F52
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080EA03C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EA044:
	.4byte gRam
_080EA048:
	.4byte 0x00000FC2
_080EA04C:
	.4byte 0x00000EE2
_080EA050:
	.4byte 0x00000F02
_080EA054:
	.4byte 0x00000ED2
_080EA058:
	.4byte 0x00000EF2
_080EA05C:
	.4byte 0x00001082
_080EA060:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E9FDC


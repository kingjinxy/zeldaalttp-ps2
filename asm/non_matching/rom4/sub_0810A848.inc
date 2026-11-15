	THUMB_FUNC_START sub_0810A848
sub_0810A848: @ 0x0810A848
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _0810A8D0  @ =gRam
	ldr r1, _0810A8D4  @ =0x00000FC2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #0
	bne _0810A8C8
	ldr r2, _0810A8D8  @ =0x00000F52
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl GetRandomInt
	mov r1, #63
	and r1, r1, r0
	add r1, r1, #96
	strb r1, [r6]
	ldr r0, _0810A8DC  @ =0x00000EE2
	add r1, r5, r0
	add r1, r4, r1
	ldr r2, _0810A8E0  @ =0x00000F62
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _0810A8E4  @ =0x00000F02
	add r1, r5, r0
	add r1, r4, r1
	add r2, r2, #16
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _0810A8E8  @ =0x00000ED2
	add r1, r5, r0
	add r1, r4, r1
	add r2, r2, #16
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _0810A8EC  @ =0x00000EF2
	add r1, r5, r0
	add r1, r4, r1
	ldr r2, _0810A8F0  @ =0x00001082
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _0810A8F4  @ =0x00001052
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #5
	strb r1, [r0]
	sub r2, r2, #240
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #8
	strb r1, [r0]
_0810A8C8:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810A8D0:
	.4byte gRam
_0810A8D4:
	.4byte 0x00000FC2
_0810A8D8:
	.4byte 0x00000F52
_0810A8DC:
	.4byte 0x00000EE2
_0810A8E0:
	.4byte 0x00000F62
_0810A8E4:
	.4byte 0x00000F02
_0810A8E8:
	.4byte 0x00000ED2
_0810A8EC:
	.4byte 0x00000EF2
_0810A8F0:
	.4byte 0x00001082
_0810A8F4:
	.4byte 0x00001052
	THUMB_FUNC_END sub_0810A848


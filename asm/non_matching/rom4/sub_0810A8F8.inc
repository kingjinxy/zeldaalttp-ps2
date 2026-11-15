	THUMB_FUNC_START sub_0810A8F8
sub_0810A8F8: @ 0x0810A8F8
	push {r4,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	add r4, r3, #0
	ldr r2, _0810A950  @ =gRam
	ldr r1, _0810A954  @ =0x00000FC2
	add r0, r2, r1
	add r1, r3, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _0810A91E
	mov r0, #31
	strb r0, [r1]
	ldr r0, _0810A958  @ =0x00000F52
	add r1, r2, r0
	add r1, r3, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_0810A91E:
	ldr r1, _0810A95C  @ =0x00001052
	add r0, r2, r1
	add r3, r4, r0
	ldrb r0, [r3]
	sub r0, r0, #1
	strb r0, [r3]
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _0810A948
	mov r0, #5
	strb r0, [r3]
	ldr r0, _0810A960  @ =0x00000F92
	add r2, r2, r0
	add r2, r4, r2
	ldrb r0, [r2]
	add r0, r0, #1
	mov r1, #3
	and r0, r0, r1
	add r0, r0, #8
	strb r0, [r2]
_0810A948:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810A950:
	.4byte gRam
_0810A954:
	.4byte 0x00000FC2
_0810A958:
	.4byte 0x00000F52
_0810A95C:
	.4byte 0x00001052
_0810A960:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_0810A8F8


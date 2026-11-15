	THUMB_FUNC_START sub_080E9F34
sub_080E9F34: @ 0x080E9F34
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r4, r2, #0
	ldr r3, _080E9F78  @ =gRam
	ldr r1, _080E9F7C  @ =0x00000FC2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E9F60
	ldr r0, _080E9F80  @ =0x00000F52
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080E9F84  @ =0x00001152
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #64
	strb r1, [r0]
_080E9F60:
	ldr r1, _080E9F88  @ =0x00000F92
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080E9D14
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E9F78:
	.4byte gRam
_080E9F7C:
	.4byte 0x00000FC2
_080E9F80:
	.4byte 0x00000F52
_080E9F84:
	.4byte 0x00001152
_080E9F88:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080E9F34


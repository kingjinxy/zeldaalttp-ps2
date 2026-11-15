	THUMB_FUNC_START sub_08118CE0
sub_08118CE0: @ 0x08118CE0
	push {r4,r5,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _08118D04  @ =gRam
	ldr r2, _08118D08  @ =0x00000E1F
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08118D18
	cmp r0, #2
	bne _08118D0C
	add r0, r4, #0
	bl sub_08118D68
	b _08118D4E
	.byte 0x00
	.byte 0x00
_08118D04:
	.4byte gRam
_08118D08:
	.4byte 0x00000E1F
_08118D0C:
	ldr r0, _08118D58  @ =0x00000A88
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
_08118D18:
	add r0, r4, #0
	mov r1, sp
	bl sub_080BF804
	ldr r3, _08118D5C  @ =gRam
	ldr r1, _08118D60  @ =0x00000A92
	add r0, r3, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #247
	bls _08118D48
	ldr r2, _08118D64  @ =0x00000E1F
	add r1, r3, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	mov r2, #0
	strb r0, [r1]
	ldr r1, _08118D58  @ =0x00000A88
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #24
	strb r1, [r0]
	strb r2, [r5]
_08118D48:
	add r0, r4, #0
	bl sub_08118D68
_08118D4E:
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08118D58:
	.4byte 0x00000A88
_08118D5C:
	.4byte gRam
_08118D60:
	.4byte 0x00000A92
_08118D64:
	.4byte 0x00000E1F
	THUMB_FUNC_END sub_08118CE0


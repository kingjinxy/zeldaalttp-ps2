	THUMB_FUNC_START sub_080DCABC
sub_080DCABC: @ 0x080DCABC
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r1, _080DCB10  @ =gRam
	ldr r2, _080DCB14  @ =0x00000FC2
	add r0, r1, r2
	add r2, r5, r0
	ldrb r0, [r2]
	add r6, r1, #0
	cmp r0, #0
	bne _080DCAE8
	ldr r0, _080DCB18  @ =0x00000F52
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080DCB1C  @ =0x00000FD2
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #64
	strb r1, [r0]
_080DCAE8:
	ldrb r0, [r2]
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #240
	bls _080DCB28
	ldr r2, _080DCB20  @ =0x00001122
	add r3, r6, r2
	add r3, r5, r3
	ldrb r0, [r3]
	mov r2, #241
	and r2, r2, r0
	ldr r4, _080DCB24  @ =gUnknown_08176142
	lsr r0, r1, #25
	mov r1, #7
	and r0, r0, r1
	add r0, r0, r4
	ldrb r0, [r0]
	orr r2, r2, r0
	strb r2, [r3]
	b _080DCB3A
_080DCB10:
	.4byte gRam
_080DCB14:
	.4byte 0x00000FC2
_080DCB18:
	.4byte 0x00000F52
_080DCB1C:
	.4byte 0x00000FD2
_080DCB20:
	.4byte 0x00001122
_080DCB24:
	.4byte gUnknown_08176142
_080DCB28:
	ldr r0, _080DCB54  @ =0x00001122
	add r2, r6, r0
	add r2, r5, r2
	ldrb r1, [r2]
	mov r0, #241
	and r0, r0, r1
	mov r1, #10
	orr r0, r0, r1
	strb r0, [r2]
_080DCB3A:
	ldr r1, _080DCB58  @ =0x00000FC2
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #240
	bne _080DCB4C
	add r0, r5, #0
	bl sub_080DCD64
_080DCB4C:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DCB54:
	.4byte 0x00001122
_080DCB58:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080DCABC


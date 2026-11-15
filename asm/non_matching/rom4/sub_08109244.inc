	THUMB_FUNC_START sub_08109244
sub_08109244: @ 0x08109244
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _081092C4  @ =gRam
	ldr r2, _081092C8  @ =0x00000FC2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	add r5, r1, #0
	cmp r0, #0
	beq _081092E4
	mov r2, #0
	cmp r0, #95
	bhi _08109272
	mov r2, #1
	cmp r0, #71
	bhi _08109272
	cmp r0, #66
	bne _08109270
	add r0, r4, #0
	bl sub_0810A528
_08109270:
	mov r2, #2
_08109272:
	ldr r1, _081092CC  @ =0x00000FB2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _08109284
	add r0, r2, #3
	lsl r0, r0, #24
	lsr r2, r0, #24
_08109284:
	ldr r0, _081092D0  @ =0x00000F92
	add r1, r5, r0
	add r1, r4, r1
	ldr r0, _081092D4  @ =gUnknown_0817C2B2
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _081092D8  @ =0x000010C2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #127
	and r0, r0, r1
	cmp r0, #1
	bne _081092EA
	ldr r2, _081092DC  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #15
	strb r1, [r0]
	ldr r1, _081092E0  @ =0x00001152
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #24
	strb r1, [r0]
	add r2, r2, #112
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	b _081092EA
	.byte 0x00
	.byte 0x00
_081092C4:
	.4byte gRam
_081092C8:
	.4byte 0x00000FC2
_081092CC:
	.4byte 0x00000FB2
_081092D0:
	.4byte 0x00000F92
_081092D4:
	.4byte gUnknown_0817C2B2
_081092D8:
	.4byte 0x000010C2
_081092DC:
	.4byte 0x00000F52
_081092E0:
	.4byte 0x00001152
_081092E4:
	add r0, r4, #0
	bl sub_0810A508
_081092EA:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08109244


	THUMB_FUNC_START sub_080CCA5C
sub_080CCA5C: @ 0x080CCA5C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r0, #148
	add r1, r7, #0
	bl sub_080CA538
	add r6, r0, #0
	cmp r6, #0
	blt _080CCB0A
	ldr r2, _080CCB14  @ =gRam
	ldr r1, _080CCB18  @ =0x00000D43
	add r0, r2, r1
	add r0, r7, r0
	ldrb r3, [r0]
	ldr r1, _080CCB1C  @ =0x00001062
	add r0, r2, r1
	add r0, r6, r0
	mov r4, #0
	mov r5, #1
	strb r5, [r0]
	ldr r0, _080CCB20  @ =0x00000EE2
	add r1, r2, r0
	add r1, r6, r1
	ldr r0, _080CCB24  @ =gUnknown_08172A54
	add r0, r3, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080CCB28  @ =0x00000ED2
	add r1, r2, r0
	add r1, r6, r1
	ldr r0, _080CCB2C  @ =gUnknown_08172A6A
	add r3, r3, r0
	ldrb r0, [r3]
	sub r0, r0, #8
	strb r0, [r1]
	ldr r3, _080CCB30  @ =0x00000EF2
	add r1, r2, r3
	add r1, r6, r1
	ldr r3, _080CCB34  @ =0x00000D3B
	add r0, r2, r3
	add r0, r7, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080CCB38  @ =0x00000F02
	add r1, r2, r0
	add r1, r6, r1
	sub r3, r3, #16
	add r0, r2, r3
	add r0, r7, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080CCB3C  @ =0x000010F2
	add r1, r2, r0
	add r1, r6, r1
	add r3, r3, #48
	add r0, r2, r3
	add r0, r7, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r7, _080CCB40  @ =0x00001022
	add r1, r2, r7
	add r1, r6, r1
	mov r3, #4
	strb r3, [r1]
	ldr r7, _080CCB44  @ =0x000011B2
	add r0, r2, r7
	add r0, r6, r0
	strb r4, [r0]
	strb r4, [r1]
	ldr r1, _080CCB48  @ =0x00000E75
	add r0, r2, r1
	add r0, r6, r0
	mov r1, #8
	strb r1, [r0]
	ldr r7, _080CCB4C  @ =0x00001012
	add r0, r2, r7
	add r0, r6, r0
	strb r3, [r0]
	ldr r1, _080CCB50  @ =0x00001122
	add r0, r2, r1
	add r0, r6, r0
	strb r5, [r0]
	ldr r7, _080CCB54  @ =0x00000EA5
	add r2, r2, r7
	add r2, r6, r2
	strb r3, [r2]
_080CCB0A:
	add r0, r6, #0
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080CCB14:
	.4byte gRam
_080CCB18:
	.4byte 0x00000D43
_080CCB1C:
	.4byte 0x00001062
_080CCB20:
	.4byte 0x00000EE2
_080CCB24:
	.4byte gUnknown_08172A54
_080CCB28:
	.4byte 0x00000ED2
_080CCB2C:
	.4byte gUnknown_08172A6A
_080CCB30:
	.4byte 0x00000EF2
_080CCB34:
	.4byte 0x00000D3B
_080CCB38:
	.4byte 0x00000F02
_080CCB3C:
	.4byte 0x000010F2
_080CCB40:
	.4byte 0x00001022
_080CCB44:
	.4byte 0x000011B2
_080CCB48:
	.4byte 0x00000E75
_080CCB4C:
	.4byte 0x00001012
_080CCB50:
	.4byte 0x00001122
_080CCB54:
	.4byte 0x00000EA5
	THUMB_FUNC_END sub_080CCA5C


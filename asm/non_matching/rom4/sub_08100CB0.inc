	THUMB_FUNC_START sub_08100CB0
sub_08100CB0: @ 0x08100CB0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_08100DB4
	ldr r5, _08100CFC  @ =gRam
	ldr r1, _08100D00  @ =0x00001052
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _08100D44
	ldr r3, _08100D04  @ =0x00000FB2
	add r0, r5, r3
	add r3, r4, r0
	ldrb r0, [r3]
	sub r0, r0, #2
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _08100D08  @ =0x00000F92
	add r0, r5, r1
	add r6, r4, r0
	ldr r0, _08100D0C  @ =gUnknown_0817AE1F
	add r0, r2, r0
	ldrb r1, [r6]
	ldrb r0, [r0]
	cmp r1, r0
	beq _08100D14
	ldr r0, _08100D10  @ =gUnknown_0817AE1D
	add r0, r2, r0
	ldrb r0, [r0]
	add r0, r1, r0
	strb r0, [r6]
	b _08100D44
	.byte 0x00
	.byte 0x00
_08100CFC:
	.4byte gRam
_08100D00:
	.4byte 0x00001052
_08100D04:
	.4byte 0x00000FB2
_08100D08:
	.4byte 0x00000F92
_08100D0C:
	.4byte gUnknown_0817AE1F
_08100D10:
	.4byte gUnknown_0817AE1D
_08100D14:
	ldr r1, _08100D50  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #254
	strb r1, [r0]
	ldr r1, _08100D54  @ =0x00000F82
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	ldrb r0, [r3]
	mov r2, #1
	eor r0, r0, r2
	strb r0, [r3]
	ldr r3, _08100D58  @ =0x000010A2
	add r1, r5, r3
	add r1, r4, r1
	ldr r3, _08100D5C  @ =0x00000EE2
	add r0, r5, r3
	add r0, r4, r0
	ldrb r0, [r0]
	lsr r0, r0, #7
	and r0, r0, r2
	strb r0, [r1]
_08100D44:
	add r0, r4, #0
	bl sub_08100D60
	pop {r4-r6}
	pop {r0}
	bx r0
_08100D50:
	.4byte 0x00000FC2
_08100D54:
	.4byte 0x00000F82
_08100D58:
	.4byte 0x000010A2
_08100D5C:
	.4byte 0x00000EE2
	THUMB_FUNC_END sub_08100CB0


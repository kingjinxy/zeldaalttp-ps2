	THUMB_FUNC_START sub_080CB8D8
sub_080CB8D8: @ 0x080CB8D8
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r0, #69
	add r1, r4, #0
	mov r2, #0
	bl sub_080C9AAC
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r0, #0
	blt _080CB994
	ldr r1, _080CB908  @ =gRam
	ldr r2, _080CB90C  @ =0x00000FF2
	add r0, r1, r2
	add r0, r4, r0
	ldrb r0, [r0]
	add r5, r1, #0
	cmp r0, #53
	beq _080CB910
	cmp r0, #61
	bne _080CB914
	mov r6, #0
	b _080CB916
_080CB908:
	.4byte gRam
_080CB90C:
	.4byte 0x00000FF2
_080CB910:
	mov r6, #1
	b _080CB916
_080CB914:
	mov r6, #2
_080CB916:
	lsl r3, r3, #24
	asr r3, r3, #24
	ldr r7, _080CB99C  @ =0x00000EE2
	add r1, r5, r7
	add r1, r3, r1
	ldr r0, _080CB9A0  @ =gUnknown_0817296C
	add r0, r6, r0
	ldrb r0, [r0]
	mov r4, #0
	strb r0, [r1]
	ldr r0, _080CB9A4  @ =0x00000F02
	add r2, r5, r0
	add r2, r3, r2
	ldr r1, _080CB9A8  @ =gUnknown_0817296F
	add r1, r6, r1
	ldr r7, _080CB9AC  @ =0x00001601
	add r0, r5, r7
	ldrb r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	strb r0, [r2]
	ldr r0, _080CB9B0  @ =0x00000ED2
	add r1, r5, r0
	add r1, r3, r1
	ldr r0, _080CB9B4  @ =gUnknown_08172972
	add r0, r6, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080CB9B8  @ =0x00000EF2
	add r2, r5, r1
	add r2, r3, r2
	ldr r1, _080CB9BC  @ =gUnknown_08172975
	add r1, r6, r1
	ldr r6, _080CB9C0  @ =0x00001603
	add r0, r5, r6
	ldrb r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	strb r0, [r2]
	ldr r7, _080CB9C4  @ =0x000010F2
	add r0, r5, r7
	add r0, r3, r0
	strb r4, [r0]
	ldr r1, _080CB9C8  @ =0x00001022
	add r0, r5, r1
	add r0, r3, r0
	mov r1, #4
	strb r1, [r0]
	ldr r2, _080CB9CC  @ =0x00000E75
	add r0, r5, r2
	add r0, r3, r0
	mov r1, #128
	strb r1, [r0]
	ldr r6, _080CB9D0  @ =0x000011B2
	add r0, r5, r6
	add r0, r3, r0
	mov r1, #144
	strb r1, [r0]
	add r7, r7, #48
	add r0, r5, r7
	add r3, r3, r0
	mov r0, #11
	strb r0, [r3]
_080CB994:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CB99C:
	.4byte 0x00000EE2
_080CB9A0:
	.4byte gUnknown_0817296C
_080CB9A4:
	.4byte 0x00000F02
_080CB9A8:
	.4byte gUnknown_0817296F
_080CB9AC:
	.4byte 0x00001601
_080CB9B0:
	.4byte 0x00000ED2
_080CB9B4:
	.4byte gUnknown_08172972
_080CB9B8:
	.4byte 0x00000EF2
_080CB9BC:
	.4byte gUnknown_08172975
_080CB9C0:
	.4byte 0x00001603
_080CB9C4:
	.4byte 0x000010F2
_080CB9C8:
	.4byte 0x00001022
_080CB9CC:
	.4byte 0x00000E75
_080CB9D0:
	.4byte 0x000011B2
	THUMB_FUNC_END sub_080CB8D8


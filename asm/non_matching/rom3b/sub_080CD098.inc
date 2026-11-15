	THUMB_FUNC_START sub_080CD098
sub_080CD098: @ 0x080CD098
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r5, _080CD1A0  @ =gRam
	ldr r1, _080CD1A4  @ =0x00000D1B
	add r0, r5, r1
	add r0, r6, r0
	ldrb r0, [r0]
	sub r0, r0, #17
	ldr r2, _080CD1A8  @ =0x000015F9
	add r1, r5, r2
	strb r0, [r1]
	ldr r3, _080CD1AC  @ =0x00000D4B
	add r0, r5, r3
	add r4, r6, r0
	ldrb r0, [r4]
	cmp r0, #128
	beq _080CD0BE
	b _080CD1E4
_080CD0BE:
	bl GetRandomInt
	mov r1, #31
	and r1, r1, r0
	add r1, r1, #96
	strb r1, [r4]
	mov r0, #150
	lsl r0, r0, #4
	add r1, r5, r0
	mov r0, #0
	strb r0, [r1]
	mov r2, #15
	ldr r3, _080CD1B0  @ =0x00000FA2
	add r3, r3, r5
	mov r12, r3
	add r4, r5, #0
	ldr r0, _080CD1B4  @ =0x00000FF2
	add r7, r4, r0
	add r5, r1, #0
_080CD0E4:
	lsl r0, r2, #24
	asr r2, r0, #24
	mov r3, r12
	add r1, r2, r3
	ldrb r1, [r1]
	add r3, r0, #0
	cmp r1, #0
	beq _080CD102
	add r0, r2, r7
	ldrb r0, [r0]
	cmp r0, #17
	bne _080CD102
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
_080CD102:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r3, r1
	lsr r2, r0, #24
	cmp r0, #0
	bge _080CD0E4
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #4
	bgt _080CD1E8
	mov r0, #148
	add r1, r6, #0
	mov r2, #12
	bl sub_080C9AAC
	add r2, r0, #0
	cmp r2, #0
	blt _080CD1E8
	ldr r3, _080CD1B8  @ =0x00000EE2
	add r0, r4, r3
	add r0, r2, r0
	ldr r3, _080CD1BC  @ =0x00000969
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080CD1C0  @ =0x00000F02
	add r0, r4, r1
	add r0, r2, r0
	add r3, r3, #3
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080CD1C4  @ =0x00000ED2
	add r0, r4, r1
	add r0, r2, r0
	add r3, r3, #1
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080CD1C8  @ =0x00000EF2
	add r0, r4, r1
	add r0, r2, r0
	add r3, r3, #3
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _080CD1CC  @ =0x000010F2
	add r1, r4, r0
	add r1, r2, r1
	ldr r3, _080CD1D0  @ =0x00000D5B
	add r0, r4, r3
	add r0, r6, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080CD1D4  @ =0x00000FC2
	add r0, r4, r1
	add r0, r2, r0
	mov r1, #32
	strb r1, [r0]
	ldr r3, _080CD1D8  @ =0x00000FB2
	add r0, r4, r3
	add r0, r2, r0
	ldr r1, _080CD1A8  @ =0x000015F9
	add r3, r4, r1
	ldrb r1, [r3]
	strb r1, [r0]
	ldr r0, _080CD1DC  @ =0x00000F62
	add r1, r4, r0
	add r1, r2, r1
	ldr r2, _080CD1E0  @ =gUnknown_08172B38
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _080CD1E8
_080CD1A0:
	.4byte gRam
_080CD1A4:
	.4byte 0x00000D1B
_080CD1A8:
	.4byte 0x000015F9
_080CD1AC:
	.4byte 0x00000D4B
_080CD1B0:
	.4byte 0x00000FA2
_080CD1B4:
	.4byte 0x00000FF2
_080CD1B8:
	.4byte 0x00000EE2
_080CD1BC:
	.4byte 0x00000969
_080CD1C0:
	.4byte 0x00000F02
_080CD1C4:
	.4byte 0x00000ED2
_080CD1C8:
	.4byte 0x00000EF2
_080CD1CC:
	.4byte 0x000010F2
_080CD1D0:
	.4byte 0x00000D5B
_080CD1D4:
	.4byte 0x00000FC2
_080CD1D8:
	.4byte 0x00000FB2
_080CD1DC:
	.4byte 0x00000F62
_080CD1E0:
	.4byte gUnknown_08172B38
_080CD1E4:
	sub r0, r0, #1
	strb r0, [r4]
_080CD1E8:
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080CD098

	.byte 0x00
	.byte 0x00

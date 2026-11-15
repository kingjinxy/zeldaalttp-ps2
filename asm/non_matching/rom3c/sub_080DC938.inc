	THUMB_FUNC_START sub_080DC938
sub_080DC938: @ 0x080DC938
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r0, _080DC9B0  @ =gMagicUsage
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DC9D6
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080DC9D6
	mov r1, #4
	ldr r5, _080DC9B4  @ =gRam
	ldr r2, _080DC9B8  @ =0x00000F52
	add r0, r5, r2
	add r6, r4, r0
	mov r0, #0
	mov r9, r0
	ldr r2, _080DC9BC  @ =0x00001122
	add r0, r5, r2
	add r7, r4, r0
	ldr r2, _080DC9C0  @ =0x00000F62
	add r0, r5, r2
	add r0, r0, r4
	mov r8, r0
_080DC974:
	lsl r0, r1, #24
	asr r1, r0, #24
	ldr r2, _080DC9C4  @ =0x00000E15
	add r0, r5, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #26
	bne _080DC9CC
	add r0, r4, #0
	bl sub_080CBBEC
	add r0, r4, #0
	mov r1, #63
	bl sub_080CF018
	ldrb r0, [r6]
	add r0, r0, #1
	strb r0, [r6]
	mov r0, #20
	mov r1, r8
	strb r0, [r1]
	ldr r2, _080DC9C8  @ =0x00001770
	add r1, r5, r2
	mov r0, #1
	strb r0, [r1]
	ldrb r0, [r7]
	mov r1, #32
	orr r0, r0, r1
	strb r0, [r7]
	b _080DC9D6
_080DC9B0:
	.4byte gMagicUsage
_080DC9B4:
	.4byte gRam
_080DC9B8:
	.4byte 0x00000F52
_080DC9BC:
	.4byte 0x00001122
_080DC9C0:
	.4byte 0x00000F62
_080DC9C4:
	.4byte 0x00000E15
_080DC9C8:
	.4byte 0x00001770
_080DC9CC:
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080DC974
_080DC9D6:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080DC938

	.byte 0x00
	.byte 0x00

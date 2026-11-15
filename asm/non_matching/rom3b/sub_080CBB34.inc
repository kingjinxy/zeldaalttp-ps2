	THUMB_FUNC_START sub_080CBB34
sub_080CBB34: @ 0x080CBB34
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	mov r2, #15
	ldr r5, _080CBBC8  @ =gRam
	ldr r0, _080CBBCC  @ =0x000015DC
	add r0, r0, r5
	mov r9, r0
	ldr r1, _080CBBD0  @ =0x00000FA2
	add r1, r1, r5
	mov r8, r1
	ldr r0, _080CBBD4  @ =0x00000E75
	add r0, r0, r5
	mov r12, r0
	ldr r1, _080CBBD8  @ =0x00000FF2
	add r7, r5, r1
_080CBB56:
	mov r0, r9
	ldrb r1, [r0]
	lsl r0, r2, #24
	asr r2, r0, #24
	add r6, r0, #0
	cmp r1, r2
	beq _080CBBB0
	mov r1, r8
	add r4, r2, r1
	ldrb r0, [r4]
	cmp r0, #0
	beq _080CBBB0
	mov r1, r12
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #0
	bne _080CBBB0
	add r0, r2, r7
	ldrb r0, [r0]
	cmp r0, #122
	beq _080CBBB0
	mov r0, #6
	strb r0, [r4]
	ldr r1, _080CBBDC  @ =0x00000FC2
	add r0, r5, r1
	add r0, r2, r0
	mov r1, #15
	strb r1, [r0]
	ldr r1, _080CBBE0  @ =0x00001032
	add r0, r5, r1
	add r0, r2, r0
	strb r3, [r0]
	ldr r1, _080CBBE4  @ =0x000011B2
	add r0, r5, r1
	add r0, r2, r0
	strb r3, [r0]
	ldr r1, _080CBBE8  @ =0x00001012
	add r0, r5, r1
	add r0, r2, r0
	mov r1, #3
	strb r1, [r0]
_080CBBB0:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r6, r1
	lsr r2, r0, #24
	cmp r0, #0
	bge _080CBB56
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080CBBC8:
	.4byte gRam
_080CBBCC:
	.4byte 0x000015DC
_080CBBD0:
	.4byte 0x00000FA2
_080CBBD4:
	.4byte 0x00000E75
_080CBBD8:
	.4byte 0x00000FF2
_080CBBDC:
	.4byte 0x00000FC2
_080CBBE0:
	.4byte 0x00001032
_080CBBE4:
	.4byte 0x000011B2
_080CBBE8:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080CBB34


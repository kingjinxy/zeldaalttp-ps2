	THUMB_FUNC_START sub_080E9268
sub_080E9268: @ 0x080E9268
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080E934C  @ =gRam
	ldr r1, _080E9350  @ =0x000016C4
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _080E9354  @ =0x000016C5
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r3, _080E9358  @ =0x00001622
	add r0, r4, r3
	ldrb r2, [r0]
	add r3, r3, #1
	add r0, r4, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	add r1, r1, #16
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #31
	bhi _080E9346
	mov r1, #182
	lsl r1, r1, #5
	add r0, r4, r1
	ldrb r1, [r0]
	ldr r2, _080E935C  @ =0x000016C1
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r1, r1, r0
	add r3, r3, #1
	add r0, r4, r3
	ldrb r2, [r0]
	add r3, r3, #1
	add r0, r4, r3
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	sub r1, r1, r2
	add r1, r1, #48
	lsl r1, r1, #16
	lsr r1, r1, #16
	cmp r1, #79
	bhi _080E9346
	bl sub_08093078
	ldr r1, _080E9360  @ =0x00000FC2
	add r0, r4, r1
	add r0, r5, r0
	mov r1, #127
	strb r1, [r0]
	mov r0, #45
	mov r1, #0
	bl sub_0812A324
	ldr r2, _080E9364  @ =0x00000F52
	add r1, r4, r2
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r1, #15
	add r5, r4, #0
	ldr r3, _080E9368  @ =0x00001792
	add r6, r5, r3
_080E92FC:
	lsl r0, r1, #24
	asr r2, r0, #24
	ldr r3, _080E936C  @ =0x000015DC
	add r1, r5, r3
	add r4, r0, #0
	ldrb r1, [r1]
	cmp r2, r1
	beq _080E933A
	ldr r1, _080E9370  @ =0x00000E75
	add r0, r5, r1
	add r0, r2, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080E933A
	ldr r3, _080E9374  @ =0x00000FA2
	add r0, r5, r3
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #10
	bne _080E9334
	ldr r2, _080E9378  @ =0x00001791
	add r0, r5, r2
	strb r1, [r0]
	strb r1, [r6]
_080E9334:
	lsr r0, r4, #24
	bl sub_080CB1E0
_080E933A:
	mov r3, #255
	lsl r3, r3, #24
	add r0, r4, r3
	lsr r1, r0, #24
	cmp r0, #0
	bge _080E92FC
_080E9346:
	pop {r4-r6}
	pop {r0}
	bx r0
_080E934C:
	.4byte gRam
_080E9350:
	.4byte 0x000016C4
_080E9354:
	.4byte 0x000016C5
_080E9358:
	.4byte 0x00001622
_080E935C:
	.4byte 0x000016C1
_080E9360:
	.4byte 0x00000FC2
_080E9364:
	.4byte 0x00000F52
_080E9368:
	.4byte 0x00001792
_080E936C:
	.4byte 0x000015DC
_080E9370:
	.4byte 0x00000E75
_080E9374:
	.4byte 0x00000FA2
_080E9378:
	.4byte 0x00001791
	THUMB_FUNC_END sub_080E9268


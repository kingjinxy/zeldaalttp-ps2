	THUMB_FUNC_START sub_080D5FE8
sub_080D5FE8: @ 0x080D5FE8
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r5, r0, #0
	ldr r7, _080D6050  @ =gRam
	ldr r1, _080D6054  @ =0x00000F92
	add r0, r7, r1
	add r0, r5, r0
	mov r1, #0
	strb r1, [r0]
	ldr r2, _080D6058  @ =0x00001082
	add r0, r7, r2
	add r0, r5, r0
	mov r1, #2
	strb r1, [r0]
	ldr r1, _080D605C  @ =0x00001142
	add r0, r7, r1
	add r6, r5, r0
	ldrb r4, [r6]
	add r0, r5, #0
	bl sub_080C2C4C
	ldr r2, _080D6060  @ =0x00001152
	add r0, r7, r2
	add r2, r5, r0
	ldrb r1, [r2]
	add r0, r1, #0
	sub r0, r0, #64
	mov r3, #128
	and r0, r0, r3
	cmp r0, #0
	beq _080D602C
	add r0, r1, #2
	strb r0, [r2]
_080D602C:
	ldrb r1, [r6]
	eor r4, r4, r1
	and r4, r4, r3
	cmp r4, #0
	beq _080D604A
	mov r0, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080D604A
	ldr r2, _080D6064  @ =0x00000FA2
	add r0, r7, r2
	add r0, r5, r0
	strb r1, [r0]
_080D604A:
	pop {r4-r7}
	pop {r0}
	bx r0
_080D6050:
	.4byte gRam
_080D6054:
	.4byte 0x00000F92
_080D6058:
	.4byte 0x00001082
_080D605C:
	.4byte 0x00001142
_080D6060:
	.4byte 0x00001152
_080D6064:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080D5FE8


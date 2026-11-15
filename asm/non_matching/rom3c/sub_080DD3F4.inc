	THUMB_FUNC_START sub_080DD3F4
sub_080DD3F4: @ 0x080DD3F4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r4, #15
_080DD3FC:
	add r0, r5, #0
	bl sub_080DDA2C
	lsl r0, r4, #24
	mov r1, #255
	lsl r1, r1, #24
	add r0, r0, r1
	lsr r4, r0, #24
	cmp r0, #0
	bne _080DD3FC
	mov r4, #15
	ldr r2, _080DD460  @ =gUnknown_03003222
	add r6, r2, #0
	sub r6, r6, #80
	mov r3, #0
_080DD41A:
	lsl r0, r4, #24
	asr r1, r0, #24
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #43
	bne _080DD42A
	add r0, r1, r6
	strb r3, [r0]
_080DD42A:
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r0, #0
	bne _080DD41A
	add r0, r5, #0
	bl sub_080DD7A0
	ldr r2, _080DD464  @ =gRam
	ldr r1, _080DD468  @ =0x00001662
	add r0, r2, r1
	ldrb r1, [r0]
	mov r3, #1
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080DD454
	ldr r0, _080DD46C  @ =0x00000F52
	add r1, r2, r0
	mov r0, #3
	strb r0, [r1]
_080DD454:
	ldr r1, _080DD470  @ =0x00001172
	add r0, r2, r1
	strb r3, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
_080DD460:
	.4byte gUnknown_03003222
_080DD464:
	.4byte gRam
_080DD468:
	.4byte 0x00001662
_080DD46C:
	.4byte 0x00000F52
_080DD470:
	.4byte 0x00001172
	THUMB_FUNC_END sub_080DD3F4


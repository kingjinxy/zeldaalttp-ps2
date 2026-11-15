	THUMB_FUNC_START sub_080F78A0
sub_080F78A0: @ 0x080F78A0
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r7, r4, #0
	ldr r6, _080F7918  @ =gRam
	ldr r1, _080F791C  @ =0x00001052
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	add r0, r4, #0
	bl sub_080C99DC
	ldr r0, _080F7920  @ =0x00001152
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #2
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #208
	bne _080F78D6
	add r0, r4, #0
	bl sub_080F7BDC
_080F78D6:
	ldr r1, _080F7924  @ =0x00001142
	add r0, r6, r1
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080F7900
	mov r0, #0
	strb r0, [r2]
	ldr r0, _080F7928  @ =0x00000F52
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080F792C  @ =0x00000FC2
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #255
	strb r1, [r0]
_080F7900:
	ldr r0, _080F7930  @ =0x00000F92
	add r1, r6, r0
	add r1, r7, r1
	ldr r2, _080F7934  @ =gUnknown_08179C44
	ldrb r0, [r5]
	lsr r0, r0, #2
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	pop {r4-r7}
	pop {r0}
	bx r0
_080F7918:
	.4byte gRam
_080F791C:
	.4byte 0x00001052
_080F7920:
	.4byte 0x00001152
_080F7924:
	.4byte 0x00001142
_080F7928:
	.4byte 0x00000F52
_080F792C:
	.4byte 0x00000FC2
_080F7930:
	.4byte 0x00000F92
_080F7934:
	.4byte gUnknown_08179C44
	THUMB_FUNC_END sub_080F78A0


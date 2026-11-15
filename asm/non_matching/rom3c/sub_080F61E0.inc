	THUMB_FUNC_START sub_080F61E0
sub_080F61E0: @ 0x080F61E0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C5044
	add r0, r4, #0
	bl sub_080C99DC
	add r0, r4, #0
	bl sub_080C7A48
	ldr r5, _080F6268  @ =gRam
	ldr r1, _080F626C  @ =0x00001152
	add r0, r5, r1
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #2
	strb r0, [r2]
	ldr r3, _080F6270  @ =0x00001142
	add r0, r5, r3
	add r3, r4, r0
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080F6226
	mov r0, #0
	strb r0, [r3]
	mov r0, #16
	strb r0, [r2]
	add r0, r4, #0
	mov r1, #12
	bl sub_080C35FC
_080F6226:
	ldr r1, _080F6274  @ =0x00000996
	add r0, r5, r1
	ldrb r0, [r0]
	mov r2, #3
	and r2, r2, r0
	cmp r2, #0
	bne _080F624A
	ldr r3, _080F6278  @ =0x00001052
	add r0, r5, r3
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #5
	bne _080F624A
	strb r2, [r1]
_080F624A:
	ldr r0, _080F6268  @ =gRam
	ldr r2, _080F627C  @ =0x00000F92
	add r1, r0, r2
	add r1, r4, r1
	ldr r2, _080F6280  @ =gUnknown_081799B0
	ldr r3, _080F6278  @ =0x00001052
	add r0, r0, r3
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
_080F6268:
	.4byte gRam
_080F626C:
	.4byte 0x00001152
_080F6270:
	.4byte 0x00001142
_080F6274:
	.4byte 0x00000996
_080F6278:
	.4byte 0x00001052
_080F627C:
	.4byte 0x00000F92
_080F6280:
	.4byte gUnknown_081799B0
	THUMB_FUNC_END sub_080F61E0


	THUMB_FUNC_START sub_080A45FC
sub_080A45FC: @ 0x080A45FC
	push {lr}
	ldr r0, _080A46A0  @ =gRam
	ldr r2, _080A46A4  @ =0x0000172C
	add r1, r0, r2
	ldrb r1, [r1]
	add r3, r0, #0
	cmp r1, #0
	beq _080A4642
	ldr r1, _080A46A8  @ =0x000016C4
	add r0, r3, r1
	ldr r2, _080A46AC  @ =0x00000952
	add r1, r3, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #16
	ldr r1, _080A46B0  @ =0xFFFC0000
	add r0, r0, r1
	lsr r0, r0, #16
	cmp r0, #229
	bhi _080A469A
	mov r2, #182
	lsl r2, r2, #5
	add r0, r3, r2
	ldr r2, _080A46B4  @ =0x00000958
	add r1, r3, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	lsl r0, r0, #16
	ldr r1, _080A46B0  @ =0xFFFC0000
	add r0, r0, r1
	lsr r0, r0, #16
	cmp r0, #219
	bhi _080A469A
_080A4642:
	ldr r2, _080A46B8  @ =0x000009AD
	add r0, r3, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A466A
	ldr r0, _080A46BC  @ =0x000017AA
	add r2, r3, r0
	ldrb r0, [r2]
	cmp r0, #0
	beq _080A466A
	sub r1, r0, #1
	strb r1, [r2]
	lsl r0, r1, #24
	lsr r0, r0, #24
	cmp r0, #3
	bls _080A466A
	mov r0, #2
	and r1, r1, r0
	cmp r1, #0
	bne _080A469A
_080A466A:
	add r1, r3, #0
	mov r2, #184
	lsl r2, r2, #5
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #12
	beq _080A469A
	add r2, r2, #16
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A469A
	ldr r2, _080A46C0  @ =0x00001725
	add r0, r1, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A46D0
	ldr r2, _080A46C4  @ =0x000009B2
	add r0, r1, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080A46C8
_080A469A:
	mov r0, #1
	b _080A46D2
	.byte 0x00
	.byte 0x00
_080A46A0:
	.4byte gRam
_080A46A4:
	.4byte 0x0000172C
_080A46A8:
	.4byte 0x000016C4
_080A46AC:
	.4byte 0x00000952
_080A46B0:
	.4byte 0xFFFC0000
_080A46B4:
	.4byte 0x00000958
_080A46B8:
	.4byte 0x000009AD
_080A46BC:
	.4byte 0x000017AA
_080A46C0:
	.4byte 0x00001725
_080A46C4:
	.4byte 0x000009B2
_080A46C8:
	ldr r0, _080A46D8  @ =0x00001724
	add r1, r3, r0
	mov r0, #16
	strb r0, [r1]
_080A46D0:
	mov r0, #0
_080A46D2:
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080A46D8:
	.4byte 0x00001724
	THUMB_FUNC_END sub_080A45FC


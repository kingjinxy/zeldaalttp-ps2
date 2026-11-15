	THUMB_FUNC_START sub_080FE574
sub_080FE574: @ 0x080FE574
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C5044
	ldr r5, _080FE5AC  @ =gRam
	ldr r1, _080FE5B0  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r3, [r0]
	cmp r3, #0
	beq _080FE608
	mov r1, #0
	ldr r2, _080FE5B4  @ =0x000009DA
	add r0, r5, r2
	ldrh r0, [r0]
	cmp r0, #173
	bne _080FE59C
	mov r1, #1
_080FE59C:
	cmp r1, #0
	beq _080FE5B8
	cmp r3, #80
	bne _080FE5C2
	add r0, r4, #0
	bl sub_080FEAB8
	b _080FE5C2
_080FE5AC:
	.4byte gRam
_080FE5B0:
	.4byte 0x00000FC2
_080FE5B4:
	.4byte 0x000009DA
_080FE5B8:
	cmp r3, #32
	bne _080FE5C2
	add r0, r4, #0
	bl sub_080FEAB8
_080FE5C2:
	ldr r6, _080FE5F8  @ =gRam
	ldr r1, _080FE5FC  @ =0x00001052
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	lsl r1, r1, #24
	lsr r1, r1, #26
	mov r0, #3
	and r1, r1, r0
	add r5, r1, #0
	cmp r5, #0
	bne _080FE5E6
	add r0, r4, #0
	mov r1, #12
	bl sub_080CF0AC
_080FE5E6:
	ldr r2, _080FE600  @ =0x00000F92
	add r0, r6, r2
	add r0, r4, r0
	ldr r1, _080FE604  @ =gUnknown_0817AB66
	add r1, r5, r1
	ldrb r1, [r1]
	strb r1, [r0]
	b _080FE628
	.byte 0x00
	.byte 0x00
_080FE5F8:
	.4byte gRam
_080FE5FC:
	.4byte 0x00001052
_080FE600:
	.4byte 0x00000F92
_080FE604:
	.4byte gUnknown_0817AB66
_080FE608:
	ldr r0, _080FE630  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	bl GetRandomInt
	ldr r1, _080FE634  @ =0x000010A2
	add r2, r5, r1
	add r2, r4, r2
	mov r1, #31
	and r1, r1, r0
	mov r0, #64
	orr r1, r1, r0
	strb r1, [r2]
_080FE628:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FE630:
	.4byte 0x00000F52
_080FE634:
	.4byte 0x000010A2
	THUMB_FUNC_END sub_080FE574


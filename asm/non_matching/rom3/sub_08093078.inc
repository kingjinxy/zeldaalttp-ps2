	THUMB_FUNC_START sub_08093078
sub_08093078: @ 0x08093078
	push {r4,r5,lr}
	bl sub_08092CA0
	ldr r2, _080930D4  @ =gRam
	ldr r1, _080930D8  @ =0x00001804
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080930CC
	mov r1, #4
	add r3, r2, #0
	ldr r2, _080930DC  @ =0x00000E15
	add r5, r3, r2
	mov r4, #0
_08093094:
	lsl r0, r1, #24
	asr r2, r0, #24
	add r1, r2, r5
	ldrb r0, [r1]
	cmp r0, #30
	bne _080930A2
	strb r4, [r1]
_080930A2:
	sub r0, r2, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _08093094
	ldr r1, _080930E0  @ =0x00001806
	add r0, r3, r1
	mov r1, #0
	strb r1, [r0]
	ldr r2, _080930E4  @ =0x00001719
	add r0, r3, r2
	strb r1, [r0]
	add r2, r2, #235
	add r0, r3, r2
	strb r1, [r0]
	sub r2, r2, #255
	add r0, r3, r2
	strb r1, [r0]
	add r2, r2, #179
	add r0, r3, r2
	strh r1, [r0]
_080930CC:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080930D4:
	.4byte gRam
_080930D8:
	.4byte 0x00001804
_080930DC:
	.4byte 0x00000E15
_080930E0:
	.4byte 0x00001806
_080930E4:
	.4byte 0x00001719
	THUMB_FUNC_END sub_08093078


	THUMB_FUNC_START sub_080E6238
sub_080E6238: @ 0x080E6238
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080E65C8
	add r0, r4, #0
	bl sub_080E6340
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r5, _080E630C  @ =gRam
	ldr r1, _080E6310  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E6296
	ldr r3, _080E6314  @ =0x00001052
	add r0, r5, r3
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	ldr r7, _080E6318  @ =0x00000F92
	add r2, r5, r7
	add r2, r4, r2
	ldr r3, _080E631C  @ =gUnknown_08177674
	mov r0, #4
	and r1, r1, r0
	add r7, r7, #32
	add r0, r5, r7
	add r0, r4, r0
	ldrb r0, [r0]
	orr r1, r1, r0
	add r1, r1, r3
	ldrb r0, [r1]
	strb r0, [r2]
	ldr r1, _080E6320  @ =0x00001042
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E6296
	add r0, r4, #0
	bl Sprite3_Move
_080E6296:
	add r0, r4, #0
	bl sub_080C7A48
	ldr r2, _080E630C  @ =gRam
	ldr r3, _080E6324  @ =0x00000FB2
	add r1, r2, r3
	add r1, r4, r1
	ldr r7, _080E6328  @ =0x00001082
	add r0, r2, r7
	add r5, r4, r0
	ldrb r0, [r5]
	strb r0, [r1]
	ldr r1, _080E632C  @ =0x00000996
	add r0, r2, r1
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080E6304
	cmp r6, #15
	bhi _080E6304
	sub r3, r3, #208
	add r0, r2, r3
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r7, _080E6330  @ =0x00000968
	add r0, r2, r7
	strb r1, [r0]
	ldr r1, _080E6334  @ =0x00000F02
	add r0, r2, r1
	add r0, r6, r0
	ldrb r1, [r0]
	ldr r3, _080E6338  @ =0x00000969
	add r0, r2, r3
	strb r1, [r0]
	ldr r7, _080E633C  @ =0x00000ED2
	add r0, r2, r7
	add r0, r6, r0
	ldrb r1, [r0]
	add r3, r3, #3
	add r0, r2, r3
	strb r1, [r0]
	add r7, r7, #32
	add r0, r2, r7
	add r0, r6, r0
	ldrb r1, [r0]
	add r3, r3, #1
	add r0, r2, r3
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C2EE0
	strb r0, [r5]
_080E6304:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E630C:
	.4byte gRam
_080E6310:
	.4byte 0x00000FC2
_080E6314:
	.4byte 0x00001052
_080E6318:
	.4byte 0x00000F92
_080E631C:
	.4byte gUnknown_08177674
_080E6320:
	.4byte 0x00001042
_080E6324:
	.4byte 0x00000FB2
_080E6328:
	.4byte 0x00001082
_080E632C:
	.4byte 0x00000996
_080E6330:
	.4byte 0x00000968
_080E6334:
	.4byte 0x00000F02
_080E6338:
	.4byte 0x00000969
_080E633C:
	.4byte 0x00000ED2
	THUMB_FUNC_END sub_080E6238


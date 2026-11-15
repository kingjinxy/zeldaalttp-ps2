	THUMB_FUNC_START sub_080D4828
sub_080D4828: @ 0x080D4828
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r5, _080D487C  @ =gRam
	ldr r1, _080D4880  @ =0x00000FC2
	add r0, r5, r1
	add r0, r6, r0
	ldrb r4, [r0]
	cmp r4, #0
	bne _080D4876
	ldr r1, _080D4884  @ =0x000009C6
	add r0, r5, r1
	ldrh r1, [r0]
	ldr r0, _080D4888  @ =gUnknown_02002280
	add r1, r1, r0
	ldrb r0, [r1]
	mov r2, #64
	orr r0, r0, r2
	strb r0, [r1]
	ldr r1, _080D488C  @ =0x00001776
	add r0, r5, r1
	strb r4, [r0]
	mov r0, #1
	bl sub_080A1588
	mov r0, #179
	lsl r0, r0, #5
	add r1, r5, r0
	mov r0, #5
	strb r0, [r1]
	ldr r1, _080D4890  @ =0x00001809
	add r0, r5, r1
	strb r4, [r0]
	ldr r0, _080D4894  @ =0x00000F52
	add r1, r5, r0
	add r1, r6, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080D4876:
	pop {r4-r6}
	pop {r0}
	bx r0
_080D487C:
	.4byte gRam
_080D4880:
	.4byte 0x00000FC2
_080D4884:
	.4byte 0x000009C6
_080D4888:
	.4byte gUnknown_02002280
_080D488C:
	.4byte 0x00001776
_080D4890:
	.4byte 0x00001809
_080D4894:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D4828


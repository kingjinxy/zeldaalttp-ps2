	THUMB_FUNC_START sub_080D5754
sub_080D5754: @ 0x080D5754
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r9, r5
	add r0, r5, #0
	bl sub_080D58D4
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D5776
	b _080D58A8
_080D5776:
	add r0, r5, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D5784
	b _080D58A8
_080D5784:
	ldr r7, _080D5804  @ =gRam
	ldr r1, _080D5808  @ =0x00001052
	add r0, r7, r1
	add r4, r5, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	ldr r3, _080D580C  @ =0x00000F62
	add r2, r7, r3
	add r2, r5, r2
	lsl r0, r0, #24
	lsr r0, r0, #28
	mov r1, #3
	and r0, r0, r1
	strb r0, [r2]
	add r0, r5, #0
	bl sub_080C5044
	ldr r1, _080D5810  @ =0x00000F52
	add r0, r7, r1
	add r0, r0, r5
	mov r8, r0
	ldrb r2, [r0]
	add r0, r2, #0
	cmp r0, #2
	bne _080D582A
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	ldr r2, _080D5814  @ =0x00000FC2
	add r0, r7, r2
	add r6, r5, r0
	ldrb r0, [r6]
	cmp r0, #0
	beq _080D5820
	ldr r3, _080D5818  @ =0x00000996
	add r0, r7, r3
	ldrb r0, [r0]
	add r4, r5, #0
	eor r4, r4, r0
	add r1, r1, #32
	add r0, r7, r1
	add r0, r5, r0
	ldrb r0, [r0]
	and r4, r4, r0
	cmp r4, #0
	bne _080D57FC
	add r0, r5, #0
	bl Sprite3_Move
	ldr r2, _080D581C  @ =0x00001042
	add r0, r7, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D57FC
	mov r3, r8
	strb r4, [r3]
	mov r0, #80
	strb r0, [r6]
_080D57FC:
	mov r0, r9
	bl sub_080C79D0
	b _080D58A8
_080D5804:
	.4byte gRam
_080D5808:
	.4byte 0x00001052
_080D580C:
	.4byte 0x00000F62
_080D5810:
	.4byte 0x00000F52
_080D5814:
	.4byte 0x00000FC2
_080D5818:
	.4byte 0x00000996
_080D581C:
	.4byte 0x00001042
_080D5820:
	mov r1, r8
	strb r0, [r1]
	mov r0, #80
	strb r0, [r6]
	b _080D58A8
_080D582A:
	cmp r0, #1
	bne _080D5890
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	ldr r2, _080D587C  @ =0x00000FC2
	add r0, r7, r2
	add r4, r5, r0
	ldrb r0, [r4]
	cmp r0, #0
	bne _080D58A8
	bl GetRandomInt
	mov r1, #63
	and r1, r1, r0
	add r1, r1, #128
	strb r1, [r4]
	mov r3, r8
	ldrb r0, [r3]
	add r0, r0, #1
	strb r0, [r3]
	bl GetRandomInt
	mov r2, #15
	and r2, r2, r0
	ldr r0, _080D5880  @ =0x00000F22
	add r1, r7, r0
	add r1, r5, r1
	ldr r0, _080D5884  @ =gUnknown_08177D54
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	strb r0, [r1]
	ldr r3, _080D5888  @ =0x00000F12
	add r1, r7, r3
	add r1, r5, r1
	ldr r0, _080D588C  @ =gUnknown_08177D64
	add r2, r2, r0
	ldrb r0, [r2]
	lsl r0, r0, #2
	b _080D58A6
_080D587C:
	.4byte 0x00000FC2
_080D5880:
	.4byte 0x00000F22
_080D5884:
	.4byte gUnknown_08177D54
_080D5888:
	.4byte 0x00000F12
_080D588C:
	.4byte gUnknown_08177D64
_080D5890:
	ldr r1, _080D58B4  @ =0x00000FC2
	add r0, r7, r1
	mov r3, r9
	add r1, r3, r0
	ldrb r0, [r1]
	cmp r0, #0
	bne _080D58A8
	add r0, r2, #1
	mov r2, r8
	strb r0, [r2]
	mov r0, #105
_080D58A6:
	strb r0, [r1]
_080D58A8:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
_080D58B4:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080D5754


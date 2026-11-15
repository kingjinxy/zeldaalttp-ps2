	THUMB_FUNC_START sub_080EB7F4
sub_080EB7F4: @ 0x080EB7F4
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r8, r5
	ldr r6, _080EB850  @ =gRam
	ldr r1, _080EB854  @ =0x00000FC2
	add r0, r6, r1
	add r4, r5, r0
	ldrb r7, [r4]
	cmp r7, #0
	bne _080EB8AA
	bl GetRandomInt
	mov r1, #3
	and r1, r1, r0
	cmp r1, #0
	beq _080EB89C
	ldr r2, _080EB858  @ =0x00000F82
	add r0, r6, r2
	add r1, r5, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #4
	beq _080EB864
	ldr r4, _080EB85C  @ =gUnknown_08178099
	bl GetRandomInt
	ldr r2, _080EB860  @ =0x00000FB2
	add r1, r6, r2
	add r1, r5, r1
	ldrb r1, [r1]
	lsl r1, r1, #1
	mov r2, #1
	and r2, r2, r0
	orr r1, r1, r2
	add r1, r1, r4
	ldrb r1, [r1]
	add r0, r5, #0
	bl sub_080EB8B8
	b _080EB8AA
_080EB850:
	.4byte gRam
_080EB854:
	.4byte 0x00000FC2
_080EB858:
	.4byte 0x00000F82
_080EB85C:
	.4byte gUnknown_08178099
_080EB860:
	.4byte 0x00000FB2
_080EB864:
	strb r7, [r1]
	add r0, r5, #0
	bl sub_080C2FA8
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r5, #0
	bl sub_080EB8B8
	ldr r0, _080EB894  @ =0x00000F22
	add r1, r6, r0
	add r1, r5, r1
	ldrb r0, [r1]
	lsl r0, r0, #1
	strb r0, [r1]
	ldr r2, _080EB898  @ =0x00000F12
	add r1, r6, r2
	add r1, r5, r1
	ldrb r0, [r1]
	lsl r0, r0, #1
	strb r0, [r1]
	b _080EB8AA
	.byte 0x00
	.byte 0x00
_080EB894:
	.4byte 0x00000F22
_080EB898:
	.4byte 0x00000F12
_080EB89C:
	ldr r1, _080EB8B4  @ =0x00000F52
	add r0, r6, r1
	add r0, r0, r8
	mov r1, #2
	strb r1, [r0]
	mov r0, #64
	strb r0, [r4]
_080EB8AA:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080EB8B4:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080EB7F4


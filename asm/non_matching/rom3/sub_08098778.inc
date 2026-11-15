	THUMB_FUNC_START sub_08098778
sub_08098778: @ 0x08098778
	push {r4-r6,lr}
	ldr r0, _0809878C  @ =gRam
	ldr r2, _08098790  @ =0x0000188C
	add r1, r0, r2
	ldrh r1, [r1]
	add r6, r0, #0
	cmp r1, #0
	bne _08098794
	mov r0, #0
	b _080988B4
_0809878C:
	.4byte gRam
_08098790:
	.4byte 0x0000188C
_08098794:
	ldr r3, _08098848  @ =0x0000188E
	add r0, r6, r3
	ldrb r2, [r0]
	cmp r2, #0
	bne _0809882E
	ldr r1, _0809884C  @ =0x00001718
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #23
	bne _080987AA
	b _080988AC
_080987AA:
	cmp r0, #28
	bne _080987B0
	b _080988AC
_080987B0:
	sub r3, r3, #252
	add r0, r6, r3
	ldrb r1, [r0]
	mov r0, #2
	and r0, r0, r1
	cmp r0, #0
	beq _080987C4
	ldr r1, _08098850  @ =0x00001791
	add r0, r6, r1
	strb r2, [r0]
_080987C4:
	ldr r2, _08098850  @ =0x00001791
	add r5, r6, r2
	ldrb r0, [r5]
	mov r4, #128
	and r4, r4, r0
	lsl r4, r4, #24
	lsr r4, r4, #24
	bl sub_08092E50
	strb r4, [r5]
	mov r3, #4
	ldr r0, _08098854  @ =0x00000E15
	add r1, r6, r0
	mov r4, #0
_080987E0:
	add r2, r3, r1
	ldrb r0, [r2]
	sub r0, r0, #48
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #1
	bhi _080987F0
	strb r4, [r2]
_080987F0:
	sub r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r0, #0
	bge _080987E0
	bl sub_08093078
	mov r0, #4
	mov r1, #35
	bl sub_081167A0
	mov r0, #20
	bl sub_0809E43C
	ldr r1, _08098858  @ =gRam
	ldr r3, _0809885C  @ =0x0000176E
	add r2, r1, r3
	mov r0, #20
	strb r0, [r2]
	ldr r2, _08098860  @ =0x0000180D
	add r0, r1, r2
	mov r2, #1
	strb r2, [r0]
	ldr r3, _08098848  @ =0x0000188E
	add r0, r1, r3
	strb r2, [r0]
	mov r0, #184
	lsl r0, r0, #5
	add r1, r1, r0
	mov r0, #12
	strb r0, [r1]
_0809882E:
	ldr r4, _08098858  @ =gRam
	ldr r2, _0809885C  @ =0x0000176E
	add r1, r4, r2
	ldrb r0, [r1]
	sub r0, r0, #1
	mov r5, #0
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	blt _08098864
	mov r0, #1
	b _080988B4
	.byte 0x00
	.byte 0x00
_08098848:
	.4byte 0x0000188E
_0809884C:
	.4byte 0x00001718
_08098850:
	.4byte 0x00001791
_08098854:
	.4byte 0x00000E15
_08098858:
	.4byte gRam
_0809885C:
	.4byte 0x0000176E
_08098860:
	.4byte 0x0000180D
_08098864:
	ldr r3, _08098898  @ =0x00001718
	add r1, r4, r3
	mov r0, #28
	strb r0, [r1]
	ldr r1, _0809889C  @ =0x0000176C
	add r0, r4, r1
	mov r1, #1
	strb r1, [r0]
	ldr r2, _080988A0  @ =0x00001711
	add r0, r4, r2
	strb r1, [r0]
	bl sub_08133678
	mov r3, #184
	lsl r3, r3, #5
	add r0, r4, r3
	strb r5, [r0]
	ldr r1, _080988A4  @ =0x0000180D
	add r0, r4, r1
	strb r5, [r0]
	ldr r2, _080988A8  @ =0x0000188E
	add r0, r4, r2
	strb r5, [r0]
	mov r0, #1
	b _080988B4
	.byte 0x00
	.byte 0x00
_08098898:
	.4byte 0x00001718
_0809889C:
	.4byte 0x0000176C
_080988A0:
	.4byte 0x00001711
_080988A4:
	.4byte 0x0000180D
_080988A8:
	.4byte 0x0000188E
_080988AC:
	ldr r3, _080988BC  @ =0x0000188C
	add r1, r6, r3
	mov r0, #0
	strh r0, [r1]
_080988B4:
	pop {r4-r6}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080988BC:
	.4byte 0x0000188C
	THUMB_FUNC_END sub_08098778


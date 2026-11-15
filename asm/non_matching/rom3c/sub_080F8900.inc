	THUMB_FUNC_START sub_080F8900
sub_080F8900: @ 0x080F8900
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C99DC
	add r0, r4, #0
	bl sub_080C7A20
	ldr r5, _080F898C  @ =gRam
	ldr r1, _080F8990  @ =0x00001152
	add r0, r5, r1
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #2
	mov r6, #0
	strb r0, [r2]
	sub r1, r1, #16
	add r0, r5, r1
	add r3, r4, r0
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080F896E
	strb r6, [r3]
	strb r6, [r2]
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r2, _080F8994  @ =0x0000097C
	add r0, r5, r2
	ldrb r0, [r0]
	add r0, r0, #48
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #95
	bhi _080F895C
	ldr r1, _080F8998  @ =0x0000097D
	add r0, r5, r1
	ldrb r0, [r0]
	add r0, r0, #48
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #95
	bls _080F89AC
_080F895C:
	ldr r2, _080F899C  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	strb r6, [r0]
	ldr r1, _080F89A0  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #16
	strb r1, [r0]
_080F896E:
	ldr r2, _080F89A4  @ =0x00001052
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080F89A8  @ =0x00000F92
	add r2, r5, r1
	add r2, r4, r2
	lsl r0, r0, #24
	lsr r0, r0, #27
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
	b _080F89DA
_080F898C:
	.4byte gRam
_080F8990:
	.4byte 0x00001152
_080F8994:
	.4byte 0x0000097C
_080F8998:
	.4byte 0x0000097D
_080F899C:
	.4byte 0x00000F52
_080F89A0:
	.4byte 0x00000FC2
_080F89A4:
	.4byte 0x00001052
_080F89A8:
	.4byte 0x00000F92
_080F89AC:
	ldr r2, _080F89E0  @ =0x00000F52
	add r1, r5, r2
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #31
	bl sub_080C2CB4
	bl sub_080CA32C
	lsl r0, r0, #24
	ldr r2, _080F89E4  @ =0x00000FB2
	add r1, r5, r2
	add r1, r4, r1
	lsr r0, r0, #25
	strb r0, [r1]
	ldr r1, _080F89E8  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #95
	strb r1, [r0]
_080F89DA:
	pop {r4-r6}
	pop {r0}
	bx r0
_080F89E0:
	.4byte 0x00000F52
_080F89E4:
	.4byte 0x00000FB2
_080F89E8:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080F8900


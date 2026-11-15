	THUMB_FUNC_START sub_080E3828
sub_080E3828: @ 0x080E3828
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080E3978  @ =gRam
	ldr r0, _080E397C  @ =0x00001042
	add r1, r4, r0
	add r1, r5, r1
	ldr r2, _080E3980  @ =gUnknown_08177164
	ldr r3, _080E3984  @ =0x00000FB2
	add r0, r4, r3
	add r6, r5, r0
	ldrb r0, [r6]
	add r0, r0, r2
	ldrb r1, [r1]
	ldrb r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _080E384E
	b _080E395A
_080E384E:
	ldr r1, _080E3988  @ =0x00000FC2
	add r0, r4, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E385C
	b _080E395A
_080E385C:
	ldr r2, _080E398C  @ =0x00000996
	add r0, r4, r2
	ldrb r1, [r0]
	add r0, r5, #0
	eor r0, r0, r1
	mov r1, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080E3940
	add r0, r5, #0
	bl sub_080C2FA8
	lsl r0, r0, #24
	lsr r3, r0, #24
	strb r3, [r6]
	ldr r1, _080E3990  @ =0x00001082
	add r0, r4, r1
	add r0, r5, r0
	strb r3, [r0]
	ldr r2, _080E3994  @ =0x00000FF2
	add r0, r4, r2
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #72
	bne _080E3894
	add r0, r3, #4
	lsl r0, r0, #24
	lsr r3, r0, #24
_080E3894:
	ldr r1, _080E3998  @ =0x000016C4
	add r0, r4, r1
	ldrb r2, [r0]
	add r1, r1, #1
	add r0, r4, r1
	mov r1, #0
	ldrsb r1, [r0, r1]
	lsl r1, r1, #8
	ldr r0, _080E399C  @ =gUnknown_08177168
	add r0, r3, r0
	orr r2, r2, r1
	ldrb r0, [r0]
	add r2, r2, r0
	ldr r0, _080E39A0  @ =gUnknown_08177170
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r1, _080E39A4  @ =0x00000968
	add r0, r4, r1
	strb r2, [r0]
	lsr r2, r2, #8
	add r1, r1, #1
	add r0, r4, r1
	strb r2, [r0]
	mov r2, #182
	lsl r2, r2, #5
	add r0, r4, r2
	ldrb r2, [r0]
	ldr r1, _080E39A8  @ =0x000016C1
	add r0, r4, r1
	mov r1, #0
	ldrsb r1, [r0, r1]
	lsl r1, r1, #8
	ldr r0, _080E39AC  @ =gUnknown_08177178
	add r0, r3, r0
	orr r2, r2, r1
	ldrb r0, [r0]
	add r2, r2, r0
	ldr r0, _080E39B0  @ =gUnknown_08177180
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r3, _080E39B4  @ =0x0000096C
	add r0, r4, r3
	strb r2, [r0]
	lsr r2, r2, #8
	ldr r1, _080E39B8  @ =0x0000096D
	add r0, r4, r1
	strb r2, [r0]
	add r0, r5, #0
	mov r1, #24
	bl sub_080C2DCC
	ldr r2, _080E39BC  @ =0x00000F12
	add r0, r4, r2
	add r0, r5, r0
	mov r3, #150
	lsl r3, r3, #4
	add r1, r4, r3
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r1, _080E39C0  @ =0x00000F22
	add r0, r4, r1
	add r0, r5, r0
	ldr r2, _080E39C4  @ =0x00000961
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
	add r3, r3, #28
	add r0, r4, r3
	ldrb r0, [r0]
	add r0, r0, #6
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #11
	bhi _080E3940
	ldr r1, _080E39C8  @ =0x0000097D
	add r0, r4, r1
	ldrb r0, [r0]
	add r0, r0, #6
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #11
	bls _080E395A
_080E3940:
	ldr r0, _080E3978  @ =gRam
	ldr r2, _080E39CC  @ =0x00001052
	add r0, r0, r2
	add r0, r5, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080E3728
	mov r0, #0
	cmp r0, #0
	beq _080E3972
_080E395A:
	ldr r2, _080E3978  @ =gRam
	ldr r3, _080E39D0  @ =0x00000F52
	add r1, r2, r3
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080E3988  @ =0x00000FC2
	add r2, r2, r0
	add r2, r5, r2
	mov r0, #24
	strb r0, [r2]
_080E3972:
	pop {r4-r6}
	pop {r0}
	bx r0
_080E3978:
	.4byte gRam
_080E397C:
	.4byte 0x00001042
_080E3980:
	.4byte gUnknown_08177164
_080E3984:
	.4byte 0x00000FB2
_080E3988:
	.4byte 0x00000FC2
_080E398C:
	.4byte 0x00000996
_080E3990:
	.4byte 0x00001082
_080E3994:
	.4byte 0x00000FF2
_080E3998:
	.4byte 0x000016C4
_080E399C:
	.4byte gUnknown_08177168
_080E39A0:
	.4byte gUnknown_08177170
_080E39A4:
	.4byte 0x00000968
_080E39A8:
	.4byte 0x000016C1
_080E39AC:
	.4byte gUnknown_08177178
_080E39B0:
	.4byte gUnknown_08177180
_080E39B4:
	.4byte 0x0000096C
_080E39B8:
	.4byte 0x0000096D
_080E39BC:
	.4byte 0x00000F12
_080E39C0:
	.4byte 0x00000F22
_080E39C4:
	.4byte 0x00000961
_080E39C8:
	.4byte 0x0000097D
_080E39CC:
	.4byte 0x00001052
_080E39D0:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E3828


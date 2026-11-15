	THUMB_FUNC_START sub_08040890
sub_08040890: @ 0x08040890
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, _080408AC  @ =gUnknown_03000C00
	ldrb r1, [r0]
	cmp r1, #0
	beq _080408B0
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #0
	beq _080408AA
	b _08040B02
_080408AA:
	b _080408B0
_080408AC:
	.4byte gUnknown_03000C00
_080408B0:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #100
	ldrh r0, [r1]
	cmp r0, #0
	beq _080408C4
	ldr r0, [r7]
	bl sub_08041088
	b _08040B02
_080408C4:
	ldr r0, _0804098C  @ =gUnknown_0813EAFC
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #0
	lsl r2, r1, #2
	add r0, r0, r2
	ldr r1, [r0]
	ldr r0, [r7]
	bl _call_via_r1
	ldr r0, [r7]
	bl GetNextFrame
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #3
	bne _080408E8
	b _08040B02
_080408E8:
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	beq _08040994
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	bne _08040988
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #80
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
	ldr r0, [r7]
	mov r1, #0
	str r1, [r0, #96]
	ldr r0, [r7]
	ldrb r1, [r0, #29]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #2
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #29]
	ldr r0, [r7]
	bl 0x08003B94
	ldr r0, _08040990  @ =gUnknown_03000488
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	lsl r3, r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, _08040990  @ =gUnknown_03000488
	ldrh r1, [r0, #2]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	lsl r3, r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0, #2]
	ldr r0, _08040990  @ =gUnknown_03000488
	ldrh r1, [r0, #4]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strh r2, [r0, #4]
	ldr r1, _08040990  @ =gUnknown_03000488
	add r0, r1, #0
	ldr r1, [r7]
	bl sub_0803D770
_08040988:
	b _08040B02
	.byte 0x00
	.byte 0x00
_0804098C:
	.4byte gUnknown_0813EAFC
_08040990:
	.4byte gUnknown_03000488
_08040994:
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	cmp r1, #0
	bne _0804099E
	b _08040B02
_0804099E:
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #24]
	sub r1, r2, #1
	ldrb r2, [r0, #24]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #24]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	cmp r1, #0
	beq _080409C2
	b _08040AFC
_080409C2:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #2
	bne _080409EC
	ldr r0, [r7]
	ldrb r1, [r0, #21]
	cmp r1, #1
	bne _080409EC
	ldr r0, _08040AF4  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #11]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #5]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #5]
_080409EC:
	ldr r0, [r7]
	bl 0x08003BCC
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldr r1, _08040AF8  @ =gUnknown_0842873C
	str r1, [r0, #72]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #46
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #15
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
	bl sub_080123E8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _08040AE2
	ldr r0, [r7, #4]
	ldrb r1, [r0, #9]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #32
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #9]
	ldr r0, [r7, #4]
	ldrb r1, [r0, #8]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #6
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #8]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrb r2, [r0, #10]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1, #10]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #10]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r2, [r1, #48]
	str r2, [r0, #48]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r2, [r1, #52]
	str r2, [r0, #52]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldr r2, [r1, #56]
	str r2, [r0, #56]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #80
	add r2, r0, #0
	add r0, r0, #80
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7, #4]
	ldr r1, [r7]
	ldrb r2, [r1, #31]
	lsl r3, r2, #24
	lsr r1, r3, #30
	add r2, r1, #0
	lsl r1, r2, #6
	ldrb r2, [r0, #31]
	mov r3, #63
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #31]
	ldr r1, [r7, #4]
	mov r0, #6
	bl sub_08012728
_08040AE2:
	ldr r0, [r7]
	mov r1, #3
	bl sub_08053564
	ldr r0, [r7]
	bl sub_08041328
	b _08040B02
	.byte 0x00
	.byte 0x00
_08040AF4:
	.4byte gUnknown_03006A30
_08040AF8:
	.4byte gUnknown_0842873C
_08040AFC:
	ldr r0, [r7]
	bl sub_08041200
_08040B02:
	ldr r0, [r7]
	bl sub_08003688
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08040890


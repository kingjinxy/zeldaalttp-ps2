	THUMB_FUNC_START sub_0804EDEC
sub_0804EDEC: @ 0x0804EDEC
	push {r4,r5,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strb r2, [r0, #23]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #255
	beq _0804EE2C
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r0, [r7]
	bl 0x08008DFC
	b _0804EF84
_0804EE2C:
	ldr r0, [r7]
	bl 0x08003B64
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804EE3E
	b _0804EF84
	.byte 0xA2
	.byte 0xE0
_0804EE3E:
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #80
	ldrh r2, [r1]
	add r0, r2, #0
	bl sub_08015DC0
	str r0, [r7, #4]
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldr r3, [r7]
	mov r4, #50
	ldrsh r2, [r3, r4]
	ldr r3, _0804EEBC  @ =gUnknown_03000450
	ldrh r4, [r3, #24]
	sub r3, r2, r4
	asr r2, r3, #4
	ldr r4, [r7]
	mov r5, #54
	ldrsh r3, [r4, r5]
	ldr r4, _0804EEBC  @ =gUnknown_03000450
	ldrh r5, [r4, #26]
	sub r3, r3, r5
	asr r4, r3, #4
	lsl r3, r4, #6
	orr r2, r2, r3
	add r3, r2, #0
	lsl r2, r3, #1
	add r3, r1, #4
	add r1, r3, r2
	add r2, r0, #0
	add r0, r0, #104
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #104
	ldrh r0, [r1]
	ldr r1, _0804EEC0  @ =0x00004002
	cmp r0, r1
	bne _0804EEC4
	ldr r0, [r7]
	mov r1, #0
	bl sub_0804EF98
	b _0804EF84
_0804EEBC:
	.4byte gUnknown_03000450
_0804EEC0:
	.4byte 0x00004002
_0804EEC4:
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldr r3, [r7]
	mov r4, #50
	ldrsh r2, [r3, r4]
	ldr r3, _0804EF8C  @ =gUnknown_03000450
	ldrh r4, [r3, #24]
	sub r3, r2, r4
	asr r2, r3, #4
	ldr r4, [r7]
	mov r5, #54
	ldrsh r3, [r4, r5]
	ldr r4, _0804EF8C  @ =gUnknown_03000450
	ldrh r5, [r4, #26]
	sub r3, r3, r5
	asr r4, r3, #4
	lsl r3, r4, #6
	orr r2, r2, r3
	add r3, r1, #0
	ldr r3, _0804EF90  @ =0x00002004
	add r4, r1, r3
	add r1, r4, r2
	add r2, r0, #0
	add r0, r0, #106
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7, #4]
	ldr r2, [r7]
	mov r4, #50
	ldrsh r1, [r2, r4]
	ldr r2, _0804EF8C  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r5, #54
	ldrsh r2, [r3, r5]
	ldr r3, _0804EF8C  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	lsl r2, r3, #6
	orr r1, r1, r2
	add r2, r1, #0
	lsl r1, r2, #1
	add r2, r0, #4
	add r0, r2, r1
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	ldr r3, _0804EF94  @ =0x00004002
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, [r7, #4]
	ldr r2, [r7]
	mov r3, #50
	ldrsh r1, [r2, r3]
	ldr r2, _0804EF8C  @ =gUnknown_03000450
	ldrh r3, [r2, #24]
	sub r2, r1, r3
	asr r1, r2, #4
	ldr r3, [r7]
	mov r4, #54
	ldrsh r2, [r3, r4]
	ldr r3, _0804EF8C  @ =gUnknown_03000450
	ldrh r4, [r3, #26]
	sub r2, r2, r4
	asr r3, r2, #4
	lsl r2, r3, #6
	orr r1, r1, r2
	add r2, r0, #0
	ldr r5, _0804EF90  @ =0x00002004
	add r3, r0, r5
	add r0, r3, r1
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #29
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	bl 0x080077D0
_0804EF84:
	add sp, sp, #8
	pop {r4,r5,r7}
	pop {r0}
	bx r0
_0804EF8C:
	.4byte gUnknown_03000450
_0804EF90:
	.4byte 0x00002004
_0804EF94:
	.4byte 0x00004002
	THUMB_FUNC_END sub_0804EDEC


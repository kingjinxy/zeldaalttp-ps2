	THUMB_FUNC_START sub_08030380
sub_08030380: @ 0x08030380
	push {r4,lr}
	ldr r4, _080303F0  @ =gUnknown_02016D60
	ldrh r0, [r4, #4]
	sub r0, r0, #1
	strh r0, [r4, #4]
	lsl r0, r0, #16
	cmp r0, #0
	bne _08030408
	bl sub_08059A44
	ldrb r0, [r4, #10]
	cmp r0, #0
	beq _08030404
	ldr r2, _080303F4  @ =gUnknown_030004A0
	ldrh r0, [r2]
	mov r3, #132
	lsl r3, r3, #7
	add r1, r3, #0
	orr r0, r0, r1
	strh r0, [r2]
	add r1, r2, #0
	add r1, r1, #96
	ldr r0, _080303F8  @ =0x00003D3F
	strh r0, [r1]
	add r1, r1, #2
	mov r0, #63
	strh r0, [r1]
	sub r1, r1, #8
	mov r0, #120
	strh r0, [r1]
	add r1, r1, #4
	mov r0, #160
	strh r0, [r1]
	mov r0, #70
	mov r1, #2
	mov r2, #0
	bl sub_0804C8A8
	ldr r1, _080303FC  @ =gUnknown_03000450
	str r0, [r1]
	mov r0, #70
	mov r1, #3
	mov r2, #0
	bl sub_0804C8A8
	mov r0, #70
	mov r1, #4
	mov r2, #0
	bl sub_0804C8A8
	ldr r1, _08030400  @ =gUnknown_03005050
	mov r0, #3
	strb r0, [r1]
	mov r0, #60
	strh r0, [r4, #4]
	b _08030408
_080303F0:
	.4byte gUnknown_02016D60
_080303F4:
	.4byte gUnknown_030004A0
_080303F8:
	.4byte 0x00003D3F
_080303FC:
	.4byte gUnknown_03000450
_08030400:
	.4byte gUnknown_03005050
_08030404:
	bl sub_08030314
_08030408:
	bl 0x08137AFC
	bl 0x08000BAC
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08030380

	.byte 0x00
	.byte 0x00

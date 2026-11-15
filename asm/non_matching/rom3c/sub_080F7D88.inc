	THUMB_FUNC_START sub_080F7D88
sub_080F7D88: @ 0x080F7D88
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080F7E08  @ =gRam
	ldr r1, _080F7E0C  @ =0x00000FB2
	add r0, r6, r1
	add r5, r4, r0
	ldrb r1, [r5]
	add r7, r1, #0
	ldr r2, _080F7E10  @ =0x00000FD2
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080F7DB0
	ldr r0, _080F7E14  @ =gUnknown_08176908
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r5]
_080F7DB0:
	ldr r0, _080F7E18  @ =0x00000F92
	add r1, r6, r0
	add r1, r4, r1
	ldr r2, _080F7E1C  @ =gUnknown_08179D88
	ldrb r0, [r5]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080F7E7C
	strb r7, [r5]
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F7E66
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
	mov r1, #171
	lsl r1, r1, #4
	add r0, r6, r1
	ldrh r0, [r0]
	cmp r0, #27
	bne _080F7E24
	ldr r2, _080F7E20  @ =0x00000ED2
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #80
	beq _080F7DF8
	cmp r0, #144
	bne _080F7E24
_080F7DF8:
	mov r1, #182
	cmp r0, #80
	bne _080F7E00
	mov r1, #181
_080F7E00:
	add r0, r4, #0
	bl sub_080F7CC0
	b _080F7E46
_080F7E08:
	.4byte gRam
_080F7E0C:
	.4byte 0x00000FB2
_080F7E10:
	.4byte 0x00000FD2
_080F7E14:
	.4byte gUnknown_08176908
_080F7E18:
	.4byte 0x00000F92
_080F7E1C:
	.4byte gUnknown_08179D88
_080F7E20:
	.4byte 0x00000ED2
_080F7E24:
	ldr r0, _080F7E70  @ =gRam
	ldr r1, _080F7E74  @ =0x00000DA5
	add r5, r0, r1
	ldrb r0, [r5]
	add r1, r0, #0
	add r1, r1, #18
	add r0, r4, #0
	bl sub_080F7CC0
	cmp r0, #0
	beq _080F7E46
	ldrb r0, [r5]
	add r0, r0, #1
	mov r1, #7
	bl __modsi3
	strb r0, [r5]
_080F7E46:
	add r0, r4, #0
	bl sub_080C5044
	ldr r0, _080F7E70  @ =gRam
	ldr r2, _080F7E78  @ =0x00000996
	add r0, r0, r2
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #31
	and r0, r0, r1
	cmp r0, #0
	bne _080F7E66
	add r0, r4, #0
	bl sub_080F87C0
_080F7E66:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F7E70:
	.4byte gRam
_080F7E74:
	.4byte 0x00000DA5
_080F7E78:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080F7D88


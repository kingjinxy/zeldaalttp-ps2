	THUMB_FUNC_START sub_080BEDD0
sub_080BEDD0: @ 0x080BEDD0
	push {r4-r7,lr}
	sub sp, sp, #4
	ldr r3, _080BEE1C  @ =gRam
	ldr r0, _080BEE20  @ =0x000015F0
	add r5, r3, r0
	ldrb r4, [r5]
	cmp r4, #0
	bne _080BEDE2
	b _080BEF00
_080BEDE2:
	ldr r7, _080BEE24  @ =0x00001626
	add r1, r3, r7
	mov r0, #2
	strb r0, [r1]
	ldr r0, _080BEE28  @ =0x000015F3
	add r2, r3, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r1, #255
	and r0, r0, r1
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080BEE08
	sub r0, r4, #1
	strb r0, [r5]
	mov r0, #1
	strb r0, [r2]
_080BEE08:
	ldr r1, _080BEE2C  @ =0x000015F7
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _080BEE30
	mov r0, #16
	bl sub_080CF370
	b _080BEE4E
	.byte 0x00
	.byte 0x00
_080BEE1C:
	.4byte gRam
_080BEE20:
	.4byte 0x000015F0
_080BEE24:
	.4byte 0x00001626
_080BEE28:
	.4byte 0x000015F3
_080BEE2C:
	.4byte 0x000015F7
_080BEE30:
	ldr r7, _080BEE44  @ =0x00000DA4
	add r0, r3, r7
	ldrb r0, [r0]
	cmp r0, #0
	beq _080BEE48
	mov r0, #16
	bl sub_080CF3E8
	b _080BEE4E
	.byte 0x00
	.byte 0x00
_080BEE44:
	.4byte 0x00000DA4
_080BEE48:
	mov r0, #16
	bl sub_080CF3B8
_080BEE4E:
	ldr r3, _080BEE6C  @ =gRam
	ldr r1, _080BEE70  @ =0x000015F1
	add r0, r3, r1
	ldrb r5, [r0]
	ldr r7, _080BEE74  @ =0x00000952
	add r0, r3, r7
	ldrb r0, [r0]
	sub r0, r5, r0
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #247
	bls _080BEE7C
	ldr r0, _080BEE78  @ =0x000015F0
	add r1, r3, r0
	b _080BEE9E
_080BEE6C:
	.4byte gRam
_080BEE70:
	.4byte 0x000015F1
_080BEE74:
	.4byte 0x00000952
_080BEE78:
	.4byte 0x000015F0
_080BEE7C:
	mov r1, #150
	lsl r1, r1, #4
	add r0, r3, r1
	strb r5, [r0]
	ldr r7, _080BEEA4  @ =0x000015F2
	add r0, r3, r7
	ldrb r2, [r0]
	sub r1, r1, #8
	add r0, r3, r1
	ldrb r0, [r0]
	sub r0, r2, r0
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #239
	bls _080BEEA8
	sub r7, r7, #2
	add r1, r3, r7
_080BEE9E:
	mov r0, #0
	strb r0, [r1]
	b _080BEF00
_080BEEA4:
	.4byte 0x000015F2
_080BEEA8:
	ldr r1, _080BEEC0  @ =0x00000961
	add r0, r3, r1
	strb r2, [r0]
	ldr r7, _080BEEC4  @ =0x000015F0
	add r0, r3, r7
	ldrb r4, [r0]
	cmp r4, #2
	bhi _080BEEC8
	bl sub_080BEF08
	b _080BEF00
	.byte 0x00
	.byte 0x00
_080BEEC0:
	.4byte 0x00000961
_080BEEC4:
	.4byte 0x000015F0
_080BEEC8:
	ldr r0, _080BEEE4  @ =gUnknown_03003E74
	ldrh r6, [r0]
	ldr r1, _080BEEE8  @ =gUnknown_081717B8
	ldr r7, _080BEEEC  @ =0x00000DA4
	add r0, r3, r7
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	lsl r0, r0, #8
	cmp r4, #8
	bls _080BEEF0
	mov r3, #48
	b _080BEEF2
	.byte 0x00
	.byte 0x00
_080BEEE4:
	.4byte gUnknown_03003E74
_080BEEE8:
	.4byte gUnknown_081717B8
_080BEEEC:
	.4byte 0x00000DA4
_080BEEF0:
	mov r3, #50
_080BEEF2:
	orr r3, r3, r0
	mov r0, #0
	str r0, [sp]
	add r0, r6, #0
	add r1, r5, #0
	bl sub_080C6004
_080BEF00:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080BEDD0


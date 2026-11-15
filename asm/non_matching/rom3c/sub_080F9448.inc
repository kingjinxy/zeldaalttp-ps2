	THUMB_FUNC_START sub_080F9448
sub_080F9448: @ 0x080F9448
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r3, _080F949C  @ =gRam
	ldr r0, _080F94A0  @ =0x00000B5C
	add r5, r3, r0
	ldrb r1, [r5]
	cmp r1, #0
	beq _080F9462
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080F9496
_080F9462:
	ldr r1, _080F94A4  @ =0x0000180C
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080F9496
	ldr r0, _080F94A8  @ =0x00000A3C
	add r1, r3, r0
	mov r2, #0
	mov r0, #14
	strh r0, [r1]
	ldr r0, _080F94AC  @ =0x00000F52
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080F94B0  @ =0x00001894
	add r0, r3, r1
	strb r2, [r0]
	ldr r0, _080F94B4  @ =0x00000195
	bl sub_080C95C0
	mov r0, #254
	strb r0, [r5]
_080F9496:
	pop {r4,r5}
	pop {r0}
	bx r0
_080F949C:
	.4byte gRam
_080F94A0:
	.4byte 0x00000B5C
_080F94A4:
	.4byte 0x0000180C
_080F94A8:
	.4byte 0x00000A3C
_080F94AC:
	.4byte 0x00000F52
_080F94B0:
	.4byte 0x00001894
_080F94B4:
	.4byte 0x00000195
	THUMB_FUNC_END sub_080F9448


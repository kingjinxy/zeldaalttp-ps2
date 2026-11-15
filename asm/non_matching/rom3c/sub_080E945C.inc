	THUMB_FUNC_START sub_080E945C
sub_080E945C: @ 0x080E945C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080E9490  @ =gRam
	ldr r1, _080E9494  @ =0x00000FC2
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E954C
	ldr r2, _080E9498  @ =0x00000F92
	add r1, r5, r2
	add r1, r4, r1
	ldr r2, _080E949C  @ =gUnknown_08177ADC
	lsr r0, r0, #28
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldrb r0, [r6]
	cmp r0, #80
	bne _080E94A4
	ldr r0, _080E94A0  @ =0x00000145
	bl sub_080C95C0
	b _080E955C
_080E9490:
	.4byte gRam
_080E9494:
	.4byte 0x00000FC2
_080E9498:
	.4byte 0x00000F92
_080E949C:
	.4byte gUnknown_08177ADC
_080E94A0:
	.4byte 0x00000145
_080E94A4:
	cmp r0, #79
	bne _080E94CE
	ldr r1, _080E94BC  @ =0x00001AE2
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E94C4
	ldr r0, _080E94C0  @ =0x00000149
	bl sub_080C95C0
	mov r0, #48
	b _080E955A
_080E94BC:
	.4byte 0x00001AE2
_080E94C0:
	.4byte 0x00000149
_080E94C4:
	mov r0, #163
	lsl r0, r0, #1
	bl sub_080C95C0
	b _080E955C
_080E94CE:
	cmp r0, #78
	bne _080E9530
	ldr r2, _080E94E8  @ =0x00001AE2
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E94EC
	mov r0, #164
	lsl r0, r0, #1
	bl sub_080C95C0
	mov r0, #48
	b _080E955A
_080E94E8:
	.4byte 0x00001AE2
_080E94EC:
	bl sub_080AA868
	ldr r1, _080E9504  @ =0x000001F3
	cmp r0, r1
	bgt _080E9508
	mov r0, #164
	lsl r0, r0, #1
	bl sub_080C95C0
	mov r0, #48
	b _080E955A
	.byte 0x00
	.byte 0x00
_080E9504:
	.4byte 0x000001F3
_080E9508:
	ldr r0, _080E9524  @ =0xFFFFFE0C
	bl sub_080AA83C
	ldr r0, _080E9528  @ =0x00000147
	bl sub_080C95C0
	ldr r0, _080E952C  @ =0x00001062
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	b _080E955C
	.byte 0x00
	.byte 0x00
_080E9524:
	.4byte 0xFFFFFE0C
_080E9528:
	.4byte 0x00000147
_080E952C:
	.4byte 0x00001062
_080E9530:
	cmp r0, #77
	bne _080E955C
	ldr r1, _080E9548  @ =0x00001062
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E955C
	add r0, r4, #0
	bl sub_080E9900
	b _080E955C
_080E9548:
	.4byte 0x00001062
_080E954C:
	ldr r2, _080E9564  @ =0x00000F52
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #36
_080E955A:
	strb r0, [r6]
_080E955C:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E9564:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E945C


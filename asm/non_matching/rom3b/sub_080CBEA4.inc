	THUMB_FUNC_START sub_080CBEA4
sub_080CBEA4: @ 0x080CBEA4
	push {r4-r7,lr}
	ldr r5, _080CBF6C  @ =gRam
	ldr r1, _080CBF70  @ =0x000009B2
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bne _080CBF64
	ldr r2, _080CBF74  @ =0x0000164A
	add r0, r5, r2
	ldrb r0, [r0]
	cmp r0, #0
	beq _080CBF64
	ldr r3, _080CBF78  @ =0x000009AD
	add r0, r5, r3
	sub r2, r2, #69
	add r1, r5, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	bne _080CBF64
	ldr r3, _080CBF7C  @ =0x0000164B
	add r0, r5, r3
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #63
	and r1, r1, r0
	cmp r1, #0
	bne _080CBF64
	ldr r0, _080CBF80  @ =0x00000958
	add r7, r5, r0
	ldrh r0, [r7]
	lsl r0, r0, #16
	asr r0, r0, #24
	ldr r2, _080CBF84  @ =0x00001603
	add r1, r5, r2
	ldrb r1, [r1]
	sub r0, r0, r1
	sub r0, r0, #2
	mov r1, #128
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _080CBF64
	mov r0, #194
	mov r1, #255
	bl sub_080CA538
	add r4, r0, #0
	cmp r4, #0
	blt _080CBF64
	bl GetRandomInt
	mov r1, #127
	and r1, r1, r0
	ldr r3, _080CBF88  @ =0x00000952
	add r0, r5, r3
	ldrh r0, [r0]
	add r0, r0, #64
	add r1, r1, r0
	ldrh r2, [r7]
	sub r2, r2, #48
	ldr r3, _080CBF8C  @ =0x00000EE2
	add r0, r5, r3
	add r0, r4, r0
	strb r1, [r0]
	add r3, r3, #32
	add r0, r5, r3
	add r0, r4, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r1, _080CBF90  @ =0x00000ED2
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	sub r3, r3, #16
	add r0, r5, r3
	add r0, r4, r0
	lsr r2, r2, #8
	strb r2, [r0]
	ldr r1, _080CBF94  @ =0x000010F2
	add r0, r5, r1
	add r0, r4, r0
	strb r6, [r0]
	ldr r2, _080CBF98  @ =0x00000FB2
	add r0, r5, r2
	add r0, r4, r0
	strb r6, [r0]
	ldr r3, _080CBF9C  @ =0x00001142
	add r0, r5, r3
	add r0, r4, r0
	strb r6, [r0]
_080CBF64:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CBF6C:
	.4byte gRam
_080CBF70:
	.4byte 0x000009B2
_080CBF74:
	.4byte 0x0000164A
_080CBF78:
	.4byte 0x000009AD
_080CBF7C:
	.4byte 0x0000164B
_080CBF80:
	.4byte 0x00000958
_080CBF84:
	.4byte 0x00001603
_080CBF88:
	.4byte 0x00000952
_080CBF8C:
	.4byte 0x00000EE2
_080CBF90:
	.4byte 0x00000ED2
_080CBF94:
	.4byte 0x000010F2
_080CBF98:
	.4byte 0x00000FB2
_080CBF9C:
	.4byte 0x00001142
	THUMB_FUNC_END sub_080CBEA4


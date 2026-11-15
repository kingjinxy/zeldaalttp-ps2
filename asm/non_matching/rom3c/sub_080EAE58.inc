	THUMB_FUNC_START sub_080EAE58
sub_080EAE58: @ 0x080EAE58
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	ldr r6, _080EAEB0  @ =gRam
	ldr r0, _080EAEB4  @ =0x00000D94
	add r1, r6, r0
	add r1, r4, r1
	ldrb r2, [r1]
	mov r0, #48
	orr r0, r0, r2
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EAEC2
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EAEC2
	add r0, r4, #0
	bl sub_080C5044
	add r0, r4, #0
	bl Sprite3_Move
	ldr r1, _080EAEB8  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080EAEBC
	add r0, r4, #0
	bl sub_080EAD10
	b _080EAEC2
	.byte 0x00
	.byte 0x00
_080EAEB0:
	.4byte gRam
_080EAEB4:
	.4byte 0x00000D94
_080EAEB8:
	.4byte 0x00000F52
_080EAEBC:
	add r0, r5, #0
	bl sub_080EAC64
_080EAEC2:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080EAE58


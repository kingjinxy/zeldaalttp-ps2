	THUMB_FUNC_START sub_080EF4A4
sub_080EF4A4: @ 0x080EF4A4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r4, r0, #0
	bl sub_080C5044
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r2, _080EF52C  @ =gRam
	ldr r1, _080EF530  @ =0x00001152
	add r0, r2, r1
	add r3, r4, r0
	ldrb r1, [r3]
	add r0, r1, #0
	sub r0, r0, #236
	mov r5, #128
	and r0, r0, r5
	cmp r0, #0
	bne _080EF4D6
	sub r0, r1, #1
	strb r0, [r3]
_080EF4D6:
	ldr r3, _080EF534  @ =0x00001142
	add r0, r2, r3
	add r0, r4, r0
	ldrb r1, [r0]
	add r0, r5, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080EF524
	ldr r0, _080EF538  @ =0x00000F52
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080EF53C  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	strb r5, [r0]
	ldr r3, _080EF540  @ =0x00000FB2
	add r1, r2, r3
	add r1, r4, r1
	sub r3, r3, #208
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080EF544  @ =0x00001042
	add r1, r2, r0
	add r1, r4, r1
	sub r3, r3, #16
	add r0, r2, r3
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080EF548  @ =0x00000FD2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #74
	strb r1, [r0]
_080EF524:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EF52C:
	.4byte gRam
_080EF530:
	.4byte 0x00001152
_080EF534:
	.4byte 0x00001142
_080EF538:
	.4byte 0x00000F52
_080EF53C:
	.4byte 0x00000FC2
_080EF540:
	.4byte 0x00000FB2
_080EF544:
	.4byte 0x00001042
_080EF548:
	.4byte 0x00000FD2
	THUMB_FUNC_END sub_080EF4A4


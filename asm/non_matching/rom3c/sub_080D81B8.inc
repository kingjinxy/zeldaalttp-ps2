	THUMB_FUNC_START sub_080D81B8
sub_080D81B8: @ 0x080D81B8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r1, _080D81FC  @ =gRam
	ldr r2, _080D8200  @ =0x00001172
	add r0, r1, r2
	add r0, r5, r0
	mov r2, #0
	strb r2, [r0]
	ldr r0, _080D8204  @ =0x00000FC2
	add r1, r1, r0
	add r1, r5, r1
	ldrb r1, [r1]
	cmp r1, #0
	beq _080D81E6
	mov r0, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080D81E6
	add r0, r5, #0
	mov r1, #32
	bl sub_080C35FC
_080D81E6:
	add r0, r5, #0
	bl sub_080C5044
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D8208
	add r0, r5, #0
	bl sub_080D8364
	b _080D825A
	.byte 0x00
	.byte 0x00
_080D81FC:
	.4byte gRam
_080D8200:
	.4byte 0x00001172
_080D8204:
	.4byte 0x00000FC2
_080D8208:
	add r0, r5, #0
	bl Sprite3_Move
	ldr r1, _080D8244  @ =gRam
	ldr r2, _080D8248  @ =0x00001624
	add r3, r1, r2
	ldrb r2, [r3]
	ldr r0, _080D824C  @ =0x00001625
	add r4, r1, r0
	ldrb r0, [r4]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r0, _080D8250  @ =0x00001142
	add r1, r1, r0
	add r1, r5, r1
	ldrb r0, [r1]
	sub r2, r2, r0
	strb r2, [r3]
	lsr r2, r2, #8
	strb r2, [r4]
	add r0, r5, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D8254
	add r0, r5, #0
	bl sub_080D82C0
	b _080D825A
_080D8244:
	.4byte gRam
_080D8248:
	.4byte 0x00001624
_080D824C:
	.4byte 0x00001625
_080D8250:
	.4byte 0x00001142
_080D8254:
	add r0, r5, #0
	bl sub_080D8364
_080D825A:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080D81B8


	THUMB_FUNC_START sub_080D6574
sub_080D6574: @ 0x080D6574
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r3, _080D65A8  @ =gRam
	ldr r0, _080D65AC  @ =0x00001172
	add r1, r3, r0
	add r1, r4, r1
	ldr r2, _080D65B0  @ =0x00000FC2
	add r0, r3, r2
	add r2, r4, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldrb r0, [r2]
	cmp r0, #0
	beq _080D65B4
	add r0, r4, #0
	mov r1, #16
	bl sub_080C35FC
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C6F48
	b _080D65C4
_080D65A8:
	.4byte gRam
_080D65AC:
	.4byte 0x00001172
_080D65B0:
	.4byte 0x00000FC2
_080D65B4:
	ldr r1, _080D65CC  @ =0x00000F52
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #127
	strb r0, [r2]
_080D65C4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D65CC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D6574


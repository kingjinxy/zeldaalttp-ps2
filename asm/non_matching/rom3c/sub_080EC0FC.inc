	THUMB_FUNC_START sub_080EC0FC
sub_080EC0FC: @ 0x080EC0FC
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080EC1AC
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080EC154
	add r0, r4, #0
	bl sub_080C4F98
	ldr r6, _080EC15C  @ =gRam
	ldr r1, _080EC160  @ =0x00001052
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	add r0, r4, #0
	bl Sprite3_Move
	ldr r1, _080EC164  @ =0x00000FC2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r5, [r0]
	cmp r5, #0
	bne _080EC154
	add r0, r4, #0
	bl sub_080C7A20
	lsl r0, r0, #24
	cmp r0, #0
	beq _080EC154
	ldr r1, _080EC168  @ =0x00000FA2
	add r0, r6, r1
	add r0, r4, r0
	strb r5, [r0]
	add r0, r4, #0
	bl sub_080C4F3C
_080EC154:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EC15C:
	.4byte gRam
_080EC160:
	.4byte 0x00001052
_080EC164:
	.4byte 0x00000FC2
_080EC168:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080EC0FC


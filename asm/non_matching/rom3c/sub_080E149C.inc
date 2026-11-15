	THUMB_FUNC_START sub_080E149C
sub_080E149C: @ 0x080E149C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r4, r2, #0
	ldr r3, _080E14D4  @ =gRam
	ldr r1, _080E14D8  @ =0x00001142
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #6
	strb r1, [r0]
	ldr r1, _080E14DC  @ =0x00000B36
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #206
	bne _080E14C6
	ldr r0, _080E14E0  @ =0x00000F82
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
_080E14C6:
	add r0, r4, #0
	bl sub_080E157C
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E14D4:
	.4byte gRam
_080E14D8:
	.4byte 0x00001142
_080E14DC:
	.4byte 0x00000B36
_080E14E0:
	.4byte 0x00000F82
	THUMB_FUNC_END sub_080E149C


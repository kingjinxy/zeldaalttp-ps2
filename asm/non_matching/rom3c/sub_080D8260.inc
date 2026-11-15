	THUMB_FUNC_START sub_080D8260
sub_080D8260: @ 0x080D8260
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r1, _080D8290  @ =gRam
	ldr r2, _080D8294  @ =0x00000FC2
	add r0, r1, r2
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	beq _080D829C
	cmp r0, #63
	bls _080D8288
	ldr r3, _080D8298  @ =0x00001152
	add r0, r1, r3
	add r0, r4, r0
	mov r1, #4
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C2C4C
_080D8288:
	add r0, r4, #0
	bl sub_080D82C0
	b _080D82B4
_080D8290:
	.4byte gRam
_080D8294:
	.4byte 0x00000FC2
_080D8298:
	.4byte 0x00001152
_080D829C:
	ldr r3, _080D82BC  @ =0x00000F52
	add r0, r1, r3
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #16
	strb r0, [r2]
	add r0, r4, #0
	mov r1, #32
	bl sub_080C35FC
_080D82B4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D82BC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080D8260


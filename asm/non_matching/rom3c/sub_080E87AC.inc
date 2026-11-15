	THUMB_FUNC_START sub_080E87AC
sub_080E87AC: @ 0x080E87AC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r4, _080E87D8  @ =gRam
	ldr r1, _080E87DC  @ =0x00000FC2
	add r0, r4, r1
	add r1, r3, r0
	ldrb r0, [r1]
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	beq _080E87E8
	ldr r2, _080E87E0  @ =0x00000F92
	add r1, r4, r2
	add r1, r3, r1
	ldr r2, _080E87E4  @ =gUnknown_08177988
	lsr r0, r0, #26
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _080E87FC
	.byte 0x00
	.byte 0x00
_080E87D8:
	.4byte gRam
_080E87DC:
	.4byte 0x00000FC2
_080E87E0:
	.4byte 0x00000F92
_080E87E4:
	.4byte gUnknown_08177988
_080E87E8:
	mov r0, #128
	strb r0, [r1]
	ldr r1, _080E8804  @ =0x00000F92
	add r0, r4, r1
	add r0, r3, r0
	strb r2, [r0]
	sub r1, r1, #64
	add r0, r4, r1
	add r0, r3, r0
	strb r2, [r0]
_080E87FC:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E8804:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080E87AC


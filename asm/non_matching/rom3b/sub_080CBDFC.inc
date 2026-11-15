	THUMB_FUNC_START sub_080CBDFC
sub_080CBDFC: @ 0x080CBDFC
	ldr r1, _080CBE1C  @ =gRam
	ldr r0, _080CBE20  @ =0x00000964
	add r2, r1, r0
	ldrb r0, [r2]
	sub r0, r0, #1
	strb r0, [r2]
	mov r0, #0
	ldrsb r0, [r2, r0]
	ldr r3, _080CBE24  @ =0x00000E85
	add r1, r1, r3
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	ldrb r0, [r2]
	bx lr
	.byte 0x00
	.byte 0x00
_080CBE1C:
	.4byte gRam
_080CBE20:
	.4byte 0x00000964
_080CBE24:
	.4byte 0x00000E85
	THUMB_FUNC_END sub_080CBDFC


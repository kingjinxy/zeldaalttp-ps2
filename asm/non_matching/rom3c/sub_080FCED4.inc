	THUMB_FUNC_START sub_080FCED4
sub_080FCED4: @ 0x080FCED4
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r0, _080FCEF4  @ =gRam
	ldr r1, _080FCEF8  @ =0x00000F82
	add r0, r0, r1
	add r0, r2, r0
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080FCEFC
	add r0, r2, #0
	bl sub_080FB8E0
	b _080FCF02
_080FCEF4:
	.4byte gRam
_080FCEF8:
	.4byte 0x00000F82
_080FCEFC:
	add r0, r2, #0
	bl sub_080FBDD0
_080FCF02:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080FCED4

	.byte 0x00
	.byte 0x00

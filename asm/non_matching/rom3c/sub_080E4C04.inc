	THUMB_FUNC_START sub_080E4C04
sub_080E4C04: @ 0x080E4C04
	push {lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, _080E4C20  @ =gRam
	ldr r2, _080E4C24  @ =0x00000F82
	add r0, r0, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E4C28
	add r0, r1, #0
	bl sub_080E4474
	b _080E4C2E
_080E4C20:
	.4byte gRam
_080E4C24:
	.4byte 0x00000F82
_080E4C28:
	add r0, r1, #0
	bl sub_080E4838
_080E4C2E:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E4C04

	.byte 0x00
	.byte 0x00

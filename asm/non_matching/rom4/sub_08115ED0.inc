	THUMB_FUNC_START sub_08115ED0
sub_08115ED0: @ 0x08115ED0
	push {lr}
	ldr r0, _08115EEC  @ =gRam
	ldr r1, _08115EF0  @ =0x0000166A
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08115EFA
	bl sub_081149E8
	cmp r0, #0
	beq _08115EF4
	bl sub_08114BC8
	b _08115EFE
_08115EEC:
	.4byte gRam
_08115EF0:
	.4byte 0x0000166A
_08115EF4:
	bl sub_0811504C
	b _08115EFE
_08115EFA:
	bl sub_0811504C
_08115EFE:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08115ED0

	.byte 0x00
	.byte 0x00

	THUMB_FUNC_START sub_080311A0
sub_080311A0: @ 0x080311A0
	add r2, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r0, _080311BC  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r0, #3
	beq _080311C0
	cmp r0, #3
	ble _080311B6
	cmp r0, #4
	beq _080311C6
_080311B6:
	lsl r0, r1, #2
	b _080311CA
	.byte 0x00
	.byte 0x00
_080311BC:
	.4byte gUnknown_03006C80
_080311C0:
	lsl r0, r1, #2
	add r0, r0, #8
	b _080311CA
_080311C6:
	lsl r0, r1, #2
	add r0, r0, #20
_080311CA:
	add r0, r2, r0
	bx lr
	THUMB_FUNC_END sub_080311A0

	.byte 0x00
	.byte 0x00

	THUMB_FUNC_START sub_080FAFF8
sub_080FAFF8: @ 0x080FAFF8
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	bl sub_080FAC20
	ldr r2, _080FB020  @ =gRam
	ldr r3, _080FB024  @ =0x00001052
	add r1, r2, r3
	add r0, r0, r1
	mov r3, #0
	mov r1, #1
	strb r1, [r0]
	ldr r0, _080FB028  @ =0x00001663
	add r2, r2, r0
	strb r3, [r2]
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FB020:
	.4byte gRam
_080FB024:
	.4byte 0x00001052
_080FB028:
	.4byte 0x00001663
	THUMB_FUNC_END sub_080FAFF8


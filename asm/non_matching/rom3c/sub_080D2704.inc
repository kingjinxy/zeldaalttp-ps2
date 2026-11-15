	THUMB_FUNC_START sub_080D2704
sub_080D2704: @ 0x080D2704
	push {lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, _080D2720  @ =gRam
	ldr r2, _080D2724  @ =0x00001082
	add r0, r0, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D2728
	cmp r0, #1
	beq _080D2730
	b _080D2736
	.byte 0x00
	.byte 0x00
_080D2720:
	.4byte gRam
_080D2724:
	.4byte 0x00001082
_080D2728:
	add r0, r1, #0
	bl sub_080D273C
	b _080D2736
_080D2730:
	add r0, r1, #0
	bl sub_080D25C8
_080D2736:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080D2704

	.byte 0x00
	.byte 0x00

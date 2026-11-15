	THUMB_FUNC_START sub_080E15A8
sub_080E15A8: @ 0x080E15A8
	push {r4,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r4, r1, #0
	ldr r0, _080E15D8  @ =gRam
	ldr r2, _080E15DC  @ =0x00001042
	add r0, r0, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E15C4
	add r0, r1, #0
	bl Sprite3_Move
_080E15C4:
	add r0, r4, #0
	bl sub_080C6F48
	add r0, r4, #0
	bl sub_080E12DC
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E15D8:
	.4byte gRam
_080E15DC:
	.4byte 0x00001042
	THUMB_FUNC_END sub_080E15A8


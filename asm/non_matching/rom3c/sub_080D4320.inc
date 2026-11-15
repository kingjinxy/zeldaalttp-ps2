	THUMB_FUNC_START sub_080D4320
sub_080D4320: @ 0x080D4320
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	bne _080D4350
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D4350
	bl sub_080AF16C
	ldr r0, _080D4358  @ =gRam
	ldr r1, _080D435C  @ =0x00001719
	add r0, r0, r1
	strb r5, [r0]
	bl sub_08093078
_080D4350:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D4358:
	.4byte gRam
_080D435C:
	.4byte 0x00001719
	THUMB_FUNC_END sub_080D4320


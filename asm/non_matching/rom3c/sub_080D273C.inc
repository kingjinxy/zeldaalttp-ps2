	THUMB_FUNC_START sub_080D273C
sub_080D273C: @ 0x080D273C
	push {lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, _080D2758  @ =gRam
	ldr r2, _080D275C  @ =0x00001052
	add r0, r0, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080D2760
	cmp r0, #1
	beq _080D2768
	b _080D276E
	.byte 0x00
	.byte 0x00
_080D2758:
	.4byte gRam
_080D275C:
	.4byte 0x00001052
_080D2760:
	add r0, r1, #0
	bl sub_080D21AC
	b _080D276E
_080D2768:
	add r0, r1, #0
	bl sub_080D27FC
_080D276E:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080D273C

	.byte 0x00
	.byte 0x00

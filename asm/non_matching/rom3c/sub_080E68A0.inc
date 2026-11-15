	THUMB_FUNC_START sub_080E68A0
sub_080E68A0: @ 0x080E68A0
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r4, r2, #0
	ldr r3, _080E68D4  @ =gRam
	ldr r1, _080E68D8  @ =0x00000996
	add r0, r3, r1
	ldrb r1, [r0]
	mov r0, #31
	and r0, r0, r1
	cmp r0, #0
	beq _080E68C8
	ldr r5, _080E68DC  @ =0x00000FB2
	add r0, r3, r5
	add r0, r2, r0
	add r5, r5, #208
	add r1, r3, r5
	add r1, r2, r1
	ldrb r1, [r1]
	strb r1, [r0]
_080E68C8:
	add r0, r4, #0
	bl sub_080E68E0
	pop {r4,r5}
	pop {r0}
	bx r0
_080E68D4:
	.4byte gRam
_080E68D8:
	.4byte 0x00000996
_080E68DC:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080E68A0


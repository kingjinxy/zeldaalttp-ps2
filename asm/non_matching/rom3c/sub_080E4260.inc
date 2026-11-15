	THUMB_FUNC_START sub_080E4260
sub_080E4260: @ 0x080E4260
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r4, r0, #0
	ldr r0, _080E42B0  @ =gRam
	ldr r2, _080E42B4  @ =0x00000F92
	add r1, r0, r2
	add r3, r4, r1
	ldrb r6, [r3]
	ldr r7, _080E42B8  @ =0x00000FB2
	add r1, r0, r7
	add r2, r4, r1
	ldrb r1, [r2]
	add r5, r1, #0
	add r7, r7, #32
	add r0, r0, r7
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E4298
	ldr r0, _080E42BC  @ =gUnknown_08176908
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r0, _080E42C0  @ =gUnknown_08177368
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r3]
_080E4298:
	add r0, r4, #0
	bl sub_080E42EC
	add r0, r4, #0
	add r1, r6, #0
	add r2, r5, #0
	bl sub_080E3538
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E42B0:
	.4byte gRam
_080E42B4:
	.4byte 0x00000F92
_080E42B8:
	.4byte 0x00000FB2
_080E42BC:
	.4byte gUnknown_08176908
_080E42C0:
	.4byte gUnknown_08177368
	THUMB_FUNC_END sub_080E4260


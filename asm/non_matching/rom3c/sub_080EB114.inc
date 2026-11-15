	THUMB_FUNC_START sub_080EB114
sub_080EB114: @ 0x080EB114
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r0, #27
	add r1, r4, #0
	bl sub_080CA538
	add r5, r0, #0
	cmp r5, #0
	blt _080EB1B2
	ldr r3, _080EB1B8  @ =gRam
	ldr r0, _080EB1BC  @ =0x00000FB2
	add r2, r3, r0
	add r0, r4, r2
	ldrb r4, [r0]
	ldr r1, _080EB1C0  @ =0x00000F62
	add r0, r3, r1
	add r0, r5, r0
	mov r1, #3
	strb r1, [r0]
	add r2, r5, r2
	strb r4, [r2]
	mov r2, #150
	lsl r2, r2, #4
	add r1, r3, r2
	ldr r0, _080EB1C4  @ =gUnknown_08177DA0
	add r0, r4, r0
	ldrb r0, [r0]
	ldrh r2, [r1]
	add r2, r2, r0
	ldr r0, _080EB1C8  @ =gUnknown_08177DA4
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r6, _080EB1CC  @ =0x00000964
	add r1, r3, r6
	ldr r0, _080EB1D0  @ =gUnknown_08177DA8
	add r0, r4, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _080EB1D4  @ =gUnknown_08177DAC
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r6, _080EB1D8  @ =0x00000EE2
	add r0, r3, r6
	add r0, r5, r0
	strb r2, [r0]
	add r6, r6, #32
	add r0, r3, r6
	add r0, r5, r0
	lsr r2, r2, #8
	strb r2, [r0]
	ldr r2, _080EB1DC  @ =0x00000ED2
	add r0, r3, r2
	add r0, r5, r0
	strb r1, [r0]
	sub r6, r6, #16
	add r0, r3, r6
	add r0, r5, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _080EB1E0  @ =0x00000F22
	add r1, r3, r0
	add r1, r5, r1
	ldr r0, _080EB1E4  @ =gUnknown_08177DB0
	add r0, r4, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080EB1E8  @ =0x00000F12
	add r3, r3, r1
	add r3, r5, r3
	ldr r0, _080EB1EC  @ =gUnknown_08177DB4
	add r4, r4, r0
	ldrb r0, [r4]
	strb r0, [r3]
_080EB1B2:
	pop {r4-r6}
	pop {r0}
	bx r0
_080EB1B8:
	.4byte gRam
_080EB1BC:
	.4byte 0x00000FB2
_080EB1C0:
	.4byte 0x00000F62
_080EB1C4:
	.4byte gUnknown_08177DA0
_080EB1C8:
	.4byte gUnknown_08177DA4
_080EB1CC:
	.4byte 0x00000964
_080EB1D0:
	.4byte gUnknown_08177DA8
_080EB1D4:
	.4byte gUnknown_08177DAC
_080EB1D8:
	.4byte 0x00000EE2
_080EB1DC:
	.4byte 0x00000ED2
_080EB1E0:
	.4byte 0x00000F22
_080EB1E4:
	.4byte gUnknown_08177DB0
_080EB1E8:
	.4byte 0x00000F12
_080EB1EC:
	.4byte gUnknown_08177DB4
	THUMB_FUNC_END sub_080EB114


	THUMB_FUNC_START sub_080E3674
sub_080E3674: @ 0x080E3674
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080E36EC  @ =gRam
	ldr r1, _080E36F0  @ =0x00000FC2
	add r0, r5, r1
	add r2, r4, r0
	ldrb r0, [r2]
	cmp r0, #0
	beq _080E3710
	add r0, r4, #0
	bl sub_080E263C
	ldr r1, _080E36F4  @ =0x00001042
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	beq _080E36B2
	ldr r1, _080E36F8  @ =0x00000FB2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	mov r2, #1
	eor r1, r1, r2
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080E26C8
_080E36B2:
	ldr r0, _080E36FC  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r2, _080E3700  @ =gUnknown_08176910
	add r0, r0, #144
	add r3, r5, r0
	add r3, r4, r3
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080E3704  @ =0x00000F12
	add r1, r5, r0
	add r1, r4, r1
	ldr r2, _080E3708  @ =gUnknown_08176914
	ldrb r0, [r3]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080E370C  @ =0x00001082
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r3]
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080E3728
	b _080E371E
	.byte 0x00
	.byte 0x00
_080E36EC:
	.4byte gRam
_080E36F0:
	.4byte 0x00000FC2
_080E36F4:
	.4byte 0x00001042
_080E36F8:
	.4byte 0x00000FB2
_080E36FC:
	.4byte 0x00000F22
_080E3700:
	.4byte gUnknown_08176910
_080E3704:
	.4byte 0x00000F12
_080E3708:
	.4byte gUnknown_08176914
_080E370C:
	.4byte 0x00001082
_080E3710:
	ldr r1, _080E3724  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	mov r0, #160
	strb r0, [r2]
_080E371E:
	pop {r4,r5}
	pop {r0}
	bx r0
_080E3724:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E3674


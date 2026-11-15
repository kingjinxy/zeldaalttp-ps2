	THUMB_FUNC_START sub_080E0698
sub_080E0698: @ 0x080E0698
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080E06B8  @ =gRam
	ldr r3, _080E06BC  @ =0x00001AE2
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E06C4
	ldr r3, _080E06C0  @ =0x00000F52
	add r0, r1, r3
	add r0, r2, r0
	mov r1, #6
	strb r1, [r0]
	b _080E06D0
	.byte 0x00
	.byte 0x00
_080E06B8:
	.4byte gRam
_080E06BC:
	.4byte 0x00001AE2
_080E06C0:
	.4byte 0x00000F52
_080E06C4:
	ldr r0, _080E06D4  @ =0x00000F52
	add r1, r1, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080E06D0:
	pop {r0}
	bx r0
_080E06D4:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E0698


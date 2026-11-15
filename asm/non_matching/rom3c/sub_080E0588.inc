	THUMB_FUNC_START sub_080E0588
sub_080E0588: @ 0x080E0588
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r1, _080E05A8  @ =gRam
	ldr r3, _080E05AC  @ =0x00001AE2
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E05B4
	ldr r3, _080E05B0  @ =0x00000F52
	add r0, r1, r3
	add r0, r2, r0
	mov r1, #11
	strb r1, [r0]
	b _080E05C0
	.byte 0x00
	.byte 0x00
_080E05A8:
	.4byte gRam
_080E05AC:
	.4byte 0x00001AE2
_080E05B0:
	.4byte 0x00000F52
_080E05B4:
	ldr r0, _080E05C4  @ =0x00000F52
	add r1, r1, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080E05C0:
	pop {r0}
	bx r0
_080E05C4:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E0588


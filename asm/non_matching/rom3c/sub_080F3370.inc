	THUMB_FUNC_START sub_080F3370
sub_080F3370: @ 0x080F3370
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r5, r2, #0
	ldr r3, _080F33C8  @ =gRam
	ldr r1, _080F33CC  @ =0x00000F92
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #0
	strb r1, [r0]
	ldr r1, _080F33D0  @ =0x00000FE2
	add r0, r3, r1
	add r4, r2, r0
	ldrb r0, [r4]
	cmp r0, #0
	bne _080F339C
	ldr r0, _080F33D4  @ =0x00000F52
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080F339C:
	ldr r2, _080F33D8  @ =0x00000F62
	add r1, r3, r2
	add r1, r5, r1
	ldr r2, _080F33DC  @ =0x00000996
	add r0, r3, r2
	ldrb r2, [r0]
	mov r0, #2
	and r0, r0, r2
	strb r0, [r1]
	ldrb r1, [r4]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080F33C0
	add r0, r5, #0
	mov r1, #76
	bl sub_080CF0AC
_080F33C0:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F33C8:
	.4byte gRam
_080F33CC:
	.4byte 0x00000F92
_080F33D0:
	.4byte 0x00000FE2
_080F33D4:
	.4byte 0x00000F52
_080F33D8:
	.4byte 0x00000F62
_080F33DC:
	.4byte 0x00000996
	THUMB_FUNC_END sub_080F3370


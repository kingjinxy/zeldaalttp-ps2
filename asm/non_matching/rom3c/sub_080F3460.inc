	THUMB_FUNC_START sub_080F3460
sub_080F3460: @ 0x080F3460
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C2FA8
	ldr r3, _080F349C  @ =gRam
	ldr r2, _080F34A0  @ =0x00001082
	add r1, r3, r2
	add r1, r4, r1
	mov r2, #3
	eor r0, r0, r2
	strb r0, [r1]
	mov r2, #0
	ldr r0, _080F34A4  @ =gPendantCount
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #7
	beq _080F34A8
	mov r1, #179
	lsl r1, r1, #5
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #2
	bls _080F34AA
	mov r2, #1
	b _080F34AA
	.byte 0x00
	.byte 0x00
_080F349C:
	.4byte gRam
_080F34A0:
	.4byte 0x00001082
_080F34A4:
	.4byte gPendantCount
_080F34A8:
	mov r2, #2
_080F34AA:
	ldr r0, _080F34E8  @ =gUnknown_0817948C
	add r0, r2, r0
	ldrb r1, [r0]
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9164
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F34DE
	ldr r2, _080F34EC  @ =gRam
	ldr r1, _080F34F0  @ =0x00000FB2
	add r0, r2, r1
	add r0, r4, r0
	mov r1, sp
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _080F34F4  @ =0x00001082
	add r2, r2, r0
	add r2, r4, r2
	mov r0, sp
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r1, _080F34F8  @ =gHeartsFiller
	mov r0, #160
	strb r0, [r1]
_080F34DE:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F34E8:
	.4byte gUnknown_0817948C
_080F34EC:
	.4byte gRam
_080F34F0:
	.4byte 0x00000FB2
_080F34F4:
	.4byte 0x00001082
_080F34F8:
	.4byte gHeartsFiller
	THUMB_FUNC_END sub_080F3460


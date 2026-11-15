	THUMB_FUNC_START sub_080F037C
sub_080F037C: @ 0x080F037C
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r6, r4, #0
	add r0, r4, #0
	bl sub_080F053C
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F03FC
	add r0, r4, #0
	bl sub_080F048C
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F03E0
	ldr r2, _080F03D0  @ =gRam
	ldr r1, _080F03D4  @ =0x00000FC2
	add r0, r2, r1
	add r5, r4, r0
	ldrb r0, [r5]
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r1, #0
	bne _080F03DC
	ldr r1, _080F03D8  @ =0x00001122
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #4
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C4F98
	lsl r0, r0, #24
	cmp r0, #0
	beq _080F03FC
	mov r0, #8
	strb r0, [r5]
	b _080F03FC
_080F03D0:
	.4byte gRam
_080F03D4:
	.4byte 0x00000FC2
_080F03D8:
	.4byte 0x00001122
_080F03DC:
	cmp r1, #1
	bne _080F03E8
_080F03E0:
	add r0, r4, #0
	bl sub_080F040C
	b _080F03FC
_080F03E8:
	ldr r1, _080F0404  @ =0x00001122
	add r2, r2, r1
	add r2, r6, r2
	ldr r3, _080F0408  @ =gUnknown_08178CCC
	lsr r0, r0, #25
	mov r1, #3
	and r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r2]
_080F03FC:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F0404:
	.4byte 0x00001122
_080F0408:
	.4byte gUnknown_08178CCC
	THUMB_FUNC_END sub_080F037C


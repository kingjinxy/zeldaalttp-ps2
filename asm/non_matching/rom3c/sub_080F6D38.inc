	THUMB_FUNC_START sub_080F6D38
sub_080F6D38: @ 0x080F6D38
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r6, r2, #0
	ldr r5, _080F6D84  @ =gRam
	ldr r1, _080F6D88  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	add r0, r2, #0
	eor r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080F6D6E
	ldr r3, _080F6D8C  @ =0x00000FB2
	add r4, r5, r3
	add r4, r2, r4
	ldrb r1, [r4]
	ldr r3, _080F6D90  @ =0x0000097D
	add r0, r5, r3
	strb r1, [r0]
	add r0, r2, #0
	bl sub_080E210C
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_080F6D6E:
	ldr r1, _080F6D8C  @ =0x00000FB2
	add r0, r5, r1
	add r0, r6, r0
	ldrb r2, [r0]
	mov r1, #63
	and r1, r1, r2
	strb r1, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F6D84:
	.4byte gRam
_080F6D88:
	.4byte 0x00000996
_080F6D8C:
	.4byte 0x00000FB2
_080F6D90:
	.4byte 0x0000097D
	THUMB_FUNC_END sub_080F6D38


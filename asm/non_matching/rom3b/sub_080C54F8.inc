	THUMB_FUNC_START sub_080C54F8
sub_080C54F8: @ 0x080C54F8
	push {r4-r6,lr}
	add r6, r0, #0
	lsl r1, r1, #24
	lsr r5, r1, #24
	add r0, r5, #0
	mov r1, #32
	bl sub_080C4378
	ldr r0, _080C553C  @ =gRam
	ldr r1, _080C5540  @ =0x000016F9
	add r2, r0, r1
	mov r1, #144
	strb r1, [r2]
	ldr r1, _080C5544  @ =0x000016F8
	add r2, r0, r1
	mov r1, #16
	strb r1, [r2]
	ldr r1, _080C5548  @ =0x00000E75
	add r0, r0, r1
	add r0, r5, r0
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	beq _080C554C
	add r0, r6, #0
	add r1, r5, #0
	bl sub_080C555C
	lsl r0, r0, #24
	lsr r0, r0, #24
	b _080C5556
_080C553C:
	.4byte gRam
_080C5540:
	.4byte 0x000016F9
_080C5544:
	.4byte 0x000016F8
_080C5548:
	.4byte 0x00000E75
_080C554C:
	add r0, r5, #0
	bl sub_080C3AC8
	strb r4, [r6]
	mov r0, #1
_080C5556:
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080C54F8


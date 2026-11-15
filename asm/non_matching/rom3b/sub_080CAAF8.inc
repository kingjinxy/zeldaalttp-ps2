	THUMB_FUNC_START sub_080CAAF8
sub_080CAAF8: @ 0x080CAAF8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r5, r0, #0
	lsl r1, r1, #24
	lsr r3, r1, #24
	lsl r2, r2, #16
	lsr r6, r2, #16
	cmp r3, #248
	bls _080CAB16
	add r1, r3, #0
	add r2, r6, #0
	bl sub_080CBD84
	b _080CAB7A
_080CAB16:
	cmp r3, #207
	beq _080CAB2A
	cmp r3, #207
	bgt _080CAB3C
	cmp r3, #82
	beq _080CAB3C
	cmp r3, #87
	bne _080CAB3C
	mov r0, #4
	b _080CAB3E
_080CAB2A:
	mov r0, #5
	b _080CAB3E
_080CAB2E:
	lsr r2, r2, #24
	add r0, r5, #0
	add r1, r3, #0
	add r3, r6, #0
	bl sub_080CAB88
	b _080CAB7A
_080CAB3C:
	mov r0, #13
_080CAB3E:
	lsl r2, r0, #24
	cmp r2, #0
	blt _080CAB7A
	ldr r4, _080CAB84  @ =gUnknown_030031D2
	mov r0, #80
	add r0, r0, r4
	mov r12, r0
	mov r7, #32
	neg r7, r7
	add r7, r7, r4
	mov r8, r7
_080CAB54:
	asr r1, r2, #24
	add r0, r1, r4
	ldrb r0, [r0]
	cmp r0, #0
	beq _080CAB2E
	mov r7, r12
	add r0, r1, r7
	ldrb r0, [r0]
	cmp r0, #65
	bne _080CAB72
	mov r7, r8
	add r0, r1, r7
	ldrb r0, [r0]
	cmp r0, #0
	bne _080CAB2E
_080CAB72:
	sub r0, r1, #1
	lsl r2, r0, #24
	cmp r2, #0
	bge _080CAB54
_080CAB7A:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080CAB84:
	.4byte gUnknown_030031D2
	THUMB_FUNC_END sub_080CAAF8


	THUMB_FUNC_START sub_080CAF64
sub_080CAF64: @ 0x080CAF64
	push {r4-r6,lr}
	mov r4, #1
	mov r1, #15
	ldr r5, _080CAF90  @ =gUnknown_030031D2
	mov r0, #200
	lsl r0, r0, #1
	add r6, r5, r0
_080CAF72:
	lsl r0, r1, #24
	asr r2, r0, #24
	add r1, r2, r5
	ldrb r1, [r1]
	add r3, r0, #0
	cmp r1, #0
	beq _080CAF94
	add r0, r2, r6
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080CAF94
	mov r4, #0
	b _080CAFAC
_080CAF90:
	.4byte gUnknown_030031D2
_080CAF94:
	mov r1, #255
	lsl r1, r1, #24
	add r0, r3, r1
	lsr r1, r0, #24
	cmp r0, #0
	bge _080CAF72
	cmp r4, #0
	beq _080CAFAC
	bl sub_080CBDC8
	lsl r0, r0, #24
	lsr r4, r0, #24
_080CAFAC:
	add r0, r4, #0
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080CAF64


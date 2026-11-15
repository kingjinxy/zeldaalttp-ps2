	THUMB_FUNC_START sub_080AE588
sub_080AE588: @ 0x080AE588
	push {r4,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	mov r0, #5
	strb r0, [r1]
	ldr r4, _080AE5AC  @ =gUnknown_03003045
_080AE594:
	ldrb r2, [r1]
	add r0, r2, r4
	ldrb r0, [r0]
	cmp r3, r0
	beq _080AE5B0
	sub r0, r2, #1
	strb r0, [r1]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080AE594
	mov r0, #0
	b _080AE5B2
_080AE5AC:
	.4byte gUnknown_03003045
_080AE5B0:
	mov r0, #1
_080AE5B2:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080AE588


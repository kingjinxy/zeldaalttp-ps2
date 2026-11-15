	THUMB_FUNC_START sub_080357A4
sub_080357A4: @ 0x080357A4
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	ldr r0, [r4, #12]
	cmp r0, #0
	beq _080357B8
	add r0, r4, #0
	bl sub_0803CC20
_080357B8:
	ldr r0, _080357D0  @ =gUnknown_0201F000
	ldr r0, [r0]
	mov r1, #8
	and r0, r0, r1
	cmp r0, #0
	beq _080357CA
	add r0, r4, #0
	bl DeleteThisEntity
_080357CA:
	pop {r4}
	pop {r0}
	bx r0
_080357D0:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_080357A4


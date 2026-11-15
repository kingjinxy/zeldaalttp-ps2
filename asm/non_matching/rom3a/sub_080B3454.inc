	THUMB_FUNC_START sub_080B3454
sub_080B3454: @ 0x080B3454
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r0, _080B347C  @ =gRam
	mov r1, #179
	lsl r1, r1, #5
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #7
	bne _080B3488
	ldr r1, _080B3480  @ =gCrystalCount
	ldr r0, _080B3484  @ =gUnknown_0816EEB9
	add r0, r2, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	and r0, r0, r1
	cmp r0, #0
	beq _080B3488
	mov r0, #1
	b _080B348A
_080B347C:
	.4byte gRam
_080B3480:
	.4byte gCrystalCount
_080B3484:
	.4byte gUnknown_0816EEB9
_080B3488:
	mov r0, #0
_080B348A:
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080B3454

	.byte 0x00
	.byte 0x00

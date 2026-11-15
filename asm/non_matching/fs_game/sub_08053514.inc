	THUMB_FUNC_START sub_08053514
sub_08053514: @ 0x08053514
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	cmp r0, #0
	beq _0805355A
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08053552
	ldr r0, [r7]
	bl sub_08000620
	ldr r0, [r7]
	bl DeleteThisEntity
	b _0805355A
_08053552:
	ldr r0, [r7]
	mov r1, #5
	bl sub_08053564
_0805355A:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08053514

	.byte 0x00
	.byte 0x00

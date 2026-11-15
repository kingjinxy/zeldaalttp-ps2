	THUMB_FUNC_START sub_0805C758
sub_0805C758: @ 0x0805C758
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, _0805C7B8  @ =gUnknown_03000E20
	ldrh r1, [r0]
	mov r2, #63
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _0805C77A
	ldr r0, [r7]
	bl sub_0805CE18
_0805C77A:
	ldr r0, [r7]
	ldr r1, [r0, #96]
	cmp r1, #0
	beq _0805C7A4
	ldr r0, [r7]
	bl sub_0805CDA4
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _0805C7A4
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
_0805C7A4:
	ldr r0, [r7]
	bl sub_0805CA84
	ldr r0, [r7]
	bl GetNextFrame
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_0805C7B8:
	.4byte gUnknown_03000E20
	THUMB_FUNC_END sub_0805C758


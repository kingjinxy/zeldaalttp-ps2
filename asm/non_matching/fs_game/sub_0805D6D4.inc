	THUMB_FUNC_START sub_0805D6D4
sub_0805D6D4: @ 0x0805D6D4
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
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0805D73C
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	cmp r1, #4
	bls _0805D714
	ldr r0, [r7]
	ldrb r1, [r0, #10]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #10]
_0805D714:
	ldr r0, _0805D744  @ =gUnknown_081412EC
	ldr r1, [r7]
	ldrb r2, [r1, #10]
	add r1, r2, #0
	lsl r2, r1, #1
	add r1, r0, r2
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r1, [r2]
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #80
	ldrh r2, [r3]
	bl sub_08014658
	ldr r0, [r7]
	bl DeleteThisEntity
_0805D73C:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
_0805D744:
	.4byte gUnknown_081412EC
	THUMB_FUNC_END sub_0805D6D4


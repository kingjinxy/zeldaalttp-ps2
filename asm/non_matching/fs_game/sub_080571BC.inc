	THUMB_FUNC_START sub_080571BC
sub_080571BC: @ 0x080571BC
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
	beq _0805720C
	ldr r0, [r7]
	mov r1, #0
	bl sub_08003870
	bl sub_0800099C
	add r1, r0, #0
	ldr r0, [r7]
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	add r1, r2, #1
	add r2, r0, #0
	add r0, r0, #40
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_0805720C:
	ldr r1, [r7]
	ldr r0, [r1, #120]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #124
	ldrh r0, [r0]
	ldrh r1, [r2]
	cmp r0, r1
	beq _08057224
	ldr r0, [r7]
	bl DeleteThisEntity
_08057224:
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080571BC


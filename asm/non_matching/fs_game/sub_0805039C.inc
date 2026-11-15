	THUMB_FUNC_START sub_0805039C
sub_0805039C: @ 0x0805039C
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl sub_08050338
	add r1, r0, #0
	ldr r0, [r7]
	ldr r2, [r7]
	add r3, r2, #0
	add r2, r2, #126
	lsl r1, r1, #24
	lsr r3, r1, #24
	add r1, r3, #0
	ldrh r2, [r2]
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #126
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	mov r2, #4
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _080503F8
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #126
	ldrh r2, [r1]
	add r0, r2, #0
	lsl r2, r0, #24
	lsr r1, r2, #24
	add r0, r1, #0
	b _0805043A
_080503F8:
	ldr r0, [r7]
	bl 0x0800935C
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #91
	bne _08050428
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #126
	ldrh r1, [r2]
	mov r2, #2
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #126
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
_08050428:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #126
	ldrh r2, [r1]
	add r0, r2, #0
	lsl r2, r0, #24
	lsr r1, r2, #24
	add r0, r1, #0
	b _0805043A
_0805043A:
	add sp, sp, #4
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0805039C

	.byte 0x00
	.byte 0x00

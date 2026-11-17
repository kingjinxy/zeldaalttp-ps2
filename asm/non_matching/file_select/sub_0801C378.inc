	THUMB_FUNC_START sub_0801C378
sub_0801C378: @ 0x0801C378
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _0801C3D0
	ldr r1, [r4, #100]
	cmp r1, #0
	beq _0801C3B8
	mov r0, #8
	strb r0, [r4, #20]
	mov r0, #128
	lsl r0, r0, #2
	str r0, [r4, #12]
	add r1, r4, #0
	add r1, r1, #70
	mov r0, #20
	strb r0, [r1]
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r1, r1, #8
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl sub_08003870
	b _0801C3D0
_0801C3B8:
	mov r0, #6
	strb r0, [r4, #20]
	str r1, [r4, #88]
	add r0, r4, #0
	add r0, r0, #42
	ldrb r1, [r0]
	add r1, r1, #12
	lsl r1, r1, #24
	lsr r1, r1, #24
	add r0, r4, #0
	bl sub_08003870
_0801C3D0:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801C378

	.byte 0x00
	.byte 0x00

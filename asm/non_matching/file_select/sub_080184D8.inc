	THUMB_FUNC_START sub_080184D8
sub_080184D8: @ 0x080184D8
	push {r4,r5,lr}
	add r5, r0, #0
	add r0, r0, #43
	ldrb r0, [r0]
	bl sub_08043EA4
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #255
	beq _0801850C
	add r0, r5, #0
	add r0, r0, #42
	ldrb r1, [r0]
	cmp r4, r1
	beq _0801850C
	strb r4, [r0]
	add r0, r5, #0
	add r1, r4, #0
	bl 0x08003870
	ldr r0, [r5, #84]
	add r1, r4, #3
	lsl r1, r1, #24
	lsr r1, r1, #24
	bl 0x08003870
_0801850C:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080184D8

	.byte 0x00
	.byte 0x00

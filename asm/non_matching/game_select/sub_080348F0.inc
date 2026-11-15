	THUMB_FUNC_START sub_080348F0
sub_080348F0: @ 0x080348F0
	push {lr}
	add r2, r0, #0
	ldr r0, [r2, #96]
	ldrb r1, [r0]
	cmp r1, #7
	bhi _0803490A
	add r0, r2, #0
	add r0, r0, #42
	ldrb r0, [r0]
	lsr r0, r0, #1
	add r0, r1, r0
	lsl r0, r0, #24
	lsr r1, r0, #24
_0803490A:
	add r0, r2, #0
	add r0, r0, #35
	ldrb r0, [r0]
	cmp r0, r1
	beq _0803491A
	add r0, r2, #0
	bl sub_08003870
_0803491A:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080348F0

	.byte 0x00
	.byte 0x00

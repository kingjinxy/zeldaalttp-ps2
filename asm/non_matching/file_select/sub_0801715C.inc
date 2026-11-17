	THUMB_FUNC_START sub_0801715C
sub_0801715C: @ 0x0801715C
	push {r4,lr}
	add r4, r0, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r2, #128
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080171A0
	mov r1, #0
	mov r0, #1
	strb r0, [r4, #20]
	strb r0, [r4, #23]
	add r0, r4, #0
	add r0, r0, #42
	strb r1, [r0]
	str r2, [r4, #12]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #239
	and r0, r0, r1
	strb r0, [r2]
	add r1, r4, #0
	add r1, r1, #63
	mov r0, #9
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #0
	bl sub_08003870
_080171A0:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0801715C

	.byte 0x00
	.byte 0x00

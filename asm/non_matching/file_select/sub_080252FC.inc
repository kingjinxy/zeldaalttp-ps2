	THUMB_FUNC_START sub_080252FC
sub_080252FC: @ 0x080252FC
	push {r4,lr}
	add r4, r0, #0
	bl 0x08003828
	add r2, r4, #0
	add r2, r2, #41
	ldrb r1, [r2]
	mov r3, #1
	add r0, r3, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08025328
	mov r0, #0
	strb r0, [r2]
	ldrb r2, [r4, #30]
	lsl r1, r2, #28
	lsr r1, r1, #28
	eor r1, r1, r3
	sub r0, r0, #16
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #30]
_08025328:
	add r0, r4, #0
	bl 0x08009FDC
	add r0, r4, #0
	bl 0x08008E50
	ldrh r0, [r4, #44]
	cmp r0, #0
	beq _08025340
	add r0, r4, #0
	bl DeleteThisEntity
_08025340:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080252FC

	.byte 0x00
	.byte 0x00

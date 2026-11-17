	THUMB_FUNC_START sub_08024EFC
sub_08024EFC: @ 0x08024EFC
	push {r4,r5,lr}
	add r5, r0, #0
	mov r0, #14
	bl sub_08012494
	add r4, r0, #0
	cmp r4, #0
	beq _08024F40
	add r2, r5, #0
	add r2, r2, #42
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r1, r4, #0
	add r1, r1, #43
	strb r0, [r1]
	ldr r3, _08024F48  @ =gUnknown_084276A6
	ldrb r0, [r2]
	lsl r0, r0, #1
	add r1, r0, r3
	mov r2, #0
	ldrsb r2, [r1, r2]
	lsl r2, r2, #16
	add r0, r0, #1
	add r0, r0, r3
	mov r3, #0
	ldrsb r3, [r0, r3]
	lsl r3, r3, #16
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0803D4A4
	mov r0, #165
	bl sub_08003DFC
_08024F40:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08024F48:
	.4byte gUnknown_084276A6
	THUMB_FUNC_END sub_08024EFC


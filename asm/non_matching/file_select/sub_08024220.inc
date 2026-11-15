	THUMB_FUNC_START sub_08024220
sub_08024220: @ 0x08024220
	push {r4,lr}
	add r4, r0, #0
	bl sub_08024AE0
	lsl r0, r0, #24
	cmp r0, #0
	beq _08024240
	add r0, r4, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	bne _08024240
	add r0, r4, #0
	bl sub_08024EA0
	b _0802426C
_08024240:
	ldrb r0, [r4, #23]
	cmp r0, #0
	bne _0802425C
	add r0, r4, #0
	add r0, r0, #61
	ldrb r0, [r0]
	cmp r0, #0
	bne _08024260
	mov r0, #6
	strb r0, [r4, #20]
	add r0, r4, #0
	bl sub_08024D10
	b _08024260
_0802425C:
	sub r0, r0, #1
	strb r0, [r4, #23]
_08024260:
	add r0, r4, #0
	bl sub_08024F98
	ldr r0, [r4, #112]
	bl 0x08003828
_0802426C:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08024220

	.byte 0x00
	.byte 0x00

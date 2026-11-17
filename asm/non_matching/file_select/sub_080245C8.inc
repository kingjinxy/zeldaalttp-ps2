	THUMB_FUNC_START sub_080245C8
sub_080245C8: @ 0x080245C8
	push {r4,lr}
	add r4, r0, #0
	ldr r0, [r4, #112]
	bl GetNextFrame
	add r0, r4, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080245F4
	mov r0, #17
	strb r0, [r4, #20]
	mov r0, #240
	strb r0, [r4, #23]
	add r0, r4, #0
	bl sub_08024CD0
_080245F4:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080245C8

	.byte 0x00
	.byte 0x00

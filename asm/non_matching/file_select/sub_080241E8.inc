	THUMB_FUNC_START sub_080241E8
sub_080241E8: @ 0x080241E8
	push {r4,lr}
	add r4, r0, #0
	bl sub_08024F98
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
	beq _08024218
	mov r0, #5
	strb r0, [r4, #20]
	mov r0, #90
	strb r0, [r4, #23]
	add r0, r4, #0
	bl sub_08024CD0
_08024218:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080241E8

	.byte 0x00
	.byte 0x00

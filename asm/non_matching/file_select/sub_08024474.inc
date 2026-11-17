	THUMB_FUNC_START sub_08024474
sub_08024474: @ 0x08024474
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
	beq _080244A0
	mov r0, #12
	strb r0, [r4, #20]
	mov r0, #240
	strb r0, [r4, #23]
	add r0, r4, #0
	bl sub_08024CD0
_080244A0:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08024474

	.byte 0x00
	.byte 0x00

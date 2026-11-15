	THUMB_FUNC_START sub_080244F0
sub_080244F0: @ 0x080244F0
	push {r4,lr}
	add r4, r0, #0
	ldr r0, [r4, #112]
	bl 0x08003828
	add r0, r4, #0
	bl 0x08003828
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08024524
	mov r0, #8
	strb r0, [r4, #20]
	mov r0, #30
	strb r0, [r4, #23]
	add r1, r4, #0
	add r1, r1, #124
	mov r0, #16
	strh r0, [r1]
	add r0, r4, #0
	bl sub_08024D48
_08024524:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080244F0

	.byte 0x00
	.byte 0x00

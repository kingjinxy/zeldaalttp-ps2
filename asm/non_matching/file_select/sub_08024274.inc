	THUMB_FUNC_START sub_08024274
sub_08024274: @ 0x08024274
	push {r4,lr}
	add r4, r0, #0
	bl sub_08024F98
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
	beq _080242C0
	mov r0, #3
	strb r0, [r4, #20]
	mov r0, #60
	strb r0, [r4, #23]
	add r0, r4, #0
	bl sub_08024D48
	add r0, r4, #0
	add r0, r0, #43
	ldrb r1, [r0]
	add r1, r1, #2
	asr r1, r1, #2
	mov r0, #7
	and r1, r1, r0
	add r0, r4, #0
	add r0, r0, #42
	strb r1, [r0]
	add r1, r1, #20
	add r0, r4, #0
	bl 0x08003870
_080242C0:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08024274

	.byte 0x00
	.byte 0x00

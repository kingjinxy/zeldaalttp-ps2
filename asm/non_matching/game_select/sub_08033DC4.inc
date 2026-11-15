	THUMB_FUNC_START sub_08033DC4
sub_08033DC4: @ 0x08033DC4
	push {r4,lr}
	add r4, r0, #0
	bl sub_08034238
	mov r0, #120
	strb r0, [r4, #23]
	ldrb r2, [r4, #28]
	mov r1, #4
	neg r1, r1
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #1
	orr r0, r0, r2
	strb r0, [r4, #28]
	add r4, r4, #94
	ldrb r0, [r4]
	and r1, r1, r0
	orr r1, r1, r2
	strb r1, [r4]
	ldr r0, _08033DF8  @ =0x00000212
	bl play_sound
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08033DF8:
	.4byte 0x00000212
	THUMB_FUNC_END sub_08033DC4


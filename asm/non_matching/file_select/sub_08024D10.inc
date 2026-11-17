	THUMB_FUNC_START sub_08024D10
sub_08024D10: @ 0x08024D10
	push {r4,lr}
	add r4, r0, #0
	add r1, r4, #0
	add r1, r1, #63
	mov r0, #64
	strb r0, [r1]
	ldr r0, _08024D44  @ =gUnknown_0813C164
	str r0, [r4, #72]
	ldr r1, [r4, #112]
	add r1, r1, #60
	ldrb r2, [r1]
	mov r0, #127
	and r0, r0, r2
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #6
	bl sub_08003870
	ldr r0, [r4, #112]
	mov r1, #7
	bl sub_08003870
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08024D44:
	.4byte gUnknown_0813C164
	THUMB_FUNC_END sub_08024D10


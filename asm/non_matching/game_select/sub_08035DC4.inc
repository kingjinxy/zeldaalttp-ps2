	THUMB_FUNC_START sub_08035DC4
sub_08035DC4: @ 0x08035DC4
	push {lr}
	add r1, r0, #0
	ldrb r0, [r1, #23]
	sub r0, r0, #1
	strb r0, [r1, #23]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #5
	bne _08035DF0
	ldr r0, _08035DE8  @ =gUnknown_08143FFC
	mov r1, #1
	bl sub_0801484C
	ldr r1, _08035DEC  @ =gUnknown_0200B310
	mov r0, #0
	str r0, [r1]
	b _08035E04
	.byte 0x00
	.byte 0x00
_08035DE8:
	.4byte gUnknown_08143FFC
_08035DEC:
	.4byte gUnknown_0200B310
_08035DF0:
	cmp r0, #0
	bne _08035E04
	mov r0, #14
	strb r0, [r1, #20]
	mov r0, #124
	strb r0, [r1, #23]
	mov r0, #2
	mov r1, #4
	bl sub_0800C0B0
_08035E04:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08035DC4


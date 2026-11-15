	THUMB_FUNC_START sub_08034030
sub_08034030: @ 0x08034030
	push {lr}
	add r3, r0, #0
	ldrb r0, [r3, #23]
	sub r0, r0, #1
	strb r0, [r3, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08034050
	ldr r0, _08034054  @ =gUnknown_0201F000
	ldr r1, [r0]
	mov r2, #8
	orr r1, r1, r2
	str r1, [r0]
	add r0, r3, #0
	bl DeleteThisEntity
_08034050:
	pop {r0}
	bx r0
_08034054:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08034030


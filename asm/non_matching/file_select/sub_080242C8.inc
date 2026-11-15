	THUMB_FUNC_START sub_080242C8
sub_080242C8: @ 0x080242C8
	push {lr}
	add r3, r0, #0
	ldrb r0, [r3, #23]
	sub r0, r0, #1
	strb r0, [r3, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _080242FA
	mov r0, #8
	strb r0, [r3, #20]
	ldr r2, [r3, #84]
	add r2, r2, #125
	ldr r1, _08024300  @ =gUnknown_08137B10
	add r0, r3, #0
	add r0, r0, #126
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldrb r1, [r2]
	orr r0, r0, r1
	strb r0, [r2]
	mov r0, #158
	bl 0x08003DFC
_080242FA:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08024300:
	.4byte gUnknown_08137B10
	THUMB_FUNC_END sub_080242C8


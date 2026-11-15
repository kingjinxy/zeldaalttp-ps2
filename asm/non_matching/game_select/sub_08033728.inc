	THUMB_FUNC_START sub_08033728
sub_08033728: @ 0x08033728
	push {lr}
	mov r1, #1
	strb r1, [r0, #20]
	ldrb r2, [r0, #28]
	sub r1, r1, #5
	and r1, r1, r2
	mov r2, #2
	orr r1, r1, r2
	strb r1, [r0, #28]
	ldr r2, _08033758  @ =gUnknown_0813D8BC
	ldrb r1, [r0, #11]
	add r1, r1, r2
	ldrb r1, [r1]
	strh r1, [r0, #50]
	mov r1, #40
	strh r1, [r0, #54]
	ldr r1, _0803375C  @ =0x0000FFC0
	strh r1, [r0, #58]
	ldrb r1, [r0, #11]
	bl sub_08003870
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08033758:
	.4byte gUnknown_0813D8BC
_0803375C:
	.4byte 0x0000FFC0
	THUMB_FUNC_END sub_08033728


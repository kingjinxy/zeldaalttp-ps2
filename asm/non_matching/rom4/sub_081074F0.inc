	THUMB_FUNC_START sub_081074F0
sub_081074F0: @ 0x081074F0
	push {lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, _0810750C  @ =gRam
	ldr r2, _08107510  @ =0x00001062
	add r0, r0, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08107514
	add r0, r1, #0
	bl sub_08106528
	b _0810751A
_0810750C:
	.4byte gRam
_08107510:
	.4byte 0x00001062
_08107514:
	add r0, r1, #0
	bl sub_08107368
_0810751A:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081074F0

	.byte 0x00
	.byte 0x00

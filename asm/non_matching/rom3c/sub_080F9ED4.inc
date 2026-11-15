	THUMB_FUNC_START sub_080F9ED4
sub_080F9ED4: @ 0x080F9ED4
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080F9F14
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F9F02
	ldr r2, _080F9F08  @ =gRam
	ldr r1, _080F9F0C  @ =0x00000FC2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _080F9F02
	ldr r3, _080F9F10  @ =0x00000FA2
	add r0, r2, r3
	add r0, r4, r0
	strb r1, [r0]
_080F9F02:
	pop {r4}
	pop {r0}
	bx r0
_080F9F08:
	.4byte gRam
_080F9F0C:
	.4byte 0x00000FC2
_080F9F10:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080F9ED4


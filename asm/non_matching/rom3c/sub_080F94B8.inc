	THUMB_FUNC_START sub_080F94B8
sub_080F94B8: @ 0x080F94B8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080F9560
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	bne _080F94FE
	add r0, r4, #0
	bl sub_080C5080
	add r0, r4, #0
	bl Sprite3_Move
	ldr r1, _080F9504  @ =gRam
	ldr r2, _080F9508  @ =0x00000F22
	add r0, r1, r2
	add r0, r4, r0
	strb r5, [r0]
	ldr r2, _080F950C  @ =gUnknown_0817A298
	ldr r0, _080F9510  @ =0x00000F52
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080F94FE:
	pop {r4,r5}
	pop {r0}
	bx r0
_080F9504:
	.4byte gRam
_080F9508:
	.4byte 0x00000F22
_080F950C:
	.4byte gUnknown_0817A298
_080F9510:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F94B8


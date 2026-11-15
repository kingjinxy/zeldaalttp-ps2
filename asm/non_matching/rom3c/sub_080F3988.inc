	THUMB_FUNC_START sub_080F3988
sub_080F3988: @ 0x080F3988
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r4, r1, #0
	ldr r5, _080F39E0  @ =gRam
	ldr r2, _080F39E4  @ =0x00000F62
	add r0, r5, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080F39A4
	add r0, r1, #0
	bl sub_080F3B5C
_080F39A4:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F39D8
	add r0, r4, #0
	bl sub_080C5080
	add r0, r4, #0
	bl sub_080C90F4
	add r0, r4, #0
	bl Sprite3_Move
	ldr r1, _080F39E8  @ =gUnknown_08179464
	ldr r2, _080F39EC  @ =0x00001052
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080F39D8:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F39E0:
	.4byte gRam
_080F39E4:
	.4byte 0x00000F62
_080F39E8:
	.4byte gUnknown_08179464
_080F39EC:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080F3988


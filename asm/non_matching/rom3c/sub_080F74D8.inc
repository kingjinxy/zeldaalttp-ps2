	THUMB_FUNC_START sub_080F74D8
sub_080F74D8: @ 0x080F74D8
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080F6F14
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F7514
	add r0, r4, #0
	bl sub_080C79F8
	add r0, r4, #0
	bl sub_080C4F98
	ldr r1, _080F751C  @ =gUnknown_08179B78
	ldr r0, _080F7520  @ =gRam
	ldr r2, _080F7524  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080F7514:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F751C:
	.4byte gUnknown_08179B78
_080F7520:
	.4byte gRam
_080F7524:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F74D8


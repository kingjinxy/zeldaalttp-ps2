	THUMB_FUNC_START sub_080F3794
sub_080F3794: @ 0x080F3794
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080F327C
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F37C4
	ldr r1, _080F37CC  @ =gUnknown_081792A0
	ldr r0, _080F37D0  @ =gRam
	ldr r2, _080F37D4  @ =0x00001052
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080F37C4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F37CC:
	.4byte gUnknown_081792A0
_080F37D0:
	.4byte gRam
_080F37D4:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080F3794


	THUMB_FUNC_START sub_080F5E70
sub_080F5E70: @ 0x080F5E70
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080F5F18
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	bne _080F5EAA
	ldr r1, _080F5EB0  @ =gRam
	ldr r3, _080F5EB4  @ =0x00001132
	add r0, r1, r3
	add r0, r4, r0
	strb r2, [r0]
	ldr r2, _080F5EB8  @ =gUnknown_08179894
	ldr r0, _080F5EBC  @ =0x00000F52
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	lsl r0, r0, #2
	add r0, r0, r2
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080F5EAA:
	pop {r4}
	pop {r0}
	bx r0
_080F5EB0:
	.4byte gRam
_080F5EB4:
	.4byte 0x00001132
_080F5EB8:
	.4byte gUnknown_08179894
_080F5EBC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F5E70


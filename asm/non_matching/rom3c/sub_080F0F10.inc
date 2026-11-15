	THUMB_FUNC_START sub_080F0F10
sub_080F0F10: @ 0x080F0F10
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080F1068
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F0F46
	add r0, r4, #0
	bl sub_080C5080
	ldr r1, _080F0F4C  @ =gUnknown_08178E1C
	ldr r0, _080F0F50  @ =gRam
	ldr r2, _080F0F54  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080F0F46:
	pop {r4}
	pop {r0}
	bx r0
_080F0F4C:
	.4byte gUnknown_08178E1C
_080F0F50:
	.4byte gRam
_080F0F54:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F0F10


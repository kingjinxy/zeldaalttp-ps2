	THUMB_FUNC_START sub_080F1A24
sub_080F1A24: @ 0x080F1A24
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080F1AEC
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F1A5A
	add r0, r4, #0
	bl sub_080C5080
	ldr r1, _080F1A60  @ =gUnknown_08178F08
	ldr r0, _080F1A64  @ =gRam
	ldr r2, _080F1A68  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080F1A5A:
	pop {r4}
	pop {r0}
	bx r0
_080F1A60:
	.4byte gUnknown_08178F08
_080F1A64:
	.4byte gRam
_080F1A68:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F1A24


	THUMB_FUNC_START sub_081064BC
sub_081064BC: @ 0x081064BC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _081064E6
	ldr r1, _081064EC  @ =gUnknown_0817BEF4
	ldr r0, _081064F0  @ =gRam
	ldr r2, _081064F4  @ =0x00000F92
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_081064E6:
	pop {r4}
	pop {r0}
	bx r0
_081064EC:
	.4byte gUnknown_0817BEF4
_081064F0:
	.4byte gRam
_081064F4:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_081064BC


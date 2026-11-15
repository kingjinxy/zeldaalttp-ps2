	THUMB_FUNC_START sub_081015F4
sub_081015F4: @ 0x081015F4
	push {lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r0, _08101620  @ =gRam
	ldr r1, _08101624  @ =0x00000F62
	add r0, r0, r1
	add r3, r2, r0
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _0810162C
	ldr r0, _08101628  @ =gUnknown_0817ADD8
	ldrb r1, [r3]
	lsl r1, r1, #2
	add r1, r1, r0
	ldr r1, [r1]
	add r0, r2, #0
	bl _call_via_r1
	b _08101632
	.byte 0x00
	.byte 0x00
_08101620:
	.4byte gRam
_08101624:
	.4byte 0x00000F62
_08101628:
	.4byte gUnknown_0817ADD8
_0810162C:
	add r0, r2, #0
	bl sub_081003B8
_08101632:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081015F4

	.byte 0x00
	.byte 0x00

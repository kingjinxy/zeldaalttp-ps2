	THUMB_FUNC_START sub_081089DC
sub_081089DC: @ 0x081089DC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080ED830
	lsl r0, r0, #24
	cmp r0, #0
	bne _08108A0C
	ldr r1, _08108A14  @ =gUnknown_0817BFAC
	ldr r0, _08108A18  @ =gRam
	ldr r2, _08108A1C  @ =0x00000FF2
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	sub r0, r0, #203
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
	bl sub_080ED97C
_08108A0C:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08108A14:
	.4byte gUnknown_0817BFAC
_08108A18:
	.4byte gRam
_08108A1C:
	.4byte 0x00000FF2
	THUMB_FUNC_END sub_081089DC


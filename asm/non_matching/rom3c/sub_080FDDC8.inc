	THUMB_FUNC_START sub_080FDDC8
sub_080FDDC8: @ 0x080FDDC8
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080FDE1C
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080FDE0A
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080FDE0A
	add r0, r4, #0
	bl sub_080C5044
	ldr r1, _080FDE10  @ =gUnknown_0817AA00
	ldr r0, _080FDE14  @ =gRam
	ldr r2, _080FDE18  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080FDE0A:
	pop {r4}
	pop {r0}
	bx r0
_080FDE10:
	.4byte gUnknown_0817AA00
_080FDE14:
	.4byte gRam
_080FDE18:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FDDC8


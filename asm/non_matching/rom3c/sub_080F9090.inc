	THUMB_FUNC_START sub_080F9090
sub_080F9090: @ 0x080F9090
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080F9114
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F90D2
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F90D2
	add r0, r4, #0
	bl sub_080C5044
	ldr r1, _080F90D8  @ =gUnknown_0817A184
	ldr r0, _080F90DC  @ =gRam
	ldr r2, _080F90E0  @ =0x00000F52
	add r0, r0, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080F90D2:
	pop {r4}
	pop {r0}
	bx r0
_080F90D8:
	.4byte gUnknown_0817A184
_080F90DC:
	.4byte gRam
_080F90E0:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F9090


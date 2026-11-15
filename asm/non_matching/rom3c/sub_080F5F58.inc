	THUMB_FUNC_START sub_080F5F58
sub_080F5F58: @ 0x080F5F58
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080F60E0
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F5FB6
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	cmp r0, #0
	bne _080F5FB6
	add r0, r4, #0
	bl sub_080C5044
	ldr r2, _080F5FBC  @ =gRam
	ldr r0, _080F5FC0  @ =0x00001052
	add r1, r2, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080F5FC4  @ =0x00000F92
	add r3, r2, r1
	add r3, r4, r3
	lsl r0, r0, #24
	lsr r0, r0, #27
	mov r1, #3
	and r0, r0, r1
	strb r0, [r3]
	ldr r1, _080F5FC8  @ =gUnknown_08179940
	ldr r0, _080F5FCC  @ =0x00000F52
	add r2, r2, r0
	add r2, r4, r2
	ldrb r0, [r2]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_080F5FB6:
	pop {r4}
	pop {r0}
	bx r0
_080F5FBC:
	.4byte gRam
_080F5FC0:
	.4byte 0x00001052
_080F5FC4:
	.4byte 0x00000F92
_080F5FC8:
	.4byte gUnknown_08179940
_080F5FCC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F5F58


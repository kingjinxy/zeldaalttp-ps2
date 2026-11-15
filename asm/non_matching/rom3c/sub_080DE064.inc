	THUMB_FUNC_START sub_080DE064
sub_080DE064: @ 0x080DE064
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl sub_080DE380
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080DE0BC
	add r0, r4, #0
	bl sub_080C5080
	ldr r3, _080DE0C4  @ =gRam
	ldr r1, _080DE0C8  @ =0x00000FC2
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080DE0A6
	ldr r0, _080DE0CC  @ =0x00000F92
	add r2, r3, r0
	add r2, r4, r2
	ldr r1, _080DE0D0  @ =0x00000996
	add r0, r3, r1
	ldrb r0, [r0]
	lsr r0, r0, #4
	mov r1, #1
	and r0, r0, r1
	strb r0, [r2]
_080DE0A6:
	ldr r1, _080DE0D4  @ =gUnknown_08176378
	ldr r2, _080DE0D8  @ =0x00001052
	add r0, r3, r2
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r5, #0
	bl _call_via_r1
_080DE0BC:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DE0C4:
	.4byte gRam
_080DE0C8:
	.4byte 0x00000FC2
_080DE0CC:
	.4byte 0x00000F92
_080DE0D0:
	.4byte 0x00000996
_080DE0D4:
	.4byte gUnknown_08176378
_080DE0D8:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080DE064


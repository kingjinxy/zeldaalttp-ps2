	THUMB_FUNC_START sub_080DA5CC
sub_080DA5CC: @ 0x080DA5CC
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r6, _080DA5FC  @ =gRam
	ldr r1, _080DA600  @ =0x00000FC2
	add r0, r6, r1
	add r5, r4, r0
	ldrb r0, [r5]
	cmp r0, #0
	bne _080DA5F6
	ldr r0, _080DA604  @ =0x00000141
	bl sub_080C95C0
	ldr r0, _080DA608  @ =0x00000F52
	add r1, r6, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	mov r0, #2
	strb r0, [r5]
_080DA5F6:
	pop {r4-r6}
	pop {r0}
	bx r0
_080DA5FC:
	.4byte gRam
_080DA600:
	.4byte 0x00000FC2
_080DA604:
	.4byte 0x00000141
_080DA608:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DA5CC


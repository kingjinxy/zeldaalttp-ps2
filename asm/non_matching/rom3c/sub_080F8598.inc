	THUMB_FUNC_START sub_080F8598
sub_080F8598: @ 0x080F8598
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r4, r1, #0
	ldr r5, _080F85F0  @ =gRam
	ldr r2, _080F85F4  @ =0x00000FC2
	add r0, r5, r2
	add r2, r1, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _080F85BE
	ldr r3, _080F85F8  @ =0x00000F52
	add r0, r5, r3
	add r0, r1, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #32
	strb r0, [r2]
_080F85BE:
	ldr r0, _080F85FC  @ =0x00000F22
	add r1, r5, r0
	add r1, r4, r1
	ldr r3, _080F8600  @ =gUnknown_08179FCC
	add r0, r0, #144
	add r2, r5, r0
	add r2, r4, r2
	ldrb r0, [r2]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r3, _080F8604  @ =0x00000F12
	add r1, r5, r3
	add r1, r4, r1
	ldr r3, _080F8608  @ =gUnknown_08179FD0
	ldrb r0, [r2]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r4, #0
	bl Sprite3_Move
	pop {r4,r5}
	pop {r0}
	bx r0
_080F85F0:
	.4byte gRam
_080F85F4:
	.4byte 0x00000FC2
_080F85F8:
	.4byte 0x00000F52
_080F85FC:
	.4byte 0x00000F22
_080F8600:
	.4byte gUnknown_08179FCC
_080F8604:
	.4byte 0x00000F12
_080F8608:
	.4byte gUnknown_08179FD0
	THUMB_FUNC_END sub_080F8598


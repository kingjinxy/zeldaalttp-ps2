	THUMB_FUNC_START sub_080F4300
sub_080F4300: @ 0x080F4300
	push {r4-r6,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _080F4344  @ =gRam
	ldr r1, _080F4348  @ =0x00001770
	add r0, r5, r1
	mov r6, #0
	strb r6, [r0]
	bl sub_08075AB4
	ldr r0, _080F434C  @ =0x00001663
	add r1, r5, r0
	mov r0, #1
	strb r0, [r1]
	bl sub_08070064
	add r0, r4, #0
	bl sub_081146A4
	ldr r1, _080F4350  @ =0x00000FA2
	add r0, r5, r1
	add r4, r4, r0
	strb r6, [r4]
	mov r0, #2
	bl sub_080BE9A0
	ldr r0, _080F4354  @ =0x00000A3C
	add r5, r5, r0
	mov r0, #9
	strh r0, [r5]
	pop {r4-r6}
	pop {r0}
	bx r0
_080F4344:
	.4byte gRam
_080F4348:
	.4byte 0x00001770
_080F434C:
	.4byte 0x00001663
_080F4350:
	.4byte 0x00000FA2
_080F4354:
	.4byte 0x00000A3C
	THUMB_FUNC_END sub_080F4300


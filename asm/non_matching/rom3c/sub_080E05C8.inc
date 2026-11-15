	THUMB_FUNC_START sub_080E05C8
sub_080E05C8: @ 0x080E05C8
	push {r4,r5,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _080E0600  @ =gRam
	ldr r0, _080E0604  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl sub_08131E24
	bl sub_08133600
	ldr r0, _080E0608  @ =0x00001776
	add r1, r5, r0
	mov r0, #2
	strb r0, [r1]
	ldr r0, _080E060C  @ =0x00000F92
	add r5, r5, r0
	add r4, r4, r5
	ldrb r0, [r4]
	bl sub_080A1588
	pop {r4,r5}
	pop {r0}
	bx r0
_080E0600:
	.4byte gRam
_080E0604:
	.4byte 0x00000F52
_080E0608:
	.4byte 0x00001776
_080E060C:
	.4byte 0x00000F92
	THUMB_FUNC_END sub_080E05C8


	THUMB_FUNC_START sub_080F4130
sub_080F4130: @ 0x080F4130
	push {r4-r6,lr}
	add r1, r0, #0
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r0, #118
	bl sub_080CA538
	ldr r3, _080F41B8  @ =gRam
	mov r5, #3
	mov r4, #0
	ldr r2, _080F41BC  @ =0x00001082
	add r1, r3, r2
	add r1, r0, r1
	strb r4, [r1]
	ldr r6, _080F41C0  @ =0x00000FB2
	add r1, r3, r6
	add r1, r0, r1
	strb r4, [r1]
	ldr r2, _080F41C4  @ =0x00000ED2
	add r1, r3, r2
	add r1, r0, r1
	mov r6, #182
	lsl r6, r6, #5
	add r2, r3, r6
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _080F41C8  @ =0x00000EF2
	add r1, r3, r2
	add r1, r0, r1
	add r6, r6, #1
	add r2, r3, r6
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _080F41CC  @ =0x00000EE2
	add r1, r3, r2
	add r1, r0, r1
	add r6, r6, #3
	add r2, r3, r6
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _080F41D0  @ =0x00000F02
	add r1, r3, r2
	add r1, r0, r1
	add r6, r6, #1
	add r2, r3, r6
	ldrb r2, [r2]
	strb r2, [r1]
	ldr r2, _080F41D4  @ =0x00001052
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #1
	strb r2, [r1]
	sub r6, r6, #98
	add r1, r3, r6
	strb r4, [r1]
	ldr r1, _080F41D8  @ =0x00001172
	add r2, r3, r1
	add r2, r0, r2
	ldrb r1, [r2]
	add r1, r1, #1
	strb r1, [r2]
	ldr r2, _080F41DC  @ =0x00001132
	add r3, r3, r2
	add r0, r0, r3
	strb r5, [r0]
	pop {r4-r6}
	pop {r0}
	bx r0
_080F41B8:
	.4byte gRam
_080F41BC:
	.4byte 0x00001082
_080F41C0:
	.4byte 0x00000FB2
_080F41C4:
	.4byte 0x00000ED2
_080F41C8:
	.4byte 0x00000EF2
_080F41CC:
	.4byte 0x00000EE2
_080F41D0:
	.4byte 0x00000F02
_080F41D4:
	.4byte 0x00001052
_080F41D8:
	.4byte 0x00001172
_080F41DC:
	.4byte 0x00001132
	THUMB_FUNC_END sub_080F4130


	THUMB_FUNC_START sub_081036F0
sub_081036F0: @ 0x081036F0
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080ED830
	lsl r0, r0, #24
	cmp r0, #0
	bne _08103710
	ldr r1, _08103718  @ =gRam
	ldr r0, _0810371C  @ =0x00001172
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_08103710:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08103718:
	.4byte gRam
_0810371C:
	.4byte 0x00001172
	THUMB_FUNC_END sub_081036F0


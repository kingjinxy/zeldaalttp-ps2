	THUMB_FUNC_START sub_080F6BF8
sub_080F6BF8: @ 0x080F6BF8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r4, r2, #0
	ldr r1, _080F6C30  @ =gRam
	ldr r3, _080F6C34  @ =0x00000FC2
	add r0, r1, r3
	add r0, r2, r0
	ldrb r3, [r0]
	cmp r3, #0
	bne _080F6C16
	ldr r5, _080F6C38  @ =0x00000F52
	add r0, r1, r5
	add r0, r2, r0
	strb r3, [r0]
_080F6C16:
	ldr r0, _080F6C3C  @ =0x00001052
	add r1, r1, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #2
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080F6C40
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F6C30:
	.4byte gRam
_080F6C34:
	.4byte 0x00000FC2
_080F6C38:
	.4byte 0x00000F52
_080F6C3C:
	.4byte 0x00001052
	THUMB_FUNC_END sub_080F6BF8


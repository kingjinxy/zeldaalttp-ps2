	THUMB_FUNC_START sub_080E41B0
sub_080E41B0: @ 0x080E41B0
	push {r4,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r3, _080E41DC  @ =gRam
	ldr r2, _080E41E0  @ =0x00000FC2
	add r0, r3, r2
	add r2, r1, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _080E41D4
	ldr r4, _080E41E4  @ =0x00000F52
	add r0, r3, r4
	add r0, r1, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #64
	strb r0, [r2]
_080E41D4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E41DC:
	.4byte gRam
_080E41E0:
	.4byte 0x00000FC2
_080E41E4:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E41B0


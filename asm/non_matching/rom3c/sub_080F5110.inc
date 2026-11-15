	THUMB_FUNC_START sub_080F5110
sub_080F5110: @ 0x080F5110
	push {r4,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r3, _080F513C  @ =gRam
	ldr r2, _080F5140  @ =0x00000FC2
	add r0, r3, r2
	add r2, r1, r0
	ldrb r0, [r2]
	cmp r0, #0
	bne _080F5134
	ldr r4, _080F5144  @ =0x00000F52
	add r0, r3, r4
	add r0, r1, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #128
	strb r0, [r2]
_080F5134:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F513C:
	.4byte gRam
_080F5140:
	.4byte 0x00000FC2
_080F5144:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F5110


	THUMB_FUNC_START sub_08132974
sub_08132974: @ 0x08132974
	push {r4,lr}
	ldr r2, _081329A0  @ =gRam
	ldr r0, _081329A4  @ =0x0000099B
	add r1, r2, r0
	mov r3, #0
	mov r0, #1
	strb r0, [r1]
	ldr r4, _081329A8  @ =0x00000B69
	add r1, r2, r4
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #11
	bls _081329AC
	sub r4, r4, #2
	add r0, r2, r4
	strb r3, [r0]
	strb r3, [r1]
	b _081329B4
	.byte 0x00
	.byte 0x00
_081329A0:
	.4byte gRam
_081329A4:
	.4byte 0x0000099B
_081329A8:
	.4byte 0x00000B69
_081329AC:
	ldr r0, _081329BC  @ =0x00000B67
	add r1, r2, r0
	mov r0, #2
	strb r0, [r1]
_081329B4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081329BC:
	.4byte 0x00000B67
	THUMB_FUNC_END sub_08132974


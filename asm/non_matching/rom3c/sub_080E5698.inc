	THUMB_FUNC_START sub_080E5698
sub_080E5698: @ 0x080E5698
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r2, _080E56BC  @ =gRam
	ldr r3, _080E56C0  @ =0x00001122
	add r2, r2, r3
	add r0, r0, r2
	ldrb r3, [r0]
	mov r2, #191
	and r2, r2, r3
	ldr r3, _080E56C4  @ =gUnknown_081774B2
	add r1, r1, r3
	ldrb r1, [r1]
	orr r2, r2, r1
	strb r2, [r0]
	bx lr
	.byte 0x00
	.byte 0x00
_080E56BC:
	.4byte gRam
_080E56C0:
	.4byte 0x00001122
_080E56C4:
	.4byte gUnknown_081774B2
	THUMB_FUNC_END sub_080E5698


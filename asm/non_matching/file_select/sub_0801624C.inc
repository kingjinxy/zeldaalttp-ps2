	THUMB_FUNC_START sub_0801624C
sub_0801624C: @ 0x0801624C
	lsl r0, r0, #16
	lsl r1, r1, #16
	ldr r2, _08016274  @ =0xFF880000
	add r0, r0, r2
	lsr r0, r0, #16
	ldr r2, _08016278  @ =0xFFB00000
	add r1, r1, r2
	lsr r1, r1, #16
	ldr r2, _0801627C  @ =gUnknown_03000450
	strh r0, [r2, #32]
	strh r1, [r2, #34]
	strh r0, [r2, #36]
	strh r1, [r2, #38]
	ldr r1, _08016280  @ =gUnknown_02000028
	ldr r0, _08016284  @ =gUnknown_03000204
	ldrb r0, [r0]
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	bx lr
_08016274:
	.4byte 0xFF880000
_08016278:
	.4byte 0xFFB00000
_0801627C:
	.4byte gUnknown_03000450
_08016280:
	.4byte gUnknown_02000028
_08016284:
	.4byte gUnknown_03000204
	THUMB_FUNC_END sub_0801624C


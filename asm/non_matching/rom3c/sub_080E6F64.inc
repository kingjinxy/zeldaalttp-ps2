	THUMB_FUNC_START sub_080E6F64
sub_080E6F64: @ 0x080E6F64
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r5, r1, #0
	ldr r6, _080E6F98  @ =gRam
	ldr r2, _080E6F9C  @ =0x00000FC2
	add r0, r6, r2
	add r4, r1, r0
	ldrb r0, [r4]
	cmp r0, #28
	bne _080E6F80
	add r0, r1, #0
	bl sub_080E5A60
_080E6F80:
	ldr r0, _080E6FA0  @ =0x00000F82
	add r1, r6, r0
	add r1, r5, r1
	ldr r2, _080E6FA4  @ =gUnknown_08177784
	ldrb r0, [r4]
	lsr r0, r0, #3
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	pop {r4-r6}
	pop {r0}
	bx r0
_080E6F98:
	.4byte gRam
_080E6F9C:
	.4byte 0x00000FC2
_080E6FA0:
	.4byte 0x00000F82
_080E6FA4:
	.4byte gUnknown_08177784
	THUMB_FUNC_END sub_080E6F64


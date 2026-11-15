	THUMB_FUNC_START sub_080E41E8
sub_080E41E8: @ 0x080E41E8
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C5044
	ldr r1, _080E4218  @ =gRam
	ldr r2, _080E421C  @ =0x00000FC2
	add r0, r1, r2
	add r3, r4, r0
	ldrb r0, [r3]
	lsl r0, r0, #24
	lsr r2, r0, #24
	cmp r2, #0
	beq _080E4228
	ldr r5, _080E4220  @ =0x00000F92
	add r1, r1, r5
	add r1, r4, r1
	ldr r2, _080E4224  @ =gUnknown_08177320
	lsr r0, r0, #26
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _080E4234
_080E4218:
	.4byte gRam
_080E421C:
	.4byte 0x00000FC2
_080E4220:
	.4byte 0x00000F92
_080E4224:
	.4byte gUnknown_08177320
_080E4228:
	ldr r5, _080E423C  @ =0x00000F52
	add r0, r1, r5
	add r0, r4, r0
	strb r2, [r0]
	mov r0, #64
	strb r0, [r3]
_080E4234:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E423C:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E41E8


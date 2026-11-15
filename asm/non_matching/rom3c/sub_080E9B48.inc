	THUMB_FUNC_START sub_080E9B48
sub_080E9B48: @ 0x080E9B48
	push {r4,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r2, _080E9B74  @ =gRam
	ldr r1, _080E9B78  @ =0x00000FC2
	add r0, r2, r1
	add r4, r3, r0
	ldrb r0, [r4]
	lsl r1, r0, #24
	cmp r1, #0
	beq _080E9B80
	ldr r4, _080E9B7C  @ =0x00000F92
	add r0, r2, r4
	add r0, r3, r0
	lsr r1, r1, #26
	mov r2, #1
	and r1, r1, r2
	strb r1, [r0]
	add r0, r3, #0
	bl sub_080E9D14
	b _080E9B90
_080E9B74:
	.4byte gRam
_080E9B78:
	.4byte 0x00000FC2
_080E9B7C:
	.4byte 0x00000F92
_080E9B80:
	ldr r1, _080E9B98  @ =0x00000F52
	add r0, r2, r1
	add r0, r3, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #16
	strb r0, [r4]
_080E9B90:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E9B98:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E9B48


	THUMB_FUNC_START sub_080E9568
sub_080E9568: @ 0x080E9568
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r6, _080E95A4  @ =gRam
	ldr r1, _080E95A8  @ =0x00000FC2
	add r0, r6, r1
	add r7, r5, r0
	ldrb r4, [r7]
	cmp r4, #0
	beq _080E95B4
	cmp r4, #29
	bne _080E9590
	add r1, r1, #32
	add r0, r6, r1
	add r0, r5, r0
	mov r1, #15
	strb r1, [r0]
	add r0, r5, #0
	bl sub_080E95CC
_080E9590:
	ldr r0, _080E95AC  @ =0x00000F92
	add r1, r6, r0
	add r1, r5, r1
	ldr r2, _080E95B0  @ =gUnknown_08177AE4
	ldrb r0, [r7]
	lsr r0, r0, #1
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	b _080E95C0
_080E95A4:
	.4byte gRam
_080E95A8:
	.4byte 0x00000FC2
_080E95AC:
	.4byte 0x00000F92
_080E95B0:
	.4byte gUnknown_08177AE4
_080E95B4:
	add r0, r5, #0
	bl sub_080CB1E0
	ldr r1, _080E95C8  @ =0x00001770
	add r0, r6, r1
	strb r4, [r0]
_080E95C0:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E95C8:
	.4byte 0x00001770
	THUMB_FUNC_END sub_080E9568


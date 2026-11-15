	THUMB_FUNC_START sub_080FF6DC
sub_080FF6DC: @ 0x080FF6DC
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r3, r2, #0
	ldr r0, _080FF704  @ =gUnknown_02002159
	ldrb r1, [r0]
	mov r0, #8
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r4, #0
	beq _080FF710
	ldr r0, _080FF708  @ =gRam
	ldr r1, _080FF70C  @ =0x00000FA2
	add r0, r0, r1
	add r0, r2, r0
	mov r1, #0
	strb r1, [r0]
	b _080FF75E
	.byte 0x00
	.byte 0x00
_080FF704:
	.4byte gUnknown_02002159
_080FF708:
	.4byte gRam
_080FF70C:
	.4byte 0x00000FA2
_080FF710:
	ldr r2, _080FF734  @ =gRam
	ldr r1, _080FF738  @ =0x00001172
	add r0, r2, r1
	add r0, r3, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	ldr r0, _080FF73C  @ =0x00001663
	add r5, r2, r0
	ldrb r0, [r5]
	cmp r0, #6
	bne _080FF744
	ldr r1, _080FF740  @ =0x00000FA2
	add r0, r2, r1
	add r0, r3, r0
	strb r4, [r0]
	b _080FF75E
	.byte 0x00
	.byte 0x00
_080FF734:
	.4byte gRam
_080FF738:
	.4byte 0x00001172
_080FF73C:
	.4byte 0x00001663
_080FF740:
	.4byte 0x00000FA2
_080FF744:
	mov r0, #6
	strb r0, [r5]
	ldr r1, _080FF764  @ =0x0000166A
	add r0, r2, r1
	strb r4, [r0]
	ldr r1, _080FF768  @ =0x00001787
	add r0, r2, r1
	strb r4, [r0]
	bl sub_0812F9A8
	bl sub_08114600
	strb r4, [r5]
_080FF75E:
	pop {r4,r5}
	pop {r0}
	bx r0
_080FF764:
	.4byte 0x0000166A
_080FF768:
	.4byte 0x00001787
	THUMB_FUNC_END sub_080FF6DC


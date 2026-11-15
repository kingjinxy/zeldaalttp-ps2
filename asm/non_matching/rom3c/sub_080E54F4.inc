	THUMB_FUNC_START sub_080E54F4
sub_080E54F4: @ 0x080E54F4
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080E5530  @ =gRam
	ldr r1, _080E5534  @ =0x00000996
	add r0, r5, r1
	ldrb r2, [r0]
	add r0, r4, #0
	eor r0, r0, r2
	mov r3, #1
	and r0, r0, r3
	cmp r0, #0
	beq _080E5540
	ldr r0, _080E5538  @ =0x00000F92
	add r1, r5, r0
	add r1, r4, r1
	lsr r0, r2, #1
	and r0, r0, r3
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080E553C  @ =0x00000F22
	add r0, r5, r1
	add r0, r4, r0
	ldrb r1, [r0]
	lsr r1, r1, #7
	add r0, r4, #0
	bl sub_080E5698
	b _080E5564
	.byte 0x00
	.byte 0x00
_080E5530:
	.4byte gRam
_080E5534:
	.4byte 0x00000996
_080E5538:
	.4byte 0x00000F92
_080E553C:
	.4byte 0x00000F22
_080E5540:
	add r0, r4, #0
	mov r1, #48
	bl sub_080C2CB4
	mov r0, #150
	lsl r0, r0, #4
	add r1, r5, r0
	ldrb r0, [r1]
	neg r0, r0
	strb r0, [r1]
	ldr r0, _080E556C  @ =0x00000961
	add r1, r5, r0
	ldrb r0, [r1]
	neg r0, r0
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080E5470
_080E5564:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E556C:
	.4byte 0x00000961
	THUMB_FUNC_END sub_080E54F4


	THUMB_FUNC_START sub_080CA614
sub_080CA614: @ 0x080CA614
	push {r4-r7,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r2, _080CA66C  @ =gRam
	ldr r0, _080CA670  @ =0x00001624
	add r5, r2, r0
	ldrb r0, [r5]
	ldr r3, _080CA674  @ =0x00001625
	add r6, r2, r3
	ldrb r3, [r6]
	lsl r3, r3, #8
	ldr r7, _080CA678  @ =0x00001142
	add r2, r2, r7
	add r2, r4, r2
	orr r0, r0, r3
	ldrb r2, [r2]
	add r0, r0, r2
	strb r0, [r5]
	lsr r0, r0, #8
	strb r0, [r6]
	ldr r2, _080CA67C  @ =gUnknown_03003E74
	ldrh r0, [r2]
	add r0, r0, #4
	strh r0, [r2]
	ldr r0, _080CA680  @ =gUnknown_08172800
	add r1, r1, r0
	ldrb r1, [r1]
	lsl r1, r1, #3
	ldr r0, _080CA684  @ =gUnknown_08172788
	add r1, r1, r0
	add r0, r4, #0
	mov r2, #3
	bl sub_080C9480
	add r0, r4, #0
	bl sub_080C1F70
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CA66C:
	.4byte gRam
_080CA670:
	.4byte 0x00001624
_080CA674:
	.4byte 0x00001625
_080CA678:
	.4byte 0x00001142
_080CA67C:
	.4byte gUnknown_03003E74
_080CA680:
	.4byte gUnknown_08172800
_080CA684:
	.4byte gUnknown_08172788
	THUMB_FUNC_END sub_080CA614


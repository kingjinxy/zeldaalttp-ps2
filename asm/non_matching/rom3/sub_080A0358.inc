	THUMB_FUNC_START sub_080A0358
sub_080A0358: @ 0x080A0358
	push {r4-r7,lr}
	mov r7, r9
	mov r6, r8
	push {r6,r7}
	mov r6, #12
	ldr r0, _080A03D8  @ =gUnknown_0816831E
	mov r9, r0
	ldr r3, _080A03DC  @ =gRam
	ldr r1, _080A03E0  @ =0x0000096C
	add r4, r3, r1
	ldr r2, _080A03E4  @ =0x0000177C
	add r7, r3, r2
	ldr r0, _080A03E8  @ =0x00000974
	add r5, r3, r0
	add r1, r1, #16
	add r1, r1, r3
	mov r8, r1
	add r2, r2, #124
	add r2, r2, r3
	mov r12, r2
_080A0380:
	mov r0, #0
	ldrsh r1, [r4, r0]
	lsl r0, r6, #16
	asr r2, r0, #16
	asr r0, r0, #17
	lsl r0, r0, #1
	add r0, r0, r9
	ldrh r0, [r0]
	cmp r1, r0
	bne _080A03F0
	add r0, r1, #0
	cmp r0, #80
	beq _080A039E
	cmp r0, #81
	bne _080A03B8
_080A039E:
	ldrb r1, [r5]
	lsl r1, r1, #8
	mov r2, #0
	ldrsh r0, [r5, r2]
	mov r2, #255
	lsl r2, r2, #8
	and r0, r0, r2
	asr r0, r0, #8
	add r1, r1, r0
	lsl r1, r1, #4
	ldrh r0, [r7]
	orr r1, r1, r0
	strh r1, [r7]
_080A03B8:
	mov r1, r12
	ldrh r0, [r1]
	ldrh r1, [r5]
	orr r0, r0, r1
	mov r2, r12
	strh r0, [r2]
	ldr r2, _080A03EC  @ =0x000017FC
	add r0, r3, r2
	strb r6, [r0]
	mov r2, r8
	ldrh r0, [r2]
	orr r0, r0, r1
	strh r0, [r2]
	bl sub_080A08B0
	b _080A03FA
_080A03D8:
	.4byte gUnknown_0816831E
_080A03DC:
	.4byte gRam
_080A03E0:
	.4byte 0x0000096C
_080A03E4:
	.4byte 0x0000177C
_080A03E8:
	.4byte 0x00000974
_080A03EC:
	.4byte 0x000017FC
_080A03F0:
	sub r0, r2, #2
	lsl r0, r0, #16
	lsr r6, r0, #16
	cmp r0, #0
	bge _080A0380
_080A03FA:
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080A0358

	.byte 0x00
	.byte 0x00

	THUMB_FUNC_START sub_080CA688
sub_080CA688: @ 0x080CA688
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r7, r2, #0
	ldr r3, _080CA6CC  @ =gUnknown_03003E74
	ldrh r0, [r3]
	mov r10, r0
	ldr r6, _080CA6D0  @ =gRam
	ldr r1, _080CA6D4  @ =0x000010C2
	add r0, r6, r1
	add r0, r2, r0
	mov r1, #0
	strb r1, [r0]
	ldr r1, _080CA6D8  @ =0x00000FC2
	add r0, r6, r1
	add r0, r0, r2
	mov r9, r0
	ldrb r0, [r0]
	cmp r0, #1
	bne _080CA6DC
	add r0, r2, #0
	bl sub_080C6DA8
	mov r0, #31
	mov r1, #1
	bl sub_080BEA28
	b _080CA734
	.byte 0x00
	.byte 0x00
_080CA6CC:
	.4byte gUnknown_03003E74
_080CA6D0:
	.4byte gRam
_080CA6D4:
	.4byte 0x000010C2
_080CA6D8:
	.4byte 0x00000FC2
_080CA6DC:
	cmp r0, #15
	bls _080CA700
	ldr r0, _080CA744  @ =0x00001012
	add r4, r6, r0
	add r4, r2, r4
	ldrb r5, [r4]
	ldrh r0, [r3]
	add r0, r0, #2
	strh r0, [r3]
	ldrb r0, [r4]
	sub r0, r0, #2
	strb r0, [r4]
	add r0, r2, #0
	str r3, [sp]
	bl SpriteActive_MainLong
	strb r5, [r4]
	ldr r3, [sp]
_080CA700:
	ldr r1, _080CA748  @ =0x00000F92
	add r5, r6, r1
	add r5, r7, r5
	ldrb r2, [r5]
	mov r8, r2
	ldr r0, _080CA74C  @ =0x00001122
	add r4, r6, r0
	add r4, r7, r4
	ldrb r6, [r4]
	ldr r1, _080CA750  @ =gUnknown_081791D4
	mov r2, r9
	ldrb r0, [r2]
	lsr r0, r0, #3
	add r0, r0, r1
	ldrb r0, [r0]
	strb r0, [r5]
	mov r0, #3
	strb r0, [r4]
	mov r0, r10
	strh r0, [r3]
	add r0, r7, #0
	bl sub_080F2410
	strb r6, [r4]
	mov r1, r8
	strb r1, [r5]
_080CA734:
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080CA744:
	.4byte 0x00001012
_080CA748:
	.4byte 0x00000F92
_080CA74C:
	.4byte 0x00001122
_080CA750:
	.4byte gUnknown_081791D4
	THUMB_FUNC_END sub_080CA688


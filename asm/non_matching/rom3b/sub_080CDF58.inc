	THUMB_FUNC_START sub_080CDF58
sub_080CDF58: @ 0x080CDF58
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	ldr r6, _080CDFDC  @ =gRam
	ldr r1, _080CDFE0  @ =0x000009AD
	add r0, r6, r1
	ldr r2, _080CDFE4  @ =0x00001605
	add r1, r6, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	bne _080CDF92
	ldr r0, _080CDFE8  @ =0x0000120E
	add r3, r6, r0
	add r3, r4, r3
	ldrb r1, [r3]
	add r0, r0, #60
	add r2, r6, r0
	add r2, r4, r2
	ldrb r0, [r2]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r1, #1
	strb r1, [r3]
	lsr r1, r1, #8
	strb r1, [r2]
_080CDF92:
	add r0, r5, #0
	bl sub_080CD8BC
	lsl r0, r0, #24
	lsr r7, r0, #24
	cmp r7, #0
	bne _080CDFD4
	ldr r4, _080CDFEC  @ =gUnknown_03003E74
	ldrh r0, [r4]
	mov r1, #150
	lsl r1, r1, #4
	add r5, r6, r1
	ldrh r1, [r5]
	ldr r2, _080CDFF0  @ =0x00000964
	add r6, r6, r2
	ldrh r2, [r6]
	ldr r3, _080CDFF4  @ =0x00002254
	str r7, [sp]
	bl sub_080C6368
	ldrh r0, [r4]
	add r0, r0, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldrh r1, [r5]
	add r1, r1, #8
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldrh r2, [r6]
	ldr r3, _080CDFF8  @ =0x00002255
	str r7, [sp]
	bl sub_080C6368
_080CDFD4:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_080CDFDC:
	.4byte gRam
_080CDFE0:
	.4byte 0x000009AD
_080CDFE4:
	.4byte 0x00001605
_080CDFE8:
	.4byte 0x0000120E
_080CDFEC:
	.4byte gUnknown_03003E74
_080CDFF0:
	.4byte 0x00000964
_080CDFF4:
	.4byte 0x00002254
_080CDFF8:
	.4byte 0x00002255
	THUMB_FUNC_END sub_080CDF58


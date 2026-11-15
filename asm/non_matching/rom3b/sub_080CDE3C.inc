	THUMB_FUNC_START sub_080CDE3C
sub_080CDE3C: @ 0x080CDE3C
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_080CD8BC
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r12, r0
	cmp r0, #0
	bne _080CDE9E
	ldr r0, _080CDEA8  @ =gUnknown_03003E74
	ldrh r0, [r0]
	ldr r6, _080CDEAC  @ =gRam
	mov r2, #150
	lsl r2, r2, #4
	add r1, r6, r2
	ldrh r1, [r1]
	ldr r3, _080CDEB0  @ =0x00000964
	add r2, r6, r3
	ldrh r2, [r2]
	ldr r4, _080CDEB4  @ =gUnknown_08172E23
	ldr r7, _080CDEB8  @ =0x000013EE
	add r3, r6, r7
	add r3, r5, r3
	ldrb r3, [r3]
	sub r3, r3, #7
	add r3, r3, r4
	ldrb r3, [r3]
	sub r7, r7, #210
	add r4, r6, r7
	add r4, r5, r4
	ldrb r5, [r4]
	ldr r7, _080CDEBC  @ =0x00001122
	add r4, r6, r7
	add r4, r5, r4
	ldr r7, _080CDEC0  @ =0x00000D94
	add r6, r6, r7
	add r5, r5, r6
	ldrb r6, [r4]
	ldrb r4, [r5]
	orr r4, r4, r6
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, r12
	str r4, [sp]
	bl sub_080C6368
_080CDE9E:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CDEA8:
	.4byte gUnknown_03003E74
_080CDEAC:
	.4byte gRam
_080CDEB0:
	.4byte 0x00000964
_080CDEB4:
	.4byte gUnknown_08172E23
_080CDEB8:
	.4byte 0x000013EE
_080CDEBC:
	.4byte 0x00001122
_080CDEC0:
	.4byte 0x00000D94
	THUMB_FUNC_END sub_080CDE3C


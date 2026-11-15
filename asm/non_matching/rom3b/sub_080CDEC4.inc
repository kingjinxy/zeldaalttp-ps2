	THUMB_FUNC_START sub_080CDEC4
sub_080CDEC4: @ 0x080CDEC4
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r7, r1, #0
	ldr r6, _080CDF38  @ =gRam
	ldr r2, _080CDF3C  @ =0x000012FE
	add r0, r6, r2
	add r4, r1, r0
	ldrb r0, [r4]
	cmp r0, #8
	bne _080CDEE6
	ldr r3, _080CDF40  @ =0x000011D2
	add r0, r6, r3
	add r0, r1, r0
	mov r1, #17
	strb r1, [r0]
_080CDEE6:
	add r0, r7, #0
	bl sub_080CD8BC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080CDF30
	ldr r1, _080CDF44  @ =gUnknown_08172E3F
	ldrb r0, [r4]
	lsr r0, r0, #3
	add r0, r0, r1
	ldrb r5, [r0]
	ldr r0, _080CDF48  @ =gUnknown_03003E74
	ldrh r0, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r1, r6, r2
	ldrh r1, [r1]
	ldr r3, _080CDF4C  @ =0x00000964
	add r2, r6, r3
	ldrh r2, [r2]
	ldr r3, _080CDF50  @ =gUnknown_08172E31
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _080CDF54  @ =gUnknown_08172E38
	add r5, r5, r4
	ldrb r5, [r5]
	mov r4, #34
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	add r0, r7, #0
	bl sub_080CDBA0
_080CDF30:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
_080CDF38:
	.4byte gRam
_080CDF3C:
	.4byte 0x000012FE
_080CDF40:
	.4byte 0x000011D2
_080CDF44:
	.4byte gUnknown_08172E3F
_080CDF48:
	.4byte gUnknown_03003E74
_080CDF4C:
	.4byte 0x00000964
_080CDF50:
	.4byte gUnknown_08172E31
_080CDF54:
	.4byte gUnknown_08172E38
	THUMB_FUNC_END sub_080CDEC4


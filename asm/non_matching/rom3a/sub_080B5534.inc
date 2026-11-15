	THUMB_FUNC_START sub_080B5534
sub_080B5534: @ 0x080B5534
	push {r4-r6,lr}
	sub sp, sp, #16
	ldr r1, _080B5550  @ =gRam
	ldr r2, _080B5554  @ =0x00000A66
	add r0, r1, r2
	ldrh r3, [r0]
	mov r0, #255
	lsl r0, r0, #8
	and r0, r0, r3
	add r2, r1, #0
	cmp r0, #0
	beq _080B5558
	mov r6, #240
	b _080B5560
_080B5550:
	.4byte gRam
_080B5554:
	.4byte 0x00000A66
_080B5558:
	mov r0, #255
	and r0, r0, r3
	add r6, r0, #0
	sub r6, r6, #51
_080B5560:
	mov r3, #150
	lsl r3, r3, #4
	add r0, r2, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldr r4, _080B55A8  @ =0x00000A64
	add r1, r2, r4
	ldrh r1, [r1]
	sub r1, r1, #11
	mov r3, #153
	lsl r3, r3, #2
	ldr r5, _080B55AC  @ =gUnknown_0816F0BC
	sub r4, r4, #206
	add r2, r2, r4
	ldrb r4, [r2]
	mov r2, #12
	and r2, r2, r4
	lsr r2, r2, #2
	add r2, r2, r5
	ldrb r4, [r2]
	mov r2, #14
	and r2, r2, r4
	lsr r2, r2, #1
	str r2, [sp]
	mov r2, #0
	str r2, [sp, #4]
	str r2, [sp, #8]
	str r2, [sp, #12]
	add r2, r6, #0
	bl sub_080B35E0
	add sp, sp, #16
	pop {r4-r6}
	pop {r0}
	bx r0
_080B55A8:
	.4byte 0x00000A64
_080B55AC:
	.4byte gUnknown_0816F0BC
	THUMB_FUNC_END sub_080B5534


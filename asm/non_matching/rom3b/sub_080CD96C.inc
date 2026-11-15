	THUMB_FUNC_START sub_080CD96C
sub_080CD96C: @ 0x080CD96C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r3, _080CDA2C  @ =gRam
	ldr r2, _080CDA30  @ =0x000012FE
	add r0, r3, r2
	add r0, r1, r0
	ldrb r2, [r0]
	cmp r2, #16
	bne _080CD990
	mov r2, #0
	ldr r4, _080CDA34  @ =0x000011D2
	add r0, r3, r4
	add r0, r1, r0
	strb r2, [r0]
_080CD990:
	mov r0, #15
	and r0, r0, r2
	lsr r2, r0, #2
	add r0, r2, #0
	ldr r4, _080CDA38  @ =0x0000096C
	add r1, r3, r4
	lsl r2, r2, #1
	add r0, r2, r0
	strb r0, [r1]
	mov r1, #2
	add r7, r3, #0
	ldr r0, _080CDA3C  @ =0x00000964
	add r0, r0, r7
	mov r8, r0
_080CD9AC:
	lsl r6, r1, #24
	ldr r2, _080CDA38  @ =0x0000096C
	add r0, r7, r2
	ldrb r5, [r0]
	add r5, r1, r5
	mov r4, #150
	lsl r4, r4, #4
	add r0, r7, r4
	ldrb r1, [r0]
	sub r2, r2, #11
	add r0, r7, r2
	ldrb r2, [r0]
	lsl r2, r2, #8
	ldr r3, _080CDA40  @ =gUnknown_08172DB0
	lsl r0, r5, #1
	add r0, r0, r3
	orr r1, r1, r2
	ldrh r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r4, r8
	mov r2, #0
	ldrsb r2, [r4, r2]
	lsl r2, r2, #16
	ldr r0, _080CDA44  @ =gUnknown_08172DC8
	add r0, r5, r0
	lsr r2, r2, #16
	ldrb r0, [r0]
	add r2, r2, r0
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r0, _080CDA48  @ =gUnknown_03003E74
	asr r6, r6, #24
	sub r3, r6, #2
	ldrh r0, [r0]
	sub r0, r0, r3
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r3, _080CDA4C  @ =gUnknown_08172DD4
	add r3, r5, r3
	ldrb r3, [r3]
	ldr r4, _080CDA50  @ =gUnknown_08172DE0
	add r5, r5, r4
	ldrb r5, [r5]
	mov r4, #34
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, #0
	str r4, [sp]
	bl sub_080C6004
	sub r6, r6, #1
	lsl r6, r6, #24
	lsr r1, r6, #24
	cmp r6, #0
	bge _080CD9AC
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080CDA2C:
	.4byte gRam
_080CDA30:
	.4byte 0x000012FE
_080CDA34:
	.4byte 0x000011D2
_080CDA38:
	.4byte 0x0000096C
_080CDA3C:
	.4byte 0x00000964
_080CDA40:
	.4byte gUnknown_08172DB0
_080CDA44:
	.4byte gUnknown_08172DC8
_080CDA48:
	.4byte gUnknown_03003E74
_080CDA4C:
	.4byte gUnknown_08172DD4
_080CDA50:
	.4byte gUnknown_08172DE0
	THUMB_FUNC_END sub_080CD96C


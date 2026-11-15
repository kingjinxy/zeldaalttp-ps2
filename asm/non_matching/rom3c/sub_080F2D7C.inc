	THUMB_FUNC_START sub_080F2D7C
sub_080F2D7C: @ 0x080F2D7C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r7, r0, #24
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	add r2, r7, #0
	bl sub_080C5ACC
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #0
	bne _080F2E1C
	ldr r4, _080F2E28  @ =gRam
	ldr r0, _080F2E2C  @ =0x00001052
	add r3, r4, r0
	add r3, r7, r3
	ldrb r0, [r3]
	lsr r0, r0, #3
	mov r1, #3
	mov r12, r1
	mov r2, r12
	and r0, r0, r2
	ldr r5, _080F2E30  @ =0x0000096C
	add r1, r4, r5
	strb r0, [r1]
	ldr r2, _080F2E34  @ =gUnknown_03003E74
	add r0, sp, #4
	ldrb r1, [r0]
	ldrh r0, [r2]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r1, #150
	lsl r1, r1, #4
	add r1, r1, r4
	mov r8, r1
	ldr r2, _080F2E38  @ =gUnknown_0817927E
	ldr r5, _080F2E3C  @ =0x00000FB2
	add r1, r4, r5
	add r1, r7, r1
	ldrb r1, [r1]
	lsl r1, r1, #1
	add r1, r1, r2
	ldrh r1, [r1]
	mov r7, r8
	ldrh r7, [r7]
	add r1, r1, r7
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r5, _080F2E40  @ =0x00000964
	add r2, r4, r5
	ldrh r2, [r2]
	add r2, r2, #9
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r5, _080F2E44  @ =gUnknown_08179282
	ldrb r3, [r3]
	lsr r3, r3, #3
	mov r7, r12
	and r3, r3, r7
	add r3, r3, r5
	ldrb r3, [r3]
	ldr r5, _080F2E48  @ =0x00000969
	add r4, r4, r5
	ldrb r4, [r4]
	lsl r4, r4, #24
	asr r4, r4, #24
	mov r5, #240
	and r4, r4, r5
	mov r5, #2
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	str r6, [sp]
	bl sub_080C6368
_080F2E1C:
	add sp, sp, #8
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080F2E28:
	.4byte gRam
_080F2E2C:
	.4byte 0x00001052
_080F2E30:
	.4byte 0x0000096C
_080F2E34:
	.4byte gUnknown_03003E74
_080F2E38:
	.4byte gUnknown_0817927E
_080F2E3C:
	.4byte 0x00000FB2
_080F2E40:
	.4byte 0x00000964
_080F2E44:
	.4byte gUnknown_08179282
_080F2E48:
	.4byte 0x00000969
	THUMB_FUNC_END sub_080F2D7C


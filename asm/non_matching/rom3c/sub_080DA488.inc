	THUMB_FUNC_START sub_080DA488
sub_080DA488: @ 0x080DA488
	push {r4-r6,lr}
	mov r6, r10
	mov r5, r9
	mov r4, r8
	push {r4-r6}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r4, r0, #0
	mov r0, #8
	bl sub_080CF370
	ldr r3, _080DA534  @ =gRam
	ldr r1, _080DA538  @ =0x00001142
	add r0, r3, r1
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #30
	bls _080DA4B0
	mov r1, #31
_080DA4B0:
	ldr r2, _080DA53C  @ =0x00000ED2
	add r0, r3, r2
	add r0, r4, r0
	ldrb r2, [r0]
	ldr r5, _080DA540  @ =0x00000EF2
	add r0, r3, r5
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r4, _080DA544  @ =0x00000958
	add r0, r3, r4
	ldrh r0, [r0]
	sub r2, r2, r0
	ldr r5, _080DA548  @ =0x00000964
	add r5, r5, r3
	mov r10, r5
	strh r2, [r5]
	ldr r6, _080DA54C  @ =gUnknown_03003E74
	ldrh r0, [r6]
	add r4, r4, #8
	add r4, r4, r3
	mov r8, r4
	ldr r3, _080DA550  @ =gUnknown_08175B48
	lsr r1, r1, #1
	add r1, r1, r3
	ldrb r5, [r1]
	ldrh r1, [r4]
	add r1, r1, r5
	lsl r1, r1, #16
	lsr r1, r1, #16
	add r2, r2, #7
	lsl r2, r2, #16
	lsr r2, r2, #16
	ldr r3, _080DA554  @ =0x000024CC
	mov r9, r3
	mov r4, #2
	str r4, [sp]
	bl sub_080C6368
	ldrh r0, [r6]
	add r0, r0, #1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r2, r8
	ldrh r1, [r2]
	sub r1, r1, r5
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r3, r10
	ldrh r2, [r3]
	add r2, r2, #7
	lsl r2, r2, #16
	lsr r2, r2, #16
	str r4, [sp]
	mov r3, r9
	bl sub_080C6368
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r6}
	pop {r0}
	bx r0
_080DA534:
	.4byte gRam
_080DA538:
	.4byte 0x00001142
_080DA53C:
	.4byte 0x00000ED2
_080DA540:
	.4byte 0x00000EF2
_080DA544:
	.4byte 0x00000958
_080DA548:
	.4byte 0x00000964
_080DA54C:
	.4byte gUnknown_03003E74
_080DA550:
	.4byte gUnknown_08175B48
_080DA554:
	.4byte 0x000024CC
	THUMB_FUNC_END sub_080DA488


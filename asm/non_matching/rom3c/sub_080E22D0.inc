	THUMB_FUNC_START sub_080E22D0
sub_080E22D0: @ 0x080E22D0
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #26
	mov r10, r1
	mov r2, #3
	ldr r3, _080E230C  @ =gRam
	ldr r4, _080E2310  @ =0x00000F92
	add r1, r3, r4
	add r1, r1, r0
	mov r9, r1
	ldr r5, _080E2314  @ =0x00000FF2
	add r1, r3, r5
	add r0, r0, r1
	str r0, [sp, #4]
_080E22FA:
	mov r5, #0
	ldr r7, [sp, #4]
	ldrb r0, [r7]
	cmp r0, #69
	bhi _080E2318
	lsl r2, r2, #24
	mov r8, r2
	b _080E2346
	.byte 0x00
	.byte 0x00
_080E230C:
	.4byte gRam
_080E2310:
	.4byte 0x00000F92
_080E2314:
	.4byte 0x00000FF2
_080E2318:
	ldr r1, _080E238C  @ =gUnknown_08176D00
	lsl r2, r2, #24
	asr r3, r2, #24
	mov r4, r9
	ldrb r0, [r4]
	lsl r4, r0, #2
	add r0, r3, r4
	add r0, r0, r1
	ldrb r0, [r0]
	mov r8, r2
	cmp r0, #0
	beq _080E2342
	cmp r3, #3
	bne _080E2346
	ldr r0, _080E2390  @ =gUnknown_08176C30
	add r1, r4, #3
	add r1, r1, r0
	ldrb r0, [r1]
	cmp r0, #64
	beq _080E2342
	mov r5, #1
_080E2342:
	cmp r5, #0
	beq _080E2426
_080E2346:
	ldr r5, _080E2394  @ =gRam
	ldr r7, _080E2398  @ =0x00000964
	add r4, r5, r7
	ldr r3, _080E239C  @ =gUnknown_08176B60
	mov r0, r8
	asr r5, r0, #24
	lsl r1, r5, #1
	mov r7, r9
	ldrb r2, [r7]
	lsl r0, r2, #3
	add r1, r1, r0
	add r1, r1, r3
	ldrh r0, [r1]
	ldrh r4, [r4]
	add r0, r0, r4
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r12, r0
	mov r4, #8
	mov r3, #0
	ldr r1, _080E2390  @ =gUnknown_08176C30
	lsl r2, r2, #2
	add r5, r5, r2
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #64
	bne _080E23A0
	mov r4, #2
	ldr r1, [sp, #4]
	ldrb r0, [r1]
	cmp r0, #70
	bne _080E23AC
	mov r5, #240
	mov r12, r5
	b _080E23AC
_080E238C:
	.4byte gUnknown_08176D00
_080E2390:
	.4byte gUnknown_08176C30
_080E2394:
	.4byte gRam
_080E2398:
	.4byte 0x00000964
_080E239C:
	.4byte gUnknown_08176B60
_080E23A0:
	ldr r7, _080E2444  @ =gUnknown_08176D00
	add r0, r5, r7
	ldrb r1, [r0]
	neg r0, r1
	orr r0, r0, r1
	lsr r3, r0, #31
_080E23AC:
	ldr r1, _080E2448  @ =gUnknown_08176C98
	mov r0, r8
	asr r0, r0, #24
	str r0, [sp, #8]
	mov r5, r9
	ldrb r2, [r5]
	lsl r0, r2, #2
	ldr r7, [sp, #8]
	add r6, r7, r0
	add r1, r6, r1
	ldr r5, _080E244C  @ =gRam
	ldr r7, _080E2450  @ =0x00000969
	add r0, r5, r7
	ldrb r1, [r1]
	ldrb r0, [r0]
	add r5, r0, #0
	orr r5, r5, r1
	cmp r3, #0
	bne _080E23D8
	mov r0, #241
	and r5, r5, r0
	orr r5, r5, r4
_080E23D8:
	ldr r0, _080E2454  @ =gUnknown_03003E74
	ldrh r0, [r0]
	add r0, r0, r10
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldr r1, _080E244C  @ =gRam
	mov r3, #150
	lsl r3, r3, #4
	add r4, r1, r3
	ldr r3, _080E2458  @ =gUnknown_08176A90
	ldr r7, [sp, #8]
	lsl r1, r7, #1
	lsl r2, r2, #3
	add r1, r1, r2
	add r1, r1, r3
	ldrh r1, [r1]
	ldrh r4, [r4]
	add r1, r1, r4
	lsl r1, r1, #16
	lsr r1, r1, #16
	ldr r3, _080E245C  @ =gUnknown_08176C30
	add r2, r6, r3
	ldrb r3, [r2]
	lsl r2, r5, #8
	add r3, r3, r2
	lsl r3, r3, #16
	lsr r3, r3, #16
	ldr r4, _080E2444  @ =gUnknown_08176D00
	add r2, r6, r4
	ldrb r2, [r2]
	str r2, [sp]
	mov r2, r12
	bl sub_080C6368
	mov r0, r10
	add r0, r0, #1
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r10, r0
_080E2426:
	mov r0, #255
	lsl r0, r0, #24
	add r0, r0, r8
	lsr r2, r0, #24
	cmp r0, #0
	blt _080E2434
	b _080E22FA
_080E2434:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080E2444:
	.4byte gUnknown_08176D00
_080E2448:
	.4byte gUnknown_08176C98
_080E244C:
	.4byte gRam
_080E2450:
	.4byte 0x00000969
_080E2454:
	.4byte gUnknown_03003E74
_080E2458:
	.4byte gUnknown_08176A90
_080E245C:
	.4byte gUnknown_08176C30
	THUMB_FUNC_END sub_080E22D0


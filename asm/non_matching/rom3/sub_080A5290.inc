	THUMB_FUNC_START sub_080A5290
sub_080A5290: @ 0x080A5290
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #12
	ldr r0, _080A52D4  @ =gRam
	mov r2, #184
	lsl r2, r2, #5
	add r1, r0, r2
	ldrb r1, [r1]
	mov r10, r0
	cmp r1, #12
	bne _080A52AE
	b _080A5522
_080A52AE:
	ldr r0, _080A52D8  @ =0x00001718
	add r0, r0, r10
	ldrb r0, [r0]
	cmp r0, #22
	bne _080A52BA
	b _080A5522
_080A52BA:
	ldr r0, _080A52DC  @ =0x000017E4
	add r0, r0, r10
	ldrb r0, [r0]
	cmp r0, #5
	beq _080A52E4
	ldr r0, _080A52E0  @ =0x000017E1
	add r0, r0, r10
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A52E4
	bl sub_080A5D34
	b _080A5522
_080A52D4:
	.4byte gRam
_080A52D8:
	.4byte 0x00001718
_080A52DC:
	.4byte 0x000017E4
_080A52E0:
	.4byte 0x000017E1
_080A52E4:
	ldr r0, _080A5334  @ =0x00001702
	add r0, r0, r10
	ldrb r1, [r0]
	cmp r1, #4
	bne _080A52F0
	b _080A5522
_080A52F0:
	ldr r0, _080A5338  @ =0x00001718
	add r0, r0, r10
	ldrb r0, [r0]
	cmp r0, #4
	bne _080A5316
	ldr r0, _080A533C  @ =0x000009B2
	add r0, r0, r10
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #1
	bne _080A530A
	b _080A5522
_080A530A:
	ldr r0, _080A5340  @ =0x00001725
	add r0, r0, r10
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A5316
	b _080A5522
_080A5316:
	mov r6, #0
	ldr r0, _080A5344  @ =0x00001716
	add r0, r0, r10
	ldrb r0, [r0]
	cmp r0, #1
	bls _080A534C
	ldr r0, _080A5348  @ =0x00001715
	add r0, r0, r10
	ldrb r0, [r0]
	cmp r0, #5
	bhi _080A532E
	b _080A5522
_080A532E:
	bl sub_080A5FC4
	b _080A5522
_080A5334:
	.4byte 0x00001702
_080A5338:
	.4byte 0x00001718
_080A533C:
	.4byte 0x000009B2
_080A5340:
	.4byte 0x00001725
_080A5344:
	.4byte 0x00001716
_080A5348:
	.4byte 0x00001715
_080A534C:
	cmp r1, #0
	beq _080A5360
	cmp r1, #1
	bne _080A535E
	ldr r0, _080A5534  @ =0x00001710
	add r0, r0, r10
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A5360
_080A535E:
	mov r6, #1
_080A5360:
	mov r4, r10
	ldr r0, _080A5538  @ =0x00000974
	add r7, r4, r0
	mov r1, #0
	strb r6, [r7]
	ldr r2, _080A553C  @ =0x00000975
	add r0, r4, r2
	strb r1, [r0]
	ldr r1, _080A5540  @ =0x000017AF
	add r0, r4, r1
	ldrb r0, [r0]
	lsr r6, r0, #1
	mov r2, #182
	lsl r2, r2, #5
	add r0, r4, r2
	ldr r1, _080A5544  @ =0x00000958
	add r2, r4, r1
	ldrh r1, [r0]
	ldrh r0, [r2]
	sub r1, r1, r0
	ldr r0, _080A5548  @ =0x0000096C
	add r2, r4, r0
	strh r1, [r2]
	ldr r0, _080A554C  @ =gUnknown_0816AAF0
	add r3, r6, r0
	ldrb r5, [r3]
	add r1, r1, r5
	strh r1, [r2]
	ldr r1, _080A5550  @ =0x0000096D
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080A53A8
	b _080A5522
_080A53A8:
	ldr r2, _080A5554  @ =0x00000961
	add r1, r4, r2
	mov r0, #0
	ldrsb r0, [r3, r0]
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	str r0, [sp, #4]
	mov r0, #150
	lsl r0, r0, #4
	add r1, r4, r0
	ldr r0, _080A5558  @ =gUnknown_0816AAFC
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	str r0, [sp]
	ldr r1, _080A555C  @ =gUnknown_0816B318
	ldr r2, _080A5560  @ =0x00001732
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldr r2, _080A5564  @ =0x00000968
	add r0, r4, r2
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r2, _080A5568  @ =0x000017E2
	add r0, r4, r2
	ldrh r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	str r0, [sp, #8]
	lsr r0, r0, #16
	mov r9, r0
	ldrh r0, [r7]
	lsl r0, r0, #18
	ldr r1, _080A556C  @ =gUnknown_08169774
	lsr r0, r0, #16
	add r0, r0, r1
	ldrh r6, [r0]
	ldr r0, _080A5570  @ =0x0000CFFF
	and r6, r6, r0
	ldr r1, _080A5574  @ =0x000017EE
	add r0, r4, r1
	ldrh r0, [r0]
	orr r6, r6, r0
	mov r0, r9
	add r1, r6, #0
	bl sub_080A452C
	ldr r7, _080A5578  @ =0x00003FFF
	and r7, r7, r6
	mov r2, #128
	lsl r2, r2, #7
	add r0, r2, #0
	orr r7, r7, r0
	mov r0, r9
	add r0, r0, #4
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r8, r0
	add r1, r7, #0
	bl sub_080A452C
	ldr r1, _080A557C  @ =0x000017D6
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	bne _080A5462
	ldr r5, _080A5580  @ =0x0000F1FF
	and r6, r6, r5
	mov r2, #192
	lsl r2, r2, #3
	add r4, r2, #0
	orr r6, r6, r4
	mov r0, r9
	add r1, r6, #0
	bl sub_080A452C
	and r7, r7, r5
	orr r7, r7, r4
	mov r0, r8
	add r1, r7, #0
	bl sub_080A452C
_080A5462:
	ldr r1, _080A5584  @ =gUnknown_03003E68
	ldrb r5, [r1]
	mov r0, #0
	strb r0, [r1]
	ldr r2, [sp, #8]
	lsr r0, r2, #18
	lsl r0, r0, #3
	mov r6, #170
	lsl r6, r6, #3
	add r6, r6, r10
	add r3, r0, r6
	mov r12, r1
	ldr r0, _080A5588  @ =0x000001FF
	mov r8, r0
	ldr r0, [sp]
	mov r1, r8
	and r0, r0, r1
	ldrh r1, [r3, #2]
	ldr r7, _080A558C  @ =0xFFFFFE00
	add r2, r7, #0
	and r2, r2, r1
	orr r2, r2, r0
	strh r2, [r3, #2]
	mov r0, sp
	ldrb r0, [r0, #4]
	strb r0, [r3]
	ldr r1, [sp]
	cmp r1, #240
	bls _080A54B0
	lsl r0, r2, #23
	lsr r0, r0, #23
	mov r1, #128
	lsl r1, r1, #1
	orr r0, r0, r1
	mov r1, r8
	and r0, r0, r1
	and r2, r2, r7
	orr r2, r2, r0
	strh r2, [r3, #2]
_080A54B0:
	mov r2, r9
	add r2, r2, #4
	lsl r1, r2, #16
	ldr r0, [sp]
	add r0, r0, #8
	lsl r0, r0, #16
	lsr r4, r0, #16
	lsr r1, r1, #18
	lsl r1, r1, #3
	add r3, r1, r6
	mov r1, r12
	ldrb r0, [r1]
	mov r10, r2
	cmp r0, #0
	bne _080A54FC
	add r0, r4, #0
	mov r2, r8
	and r0, r0, r2
	ldrh r1, [r3, #2]
	add r2, r7, #0
	and r2, r2, r1
	orr r2, r2, r0
	strh r2, [r3, #2]
	mov r0, sp
	ldrb r0, [r0, #4]
	strb r0, [r3]
	cmp r4, #240
	bls _080A54FC
	lsl r0, r2, #23
	lsr r0, r0, #23
	mov r1, #128
	lsl r1, r1, #1
	orr r0, r0, r1
	mov r1, r8
	and r0, r0, r1
	and r2, r2, r7
	orr r2, r2, r0
	strh r2, [r3, #2]
_080A54FC:
	mov r2, r12
	strb r5, [r2]
	mov r0, r9
	lsr r1, r0, #2
	lsl r1, r1, #3
	add r1, r1, r6
	ldrb r3, [r1, #3]
	mov r2, #63
	add r0, r2, #0
	and r0, r0, r3
	strb r0, [r1, #3]
	mov r1, r10
	lsl r0, r1, #16
	lsr r0, r0, #18
	lsl r0, r0, #3
	add r0, r0, r6
	ldrb r1, [r0, #3]
	and r2, r2, r1
	strb r2, [r0, #3]
_080A5522:
	add sp, sp, #12
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A5534:
	.4byte 0x00001710
_080A5538:
	.4byte 0x00000974
_080A553C:
	.4byte 0x00000975
_080A5540:
	.4byte 0x000017AF
_080A5544:
	.4byte 0x00000958
_080A5548:
	.4byte 0x0000096C
_080A554C:
	.4byte gUnknown_0816AAF0
_080A5550:
	.4byte 0x0000096D
_080A5554:
	.4byte 0x00000961
_080A5558:
	.4byte gUnknown_0816AAFC
_080A555C:
	.4byte gUnknown_0816B318
_080A5560:
	.4byte 0x00001732
_080A5564:
	.4byte 0x00000968
_080A5568:
	.4byte 0x000017E2
_080A556C:
	.4byte gUnknown_08169774
_080A5570:
	.4byte 0x0000CFFF
_080A5574:
	.4byte 0x000017EE
_080A5578:
	.4byte 0x00003FFF
_080A557C:
	.4byte 0x000017D6
_080A5580:
	.4byte 0x0000F1FF
_080A5584:
	.4byte gUnknown_03003E68
_080A5588:
	.4byte 0x000001FF
_080A558C:
	.4byte 0xFFFFFE00
	THUMB_FUNC_END sub_080A5290


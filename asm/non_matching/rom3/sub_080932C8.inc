	THUMB_FUNC_START sub_080932C8
sub_080932C8: @ 0x080932C8
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r2, _08093418  @ =gRam
	mov r0, #182
	lsl r0, r0, #5
	add r3, r2, r0
	ldrh r1, [r3]
	ldr r4, _0809341C  @ =0x000016D8
	add r0, r2, r4
	strh r1, [r0]
	ldr r0, _08093420  @ =0x000016EC
	add r1, r2, r0
	ldrb r0, [r3]
	ldrb r1, [r1]
	sub r0, r0, r1
	sub r4, r4, #2
	add r1, r2, r4
	strb r0, [r1]
	add r4, r2, #0
	add r6, r3, #0
	ldr r0, _08093424  @ =0x000017D0
	add r0, r0, r4
	mov r8, r0
	ldr r7, _08093428  @ =gUnknown_08167CD8
_080932FA:
	ldr r1, _0809342C  @ =0x00001726
	add r5, r4, r1
	ldrb r1, [r5]
	lsl r1, r1, #25
	lsr r0, r1, #24
	add r1, r0, #0
	add r1, r1, r7
	ldrh r1, [r1]
	ldrh r2, [r6]
	add r1, r1, r2
	strh r1, [r6]
	bl sub_0809EA40
	ldr r3, _08093430  @ =0x000017D2
	add r0, r4, r3
	ldrb r1, [r0]
	ldr r2, _08093434  @ =0x00001714
	add r0, r4, r2
	ldrb r0, [r0]
	orr r1, r1, r0
	add r3, r3, #26
	add r0, r4, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	add r2, r2, #212
	add r0, r4, r2
	ldrb r0, [r0]
	orr r1, r1, r0
	mov r3, r8
	ldrb r0, [r3]
	orr r1, r1, r0
	mov r0, #7
	and r1, r1, r0
	cmp r1, #7
	bne _080932FA
	add r2, r4, #0
	ldr r4, _08093424  @ =0x000017D0
	add r0, r2, r4
	ldrh r0, [r0]
	and r1, r1, r0
	cmp r1, #0
	beq _0809338C
	ldr r1, _08093438  @ =0x000017D4
	add r0, r2, r1
	mov r4, #0
	mov r1, #1
	strb r1, [r0]
	ldr r3, _0809343C  @ =0x00001702
	add r2, r2, r3
	ldrb r0, [r2]
	cmp r0, #4
	beq _08093366
	mov r0, #2
	strb r0, [r2]
_08093366:
	add r0, r5, #0
	sub r0, r0, #90
	ldrb r1, [r0]
	add r0, r5, #0
	add r0, r0, #168
	strb r1, [r0]
	sub r0, r0, #126
	strb r4, [r0]
	add r0, r0, #143
	strb r4, [r0]
	sub r0, r0, #41
	strb r4, [r0]
	bl sub_08092B0C
	add r0, r5, #0
	add r0, r0, #226
	strb r4, [r0]
	sub r0, r0, #239
	strb r4, [r0]
_0809338C:
	ldr r3, _08093418  @ =gRam
	ldr r4, _08093434  @ =0x00001714
	add r0, r3, r4
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _080933B4
	ldr r0, _08093440  @ =0x00001717
	add r1, r3, r0
	mov r2, #0
	mov r0, #9
	strb r0, [r1]
	ldr r1, _08093444  @ =0x00001715
	add r0, r3, r1
	strb r2, [r0]
	ldr r2, _08093448  @ =0x00001716
	add r1, r3, r2
	mov r0, #1
	strb r0, [r1]
_080933B4:
	ldr r4, _0809342C  @ =0x00001726
	add r0, r3, r4
	ldrb r0, [r0]
	lsl r0, r0, #25
	mov r1, #182
	lsl r1, r1, #5
	add r2, r3, r1
	ldr r1, _0809344C  @ =gUnknown_08167CDC
	lsr r0, r0, #24
	add r0, r0, r1
	ldrh r0, [r0]
	ldrh r1, [r2]
	add r4, r0, r1
	strh r4, [r2]
	ldr r2, _08093420  @ =0x000016EC
	add r0, r3, r2
	strh r4, [r0]
	ldr r0, _08093450  @ =0x000016F8
	add r1, r3, r0
	mov r0, #1
	strb r0, [r1]
	ldr r1, _08093454  @ =0x000016C8
	add r5, r3, r1
	ldrb r1, [r5]
	cmp r1, #239
	bls _080933EA
	mov r1, #0
_080933EA:
	mov r0, #150
	lsl r0, r0, #4
	add r2, r3, r0
	strb r1, [r2]
	add r0, r0, #1
	add r1, r3, r0
	mov r0, #0
	strb r0, [r1]
	ldr r1, _0809341C  @ =0x000016D8
	add r0, r3, r1
	ldrh r0, [r0]
	sub r0, r4, r0
	ldrh r2, [r2]
	add r0, r0, r2
	ldr r2, _08093458  @ =0x000017F6
	add r1, r3, r2
	strh r0, [r1]
	strh r0, [r5]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_08093418:
	.4byte gRam
_0809341C:
	.4byte 0x000016D8
_08093420:
	.4byte 0x000016EC
_08093424:
	.4byte 0x000017D0
_08093428:
	.4byte gUnknown_08167CD8
_0809342C:
	.4byte 0x00001726
_08093430:
	.4byte 0x000017D2
_08093434:
	.4byte 0x00001714
_08093438:
	.4byte 0x000017D4
_0809343C:
	.4byte 0x00001702
_08093440:
	.4byte 0x00001717
_08093444:
	.4byte 0x00001715
_08093448:
	.4byte 0x00001716
_0809344C:
	.4byte gUnknown_08167CDC
_08093450:
	.4byte 0x000016F8
_08093454:
	.4byte 0x000016C8
_08093458:
	.4byte 0x000017F6
	THUMB_FUNC_END sub_080932C8


	.ALIGN 2, 0
	.GLOBAL sub_080A74BC
	.THUMB
	.THUMB_FUNC
	.TYPE sub_080A74BC, function
sub_080A74BC:
push {lr}
	ldr r0, _080A74D8  @ =gBow
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A7500
	cmp r0, #2
	bhi _080A74E0
	mov r1, #2
	ldr r0, _080A74DC  @ =gArrowCount
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A74FC
	mov r1, #1
	b _080A74FC
_080A74D8:
	.4byte gBow
_080A74DC:
	.4byte gArrowCount
_080A74E0:
	ldr r1, _080A755C  @ =gUnknown_0200B198
	ldr r2, _080A7560  @ =0x00008086
	add r0, r2, #0
	strh r0, [r1]
	add r1, r1, #2
	ldr r3, _080A7564  @ =0x00008087
	add r0, r3, #0
	strh r0, [r1]
	mov r1, #4
	ldr r0, _080A7568  @ =gArrowCount
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A74FC
	mov r1, #3
_080A74FC:
	ldr r0, _080A756C  @ =gBow
	strb r1, [r0]
_080A7500:
	ldr r0, _080A7570  @ =gRam
	ldr r2, _080A7574  @ =0x00000A4E
	add r1, r0, r2
	ldrb r1, [r1]
	lsl r1, r1, #24
	asr r1, r1, #24
	ldr r3, _080A7578  @ =0x00000A4F
	add r0, r0, r3
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	add r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	add r2, r1, #0
	cmp r1, #0
	beq _080A7556
	ldr r3, _080A757C  @ =gUnknown_0200231F
	add r0, r1, r3
	ldrb r3, [r0]
	cmp r1, #4
	bne _080A7530
	mov r3, #1
_080A7530:
	ldr r1, _080A7580  @ =gUnknown_0816B5A8
	sub r0, r2, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r0, [r0]
	ldr r2, _080A7584  @ =gUnknown_0200B1F8
	lsl r1, r3, #3
	add r1, r1, r0
	ldrh r0, [r1]
	strh r0, [r2]
	add r2, r2, #2
	ldrh r0, [r1, #2]
	strh r0, [r2]
	add r2, r2, #62
	ldrh r0, [r1, #4]
	strh r0, [r2]
	add r2, r2, #2
	ldrh r0, [r1, #6]
	strh r0, [r2]
_080A7556:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A755C:
	.4byte gUnknown_0200B198
_080A7560:
	.4byte 0x00008086
_080A7564:
	.4byte 0x00008087
_080A7568:
	.4byte gArrowCount
_080A756C:
	.4byte gBow
_080A7570:
	.4byte gRam
_080A7574:
	.4byte 0x00000A4E
_080A7578:
	.4byte 0x00000A4F
_080A757C:
	.4byte gUnknown_0200231F
_080A7580:
	.4byte gUnknown_0816B5A8
_080A7584:
	.4byte gUnknown_0200B1F8

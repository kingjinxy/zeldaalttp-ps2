	THUMB_FUNC_START sub_080AA4F8
sub_080AA4F8: @ 0x080AA4F8
	push {r4,r5,lr}
	ldr r2, _080AA52C  @ =gRam
	ldr r0, _080AA530  @ =0x00000A53
	add r1, r2, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080AA534  @ =0x00000534
	add r0, r2, r1
	ldrh r3, [r0]
	mov r0, #7
	and r0, r0, r3
	cmp r0, #0
	beq _080AA540
	ldr r4, _080AA538  @ =0x00000A4C
	add r0, r2, r4
	ldrh r1, [r0]
	add r1, r1, #1
	strh r1, [r0]
	ldr r5, _080AA53C  @ =0x00000504
	add r1, r2, r5
	mov r0, #68
	bl sub_0812A324
	b _080AA66E
	.byte 0x00
	.byte 0x00
_080AA52C:
	.4byte gRam
_080AA530:
	.4byte 0x00000A53
_080AA534:
	.4byte 0x00000534
_080AA538:
	.4byte 0x00000A4C
_080AA53C:
	.4byte 0x00000504
_080AA540:
	ldr r0, _080AA57C  @ =0x00000A4E
	add r4, r2, r0
	mov r1, #0
	ldrsb r1, [r4, r1]
	mov r5, #150
	lsl r5, r5, #4
	add r0, r2, r5
	strh r1, [r0]
	add r1, r3, #0
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	beq _080AA59C
	add r2, r4, #0
	mov r5, #5
	neg r5, r5
	mov r4, #24
	ldr r3, _080AA580  @ =gUnknown_0200231F
_080AA564:
	ldrb r1, [r2]
	sub r0, r1, #6
	strb r0, [r2]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bgt _080AA58A
	cmp r0, r5
	bne _080AA584
	strb r4, [r2]
	b _080AA58A
	.byte 0x00
	.byte 0x00
_080AA57C:
	.4byte 0x00000A4E
_080AA580:
	.4byte gUnknown_0200231F
_080AA584:
	add r0, r1, #0
	add r0, r0, #17
	strb r0, [r2]
_080AA58A:
	mov r0, #0
	ldrsb r0, [r2, r0]
	add r0, r0, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080AA564
	bl sub_080A9FCC
	b _080AA640
_080AA59C:
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080AA5DC
	add r2, r4, #0
	mov r4, #1
	ldr r3, _080AA5C0  @ =gUnknown_0200231F
_080AA5AA:
	ldrb r1, [r2]
	add r0, r1, #6
	strb r0, [r2]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #24
	ble _080AA5CA
	cmp r0, #30
	bne _080AA5C4
	strb r4, [r2]
	b _080AA5CA
_080AA5C0:
	.4byte gUnknown_0200231F
_080AA5C4:
	add r0, r1, #0
	sub r0, r0, #17
	strb r0, [r2]
_080AA5CA:
	mov r0, #0
	ldrsb r0, [r2, r0]
	add r0, r0, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080AA5AA
	bl sub_080A9FCC
	b _080AA640
_080AA5DC:
	mov r0, #32
	and r0, r0, r1
	cmp r0, #0
	beq _080AA610
	add r2, r4, #0
	ldr r3, _080AA60C  @ =gUnknown_0200231F
_080AA5E8:
	ldrb r1, [r2]
	sub r0, r1, #1
	strb r0, [r2]
	lsl r0, r0, #24
	cmp r0, #0
	bgt _080AA5FA
	add r0, r1, #0
	add r0, r0, #23
	strb r0, [r2]
_080AA5FA:
	mov r0, #0
	ldrsb r0, [r2, r0]
	add r0, r0, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080AA5E8
	bl sub_080A9FCC
	b _080AA640
_080AA60C:
	.4byte gUnknown_0200231F
_080AA610:
	mov r0, #16
	and r0, r0, r3
	cmp r0, #0
	beq _080AA640
	add r2, r4, #0
	ldr r3, _080AA674  @ =gUnknown_0200231F
_080AA61C:
	ldrb r1, [r2]
	add r0, r1, #1
	strb r0, [r2]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #24
	ble _080AA630
	add r0, r1, #0
	sub r0, r0, #23
	strb r0, [r2]
_080AA630:
	mov r0, #0
	ldrsb r0, [r2, r0]
	add r0, r0, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080AA61C
	bl sub_080A9FCC
_080AA640:
	ldr r3, _080AA678  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r0, r3, r1
	ldr r2, _080AA67C  @ =0x00000A4E
	add r1, r3, r2
	mov r4, #0
	ldrsh r2, [r0, r4]
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r2, r0
	beq _080AA66A
	ldr r5, _080AA680  @ =0x00000A53
	add r0, r3, r5
	mov r1, #16
	strb r1, [r0]
	ldr r0, _080AA684  @ =0x00000504
	add r1, r3, r0
	mov r0, #69
	bl sub_0812A324
_080AA66A:
	bl sub_080AA3EC
_080AA66E:
	pop {r4,r5}
	pop {r0}
	bx r0
_080AA674:
	.4byte gUnknown_0200231F
_080AA678:
	.4byte gRam
_080AA67C:
	.4byte 0x00000A4E
_080AA680:
	.4byte 0x00000A53
_080AA684:
	.4byte 0x00000504
	THUMB_FUNC_END sub_080AA4F8


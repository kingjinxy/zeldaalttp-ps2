	THUMB_FUNC_START sub_080494B8
sub_080494B8: @ 0x080494B8
	push {r4,r5,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldr r1, [r0, #112]
	str r1, [r7, #4]
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	ldr r0, _080494D4  @ =0x0000FFFF
	cmp r1, r0
	bne _080494D8
	b _080496D2
	.byte 0x00
	.byte 0x00
_080494D4:
	.4byte 0x0000FFFF
_080494D8:
	ldr r1, [r7]
	ldr r0, [r7, #4]
	ldrh r2, [r0]
	add r0, r2, #0
	add r2, r1, #0
	add r1, r1, #116
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	add r1, r7, #4
	ldr r2, [r1]
	ldrh r0, [r2]
	add r2, r2, #2
	str r2, [r1]
	cmp r0, #1
	beq _08049580
	cmp r0, #1
	bgt _0804950A
	cmp r0, #0
	beq _08049518
	b _080496CC
_0804950A:
	cmp r0, #2
	bne _08049510
	b _0804964C
_08049510:
	cmp r0, #3
	bne _08049516
	b _080496AC
_08049516:
	b _080496CC
_08049518:
	ldr r2, [r7]
	add r0, r7, #4
	ldr r1, [r0]
	add r3, r2, #0
	add r2, r2, #120
	ldrh r3, [r2]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	ldrh r3, [r1]
	orr r4, r4, r3
	add r3, r4, #0
	strh r3, [r2]
	add r1, r1, #2
	str r1, [r0]
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	ldr r0, _0804957C  @ =0x0000FFFF
	cmp r1, r0
	beq _08049548
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrh r2, [r1]
	str r2, [r0, #12]
_08049548:
	ldr r0, [r7, #4]
	add r1, r0, #2
	str r1, [r7, #4]
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	ldr r0, _0804957C  @ =0x0000FFFF
	cmp r1, r0
	beq _08049572
	ldr r1, [r7]
	ldr r0, [r7, #4]
	ldrh r2, [r0]
	add r0, r2, #0
	add r2, r1, #0
	add r1, r1, #43
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
_08049572:
	ldr r0, [r7, #4]
	add r1, r0, #2
	str r1, [r7, #4]
	b _080496CC
	.byte 0x00
	.byte 0x00
_0804957C:
	.4byte 0x0000FFFF
_08049580:
	ldr r2, [r7]
	add r0, r7, #4
	ldr r1, [r0]
	add r3, r2, #0
	add r2, r2, #122
	ldrh r3, [r2]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	ldrh r3, [r1]
	orr r4, r4, r3
	add r3, r4, #0
	strh r3, [r2]
	add r1, r1, #2
	str r1, [r0]
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	ldr r0, _08049648  @ =0x0000FFFF
	cmp r1, r0
	beq _080495B0
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrh r2, [r1]
	str r2, [r0, #12]
_080495B0:
	ldr r0, [r7, #4]
	add r1, r0, #2
	str r1, [r7, #4]
	ldr r3, [r7]
	add r0, r7, #4
	ldr r1, [r0]
	ldrh r4, [r1]
	add r2, r4, #0
	add r4, r3, #0
	add r3, r3, #117
	ldrb r4, [r3]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	orr r2, r2, r5
	add r4, r2, #0
	strb r4, [r3]
	add r1, r1, #2
	str r1, [r0]
	ldr r3, [r7]
	add r0, r7, #4
	ldr r1, [r0]
	ldrh r4, [r1]
	add r2, r4, #0
	add r4, r3, #0
	add r3, r3, #118
	ldrb r4, [r3]
	mov r5, #0
	and r4, r4, r5
	add r5, r4, #0
	orr r2, r2, r5
	add r4, r2, #0
	strb r4, [r3]
	add r1, r1, #2
	str r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #43
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #117
	ldrb r1, [r1]
	ldrb r2, [r3]
	add r1, r1, r2
	add r2, r1, #0
	mov r3, #31
	add r1, r2, #0
	and r1, r1, r3
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #122
	add r2, r0, #0
	add r0, r0, #120
	ldrh r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrh r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0]
	b _080496CC
	.byte 0x00
	.byte 0x00
_08049648:
	.4byte 0x0000FFFF
_0804964C:
	ldr r0, [r7]
	ldr r2, [r7, #4]
	ldrh r1, [r2]
	ldr r3, [r7, #4]
	add r2, r3, #2
	ldrh r3, [r2]
	lsl r2, r3, #16
	add r1, r1, r2
	str r1, [r0, #16]
	ldr r0, [r7, #4]
	add r1, r0, #4
	str r1, [r7, #4]
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	ldr r0, _080496A8  @ =0x0000FFFF
	cmp r1, r0
	beq _08049676
	ldr r0, [r7]
	ldr r1, [r7, #4]
	ldrh r2, [r1]
	str r2, [r0, #12]
_08049676:
	ldr r0, [r7, #4]
	add r1, r0, #2
	str r1, [r7, #4]
	ldr r0, [r7, #4]
	ldrh r1, [r0]
	ldr r0, _080496A8  @ =0x0000FFFF
	cmp r1, r0
	beq _080496A0
	ldr r1, [r7]
	ldr r0, [r7, #4]
	ldrh r2, [r0]
	add r0, r2, #0
	add r2, r1, #0
	add r1, r1, #43
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
_080496A0:
	ldr r0, [r7, #4]
	add r1, r0, #2
	str r1, [r7, #4]
	b _080496CC
_080496A8:
	.4byte 0x0000FFFF
_080496AC:
	ldr r2, [r7]
	add r0, r7, #4
	ldr r1, [r0]
	add r3, r2, #0
	add r2, r2, #120
	ldrh r3, [r2]
	mov r4, #0
	and r3, r3, r4
	add r4, r3, #0
	ldrh r3, [r1]
	orr r4, r4, r3
	add r3, r4, #0
	strh r3, [r2]
	add r1, r1, #2
	str r1, [r0]
	b _080496CC
_080496CC:
	ldr r0, [r7]
	ldr r1, [r7, #4]
	str r1, [r0, #112]
_080496D2:
	add sp, sp, #8
	pop {r4,r5,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080494B8

	.byte 0x00
	.byte 0x00

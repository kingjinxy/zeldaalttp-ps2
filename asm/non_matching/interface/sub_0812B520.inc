	THUMB_FUNC_START sub_0812B520
sub_0812B520: @ 0x0812B520
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	mov r0, #0
	mov r10, r0
_0812B52E:
	mov r1, r10
	lsl r0, r1, #4
	sub r0, r0, r1
	lsl r0, r0, #3
	ldr r1, _0812B56C  @ =gUnknown_03001AA8
	add r4, r0, r1
	ldrb r0, [r4, #1]
	cmp r0, #1
	bne _0812B54C
	ldrh r0, [r4, #24]
	cmp r0, #0
	bne _0812B54C
	add r0, r4, #0
	bl sub_0812B980
_0812B54C:
	ldrb r0, [r4, #1]
	cmp r0, #0
	bne _0812B554
	b _0812B794
_0812B554:
	cmp r0, #1
	bne _0812B57A
	add r0, r4, #0
	bl sub_0812B194
	add r6, r0, #0
	str r6, [r4, #16]
	ldrb r0, [r4, #27]
	cmp r0, #0
	beq _0812B570
	ldrb r0, [r4, #28]
	b _0812B576
_0812B56C:
	.4byte gUnknown_03001AA8
_0812B570:
	ldr r0, [r4, #4]
	add r0, r0, #75
	ldrb r0, [r0]
_0812B576:
	mov r8, r0
	b _0812B580
_0812B57A:
	ldr r6, [r4, #16]
	ldrb r2, [r4, #28]
	mov r8, r2
_0812B580:
	mov r0, #64
	mov r3, r8
	eor r0, r0, r3
	neg r1, r0
	orr r1, r1, r0
	lsr r1, r1, #31
	add r0, r4, #0
	bl sub_0812B088
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r0, _0812B5C4  @ =0x04000081
	mov r12, r0
	ldrb r0, [r4]
	sub r0, r0, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	mov r9, r3
	mov r5, #17
	lsl r5, r5, r3
	mvn r0, r5
	lsl r0, r0, #24
	lsr r2, r0, #24
	add r1, r2, #0
	mov r0, r8
	cmp r0, #64
	bne _0812B5C8
	mov r3, r12
	ldrb r1, [r3]
	add r0, r2, #0
	and r0, r0, r1
	orr r0, r0, r5
	strb r0, [r3]
	b _0812B5F2
_0812B5C4:
	.4byte 0x04000081
_0812B5C8:
	mov r0, r8
	cmp r0, #63
	bhi _0812B5E2
	mov r1, r12
	ldrb r0, [r1]
	add r1, r2, #0
	and r1, r1, r0
	mov r0, #16
	lsl r0, r0, r3
	orr r1, r1, r0
	mov r2, r12
	strb r1, [r2]
	b _0812B5F2
_0812B5E2:
	mov r3, r12
	ldrb r0, [r3]
	and r1, r1, r0
	mov r0, #1
	mov r2, r9
	lsl r0, r0, r2
	orr r1, r1, r0
	strb r1, [r3]
_0812B5F2:
	ldrb r5, [r4, #1]
	cmp r5, #1
	bne _0812B61C
	ldr r0, [r4, #96]
	cmp r0, #0
	bne _0812B610
	add r0, r4, #0
	add r1, r7, #0
	bl sub_0812BB04
	str r5, [r4, #96]
	ldrh r0, [r4, #24]
	sub r0, r0, #1
	strh r0, [r4, #24]
	b _0812B794
_0812B610:
	add r0, r0, #1
	str r0, [r4, #96]
	ldrh r0, [r4, #24]
	sub r0, r0, #1
	strh r0, [r4, #24]
	b _0812B66C
_0812B61C:
	ldrb r0, [r4]
	cmp r0, #3
	bne _0812B66C
	add r0, r4, #0
	add r0, r0, #88
	ldrb r0, [r0]
	add r0, r0, #230
	ldr r1, [r4, #20]
	mul r0, r1, r0
	lsr r0, r0, #9
	str r0, [r4, #20]
	add r1, r0, #0
	mov r3, r8
	cmp r3, #64
	beq _0812B63C
	lsl r1, r1, #1
_0812B63C:
	lsl r0, r1, #2
	add r1, r0, r1
	lsr r1, r1, #7
	cmp r1, #0
	beq _0812B664
	cmp r1, #4
	bls _0812B64C
	mov r1, #4
_0812B64C:
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r2, _0812B65C  @ =0x04000073
	ldr r0, _0812B660  @ =gUnknown_08198EC0
	add r1, r1, r0
	ldrb r0, [r1]
	strb r0, [r2]
	b _0812B794
_0812B65C:
	.4byte 0x04000073
_0812B660:
	.4byte gUnknown_08198EC0
_0812B664:
	add r0, r4, #0
	bl sub_0812BA6C
	b _0812B794
_0812B66C:
	ldr r2, [r4, #84]
	ldrb r1, [r2, #1]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _0812B68E
	ldr r0, [r4, #100]
	ldrh r3, [r0]
	ldr r1, [r4, #96]
	cmp r1, r3
	bcs _0812B688
	add r0, r0, r1
	ldrb r5, [r0, #2]
	b _0812B690
_0812B688:
	add r0, r3, r0
	ldrb r5, [r0, #1]
	b _0812B690
_0812B68E:
	mov r5, #255
_0812B690:
	ldrb r0, [r4]
	cmp r0, #2
	beq _0812B6E0
	cmp r0, #2
	bgt _0812B6A0
	cmp r0, #1
	beq _0812B6AA
	b _0812B794
_0812B6A0:
	cmp r0, #3
	beq _0812B720
	cmp r0, #4
	beq _0812B748
	b _0812B794
_0812B6AA:
	cmp r7, #8
	beq _0812B6C8
	ldr r0, _0812B6C0  @ =0x04000063
	strb r7, [r0]
	ldr r1, _0812B6C4  @ =0x04000064
	mov r2, #128
	lsl r2, r2, #8
	add r0, r2, #0
	orr r6, r6, r0
	strh r6, [r1]
	b _0812B6D2
_0812B6C0:
	.4byte 0x04000063
_0812B6C4:
	.4byte 0x04000064
_0812B6C8:
	ldrb r0, [r2, #8]
	cmp r0, #8
	bne _0812B6D2
	ldr r0, _0812B6D8  @ =0x04000064
	strh r6, [r0]
_0812B6D2:
	ldr r2, _0812B6DC  @ =0x04000062
	b _0812B706
	.byte 0x00
	.byte 0x00
_0812B6D8:
	.4byte 0x04000064
_0812B6DC:
	.4byte 0x04000062
_0812B6E0:
	cmp r7, #8
	beq _0812B700
	ldr r0, _0812B6F8  @ =0x04000069
	strb r7, [r0]
	ldr r1, _0812B6FC  @ =0x0400006C
	mov r3, #128
	lsl r3, r3, #8
	add r0, r3, #0
	orr r6, r6, r0
	strh r6, [r1]
	b _0812B704
	.byte 0x00
	.byte 0x00
_0812B6F8:
	.4byte 0x04000069
_0812B6FC:
	.4byte 0x0400006C
_0812B700:
	ldr r0, _0812B718  @ =0x0400006C
	strh r6, [r0]
_0812B704:
	ldr r2, _0812B71C  @ =0x04000068
_0812B706:
	ldrb r1, [r2]
	mov r0, #192
	and r0, r0, r1
	strb r0, [r2]
	cmp r5, #255
	beq _0812B794
	lsl r0, r5, #6
	strb r0, [r2]
	b _0812B794
_0812B718:
	.4byte 0x0400006C
_0812B71C:
	.4byte 0x04000068
_0812B720:
	ldr r0, _0812B740  @ =0x04000074
	ldrh r1, [r0]
	mov r3, #128
	lsl r3, r3, #7
	add r2, r3, #0
	and r1, r1, r2
	orr r1, r1, r6
	strh r1, [r0]
	cmp r7, #8
	beq _0812B794
	sub r0, r0, #1
	ldr r1, _0812B744  @ =gUnknown_08198EC0
	add r1, r7, r1
	ldrb r1, [r1]
	strb r1, [r0]
	b _0812B794
_0812B740:
	.4byte 0x04000074
_0812B744:
	.4byte gUnknown_08198EC0
_0812B748:
	cmp r7, #8
	beq _0812B756
	ldr r0, _0812B774  @ =0x04000079
	strb r7, [r0]
	ldr r1, _0812B778  @ =0x0400007D
	mov r0, #128
	strb r0, [r1]
_0812B756:
	cmp r5, #255
	beq _0812B780
	ldr r4, _0812B77C  @ =0x0400007C
	lsl r0, r6, #16
	lsr r0, r0, #16
	bl sub_0812AED0
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r5, #0
	beq _0812B770
	mov r0, #8
	orr r1, r1, r0
_0812B770:
	strb r1, [r4]
	b _0812B794
_0812B774:
	.4byte 0x04000079
_0812B778:
	.4byte 0x0400007D
_0812B77C:
	.4byte 0x0400007C
_0812B780:
	lsl r0, r6, #16
	lsr r0, r0, #16
	bl sub_0812AED0
	ldr r3, _0812B7B0  @ =0x0400007C
	ldrb r2, [r3]
	mov r1, #8
	and r1, r1, r2
	orr r1, r1, r0
	strb r1, [r3]
_0812B794:
	mov r0, #1
	add r10, r10, r0
	mov r1, r10
	cmp r1, #3
	bgt _0812B7A0
	b _0812B52E
_0812B7A0:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0812B7B0:
	.4byte 0x0400007C
	THUMB_FUNC_END sub_0812B520


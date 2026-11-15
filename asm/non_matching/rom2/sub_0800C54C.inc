	THUMB_FUNC_START sub_0800C54C
sub_0800C54C: @ 0x0800C54C
	push {r4-r7,lr}
	mov r12, r0
	ldr r5, _0800C568  @ =0x04000128
	ldr r6, [r5]
	ldr r0, _0800C56C  @ =gUnknown_02030790
	ldrb r2, [r0, #1]
	add r7, r0, #0
	cmp r2, #1
	beq _0800C5CA
	cmp r2, #1
	bgt _0800C570
	cmp r2, #0
	beq _0800C576
	b _0800C602
_0800C568:
	.4byte 0x04000128
_0800C56C:
	.4byte gUnknown_02030790
_0800C570:
	cmp r2, #2
	beq _0800C5FC
	b _0800C602
_0800C576:
	ldr r0, [r7, #24]
	cmp r0, #13
	bne _0800C5C6
	mov r0, #136
	add r4, r6, #0
	and r4, r4, r0
	cmp r4, #8
	bne _0800C602
	mov r1, #4
	add r0, r6, #0
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #0
	bne _0800C5C6
	ldr r3, _0800C5E0  @ =0x04000208
	strh r0, [r3]
	ldr r2, _0800C5E4  @ =0x04000200
	ldrh r1, [r2]
	ldr r0, _0800C5E8  @ =0x0000FF7F
	and r0, r0, r1
	strh r0, [r2]
	ldrh r0, [r2]
	mov r1, #64
	orr r0, r0, r1
	strh r0, [r2]
	mov r0, #1
	strh r0, [r3]
	ldrb r1, [r5, #1]
	mov r0, #65
	neg r0, r0
	and r0, r0, r1
	strb r0, [r5, #1]
	ldr r1, _0800C5EC  @ =0x0400010C
	ldr r0, _0800C5F0  @ =0x0000B72F
	str r0, [r1]
	add r1, r1, #246
	mov r0, #192
	strh r0, [r1]
	strb r4, [r7]
_0800C5C6:
	mov r0, #1
	strb r0, [r7, #1]
_0800C5CA:
	ldr r1, _0800C5F4  @ =gUnknown_02030790
	ldrb r0, [r1, #2]
	cmp r0, #0
	beq _0800C5FC
	ldrb r0, [r1, #8]
	cmp r0, #7
	bhi _0800C5F8
	add r0, r0, #1
	strb r0, [r1, #8]
	b _0800C5FC
	.byte 0x00
	.byte 0x00
_0800C5E0:
	.4byte 0x04000208
_0800C5E4:
	.4byte 0x04000200
_0800C5E8:
	.4byte 0x0000FF7F
_0800C5EC:
	.4byte 0x0400010C
_0800C5F0:
	.4byte 0x0000B72F
_0800C5F4:
	.4byte gUnknown_02030790
_0800C5F8:
	mov r0, #2
	strb r0, [r1, #1]
_0800C5FC:
	mov r0, r12
	bl sub_0800C6A8
_0800C602:
	ldr r1, _0800C620  @ =gUnknown_02030790
	ldrb r0, [r1, #11]
	add r0, r0, #1
	strb r0, [r1, #11]
	ldrb r3, [r1, #3]
	ldrb r0, [r1, #2]
	lsl r2, r0, #8
	ldrb r0, [r1]
	add r7, r1, #0
	cmp r0, #8
	bne _0800C624
	mov r0, #128
	orr r0, r0, r2
	orr r0, r0, r3
	b _0800C628
_0800C620:
	.4byte gUnknown_02030790
_0800C624:
	add r0, r3, #0
	orr r0, r0, r2
_0800C628:
	add r2, r0, #0
	ldrb r0, [r7, #7]
	cmp r0, #0
	beq _0800C636
	mov r0, #128
	lsl r0, r0, #5
	orr r2, r2, r0
_0800C636:
	ldrb r0, [r7, #8]
	lsr r0, r0, #3
	lsl r1, r0, #15
	lsl r0, r6, #26
	lsr r0, r0, #30
	cmp r0, #3
	bls _0800C64E
	mov r0, #128
	lsl r0, r0, #6
	orr r0, r0, r1
	orr r0, r0, r2
	b _0800C652
_0800C64E:
	add r0, r2, #0
	orr r0, r0, r1
_0800C652:
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0800C54C


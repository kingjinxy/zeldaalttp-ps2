	THUMB_FUNC_START sub_080B8620
sub_080B8620: @ 0x080B8620
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	mov r4, #0
	mov r6, #0
	ldr r0, _080B8710  @ =gRam
	mov r12, r0
	ldr r2, _080B8714  @ =0x00000FC2
	add r2, r2, r12
_080B8636:
	add r1, r6, r2
	ldrb r0, [r1]
	cmp r0, #0
	beq _080B8642
	sub r0, r0, #1
	strb r0, [r1]
_080B8642:
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r6, #15
	bls _080B8636
	mov r5, r12
	ldr r1, _080B8718  @ =0x000009AD
	add r0, r5, r1
	ldrb r1, [r0]
	mov r0, #254
	and r0, r0, r1
	lsl r2, r0, #24
	lsr r6, r2, #24
	ldr r7, _080B871C  @ =0x000016D6
	add r7, r7, r5
	mov r10, r7
	mov r0, #0
	strb r0, [r7]
	ldr r1, _080B8720  @ =0x000016D7
	add r1, r1, r5
	mov r8, r1
	strb r0, [r1]
	ldr r7, _080B8724  @ =0x00000A02
	add r0, r5, r7
	ldrb r3, [r0]
	ldr r1, _080B8728  @ =0x00000A03
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r3, r3, r0
	cmp r3, #63
	bls _080B876E
	mov r7, #1
	mov r9, r7
	add r0, r3, #0
	mov r1, r9
	and r0, r0, r1
	cmp r0, #0
	bne _080B876E
	ldr r7, _080B872C  @ =0x00000958
	add r0, r5, r7
	mov r7, #0
	ldrsh r1, [r0, r7]
	ldr r0, _080B8730  @ =gUnknown_08170820
	add r2, r6, #0
	add r0, r2, r0
	ldrh r0, [r0]
	cmp r1, r0
	beq _080B86B2
	ldr r0, _080B8734  @ =gUnknown_081708B8
	add r0, r2, r0
	ldrh r0, [r0]
	mov r1, r10
	strb r0, [r1]
	mov r0, #1
	orr r4, r4, r0
_080B86B2:
	ldr r7, _080B8738  @ =0x00000952
	add r0, r5, r7
	mov r7, #0
	ldrsh r1, [r0, r7]
	ldr r0, _080B873C  @ =gUnknown_0817086C
	add r0, r2, r0
	ldrh r0, [r0]
	cmp r1, r0
	beq _080B86D6
	ldr r0, _080B8740  @ =gUnknown_08170904
	add r0, r2, r0
	ldrh r0, [r0]
	mov r1, r8
	strb r0, [r1]
	mov r0, #2
	orr r4, r4, r0
	lsl r0, r4, #24
	lsr r4, r0, #24
_080B86D6:
	ldr r7, _080B8744  @ =0x000009DA
	add r0, r5, r7
	ldrh r1, [r0]
	ldr r0, _080B8748  @ =0x00001018
	cmp r1, r0
	bne _080B8750
	mov r2, #3
	and r2, r2, r3
	cmp r2, #2
	bne _080B876E
	add r0, r4, #0
	mov r1, r9
	and r0, r0, r1
	cmp r0, #0
	beq _080B86FE
	sub r7, r7, #124
	add r1, r5, r7
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_080B86FE:
	and r4, r4, r2
	cmp r4, #0
	beq _080B876E
	ldr r0, _080B874C  @ =0x0000095C
	add r1, r5, r0
	ldrh r0, [r1]
	add r0, r0, #1
	b _080B876C
	.byte 0x00
	.byte 0x00
_080B8710:
	.4byte gRam
_080B8714:
	.4byte 0x00000FC2
_080B8718:
	.4byte 0x000009AD
_080B871C:
	.4byte 0x000016D6
_080B8720:
	.4byte 0x000016D7
_080B8724:
	.4byte 0x00000A02
_080B8728:
	.4byte 0x00000A03
_080B872C:
	.4byte 0x00000958
_080B8730:
	.4byte gUnknown_08170820
_080B8734:
	.4byte gUnknown_081708B8
_080B8738:
	.4byte 0x00000952
_080B873C:
	.4byte gUnknown_0817086C
_080B8740:
	.4byte gUnknown_08170904
_080B8744:
	.4byte 0x000009DA
_080B8748:
	.4byte 0x00001018
_080B874C:
	.4byte 0x0000095C
_080B8750:
	ldr r0, _080B87C8  @ =0x00001008
	cmp r1, r0
	bne _080B876E
	mov r0, #3
	and r0, r0, r3
	cmp r0, #2
	bne _080B876E
	and r4, r4, r0
	cmp r4, #0
	beq _080B876E
	ldr r1, _080B87CC  @ =0x0000095C
	add r1, r1, r12
	ldrh r0, [r1]
	sub r0, r0, #1
_080B876C:
	strh r0, [r1]
_080B876E:
	bl sub_080BAE8C
	ldr r1, _080B87D0  @ =gUnknown_08170788
	lsr r0, r6, #1
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r6, #0
	bl _call_via_r1
	bl sub_080B8960
	ldr r2, _080B87D4  @ =gRam
	ldr r1, _080B87D8  @ =0x000009DA
	add r0, r2, r1
	ldrh r1, [r0]
	ldr r0, _080B87DC  @ =0x00001804
	cmp r1, r0
	bne _080B87B6
	ldr r7, _080B87E0  @ =0x00000996
	add r0, r2, r7
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #0
	bne _080B87B6
	ldr r0, _080B87E4  @ =0x0000095E
	add r1, r2, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	sub r7, r7, #58
	add r1, r2, r7
	ldrh r0, [r1]
	sub r0, r0, #1
	strh r0, [r1]
_080B87B6:
	bl sub_0812FA28
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080B87C8:
	.4byte 0x00001008
_080B87CC:
	.4byte 0x0000095C
_080B87D0:
	.4byte gUnknown_08170788
_080B87D4:
	.4byte gRam
_080B87D8:
	.4byte 0x000009DA
_080B87DC:
	.4byte 0x00001804
_080B87E0:
	.4byte 0x00000996
_080B87E4:
	.4byte 0x0000095E
	THUMB_FUNC_END sub_080B8620


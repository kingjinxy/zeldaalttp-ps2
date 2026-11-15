	THUMB_FUNC_START sub_0809C554
sub_0809C554: @ 0x0809C554
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	ldr r4, _0809C594  @ =gRam
	ldr r1, _0809C598  @ =0x00001702
	add r0, r4, r1
	mov r5, #0
	strb r5, [r0]
	sub r1, r1, #10
	add r0, r4, r1
	strb r5, [r0]
	ldr r1, _0809C59C  @ =0x00001805
	add r0, r4, r1
	strb r5, [r0]
	ldr r0, _0809C5A0  @ =0x000016EA
	add r1, r4, r0
	ldrb r0, [r1]
	sub r0, r0, #1
	strb r0, [r1]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #193
	bhi _0809C604
	ldrb r0, [r1]
	cmp r0, #160
	beq _0809C5C8
	cmp r0, #160
	bgt _0809C5A4
	cmp r0, #0
	beq _0809C5AA
	b _0809C60C
	.byte 0x00
	.byte 0x00
_0809C594:
	.4byte gRam
_0809C598:
	.4byte 0x00001702
_0809C59C:
	.4byte 0x00001805
_0809C5A0:
	.4byte 0x000016EA
_0809C5A4:
	cmp r0, #191
	beq _0809C5F4
	b _0809C60C
_0809C5AA:
	mov r0, #4
	mov r1, #41
	mov r2, #0
	bl sub_080ADD38
	ldr r1, _0809C5C0  @ =0x00001770
	add r0, r4, r1
	mov r1, #1
	strb r1, [r0]
	ldr r1, _0809C5C4  @ =0x00001649
	b _0809C608
_0809C5C0:
	.4byte 0x00001770
_0809C5C4:
	.4byte 0x00001649
_0809C5C8:
	ldr r0, _0809C5F0  @ =0x000016C4
	add r5, r4, r0
	ldrh r1, [r5]
	mov r8, r1
	sub r0, r0, #4
	add r4, r4, r0
	ldrh r6, [r4]
	mov r0, #55
	strh r0, [r4]
	mov r0, #214
	lsl r0, r0, #3
	strh r0, [r5]
	mov r0, #0
	mov r1, #24
	bl sub_080ADFC4
	mov r1, r8
	strh r1, [r5]
	strh r6, [r4]
	b _0809C60C
_0809C5F0:
	.4byte 0x000016C4
_0809C5F4:
	ldr r0, _0809C600  @ =0x00001885
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	b _0809C60C
	.byte 0x00
	.byte 0x00
_0809C600:
	.4byte 0x00001885
_0809C604:
	strb r5, [r1]
	ldr r1, _0809C618  @ =0x000016EB
_0809C608:
	add r0, r4, r1
	strb r5, [r0]
_0809C60C:
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809C618:
	.4byte 0x000016EB
	THUMB_FUNC_END sub_0809C554


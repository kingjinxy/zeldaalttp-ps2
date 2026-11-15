	THUMB_FUNC_START sub_080F8434
sub_080F8434: @ 0x080F8434
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r1, r4, #0
	ldr r6, _080F8530  @ =gRam
	ldr r0, _080F8534  @ =0x00000FC2
	add r7, r6, r0
	add r2, r4, r7
	ldrb r0, [r2]
	cmp r0, #0
	beq _080F844C
	b _080F8570
_080F844C:
	ldr r1, _080F8538  @ =0x00000F52
	add r0, r6, r1
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	strb r1, [r0]
	mov r0, #4
	strb r0, [r2]
	mov r0, #107
	add r1, r4, #0
	bl sub_080CA538
	add r5, r0, #0
	cmp r5, #0
	bge _080F846C
	b _080F858E
_080F846C:
	add r0, r4, #0
	mov r1, #88
	bl sub_080CF140
	ldr r2, _080F853C  @ =0x00000F82
	add r0, r6, r2
	add r0, r5, r0
	mov r3, #1
	mov r1, #1
	strb r1, [r0]
	ldr r1, _080F8540  @ =0x00000FB2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r2, [r0]
	mov r4, #150
	lsl r4, r4, #4
	add r1, r6, r4
	ldr r0, _080F8544  @ =gUnknown_08179FB4
	add r0, r2, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _080F8548  @ =gUnknown_08179FB8
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	ldr r4, _080F854C  @ =0x00000EE2
	add r0, r6, r4
	add r0, r5, r0
	strb r1, [r0]
	add r4, r4, #32
	add r0, r6, r4
	add r0, r5, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _080F8550  @ =0x00000964
	add r1, r6, r0
	ldr r0, _080F8554  @ =gUnknown_08179FBC
	add r0, r2, r0
	ldrb r0, [r0]
	ldrh r1, [r1]
	add r1, r1, r0
	ldr r0, _080F8558  @ =gUnknown_08179FC0
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r4, r4, #48
	add r0, r6, r4
	add r0, r5, r0
	strb r1, [r0]
	add r4, r4, #32
	add r0, r6, r4
	add r0, r5, r0
	lsr r1, r1, #8
	strb r1, [r0]
	ldr r0, _080F855C  @ =0x00000F22
	add r1, r6, r0
	add r1, r5, r1
	ldr r0, _080F8560  @ =gUnknown_08179FC4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	add r4, r4, #32
	add r1, r6, r4
	add r1, r5, r1
	ldr r0, _080F8564  @ =gUnknown_08179FC8
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r0, _080F8568  @ =0x00001012
	add r1, r6, r0
	add r1, r5, r1
	ldrb r2, [r1]
	mov r0, #240
	and r0, r0, r2
	orr r0, r0, r3
	strb r0, [r1]
	ldr r2, _080F856C  @ =0x00001032
	add r1, r6, r2
	add r1, r5, r1
	ldrb r0, [r1]
	mov r2, #71
	orr r0, r0, r2
	strb r0, [r1]
	sub r4, r4, #157
	add r1, r6, r4
	add r1, r5, r1
	ldrb r0, [r1]
	mov r2, #68
	orr r0, r0, r2
	strb r0, [r1]
	add r1, r5, r7
	mov r0, #32
	strb r0, [r1]
	b _080F858E
	.byte 0x00
	.byte 0x00
_080F8530:
	.4byte gRam
_080F8534:
	.4byte 0x00000FC2
_080F8538:
	.4byte 0x00000F52
_080F853C:
	.4byte 0x00000F82
_080F8540:
	.4byte 0x00000FB2
_080F8544:
	.4byte gUnknown_08179FB4
_080F8548:
	.4byte gUnknown_08179FB8
_080F854C:
	.4byte 0x00000EE2
_080F8550:
	.4byte 0x00000964
_080F8554:
	.4byte gUnknown_08179FBC
_080F8558:
	.4byte gUnknown_08179FC0
_080F855C:
	.4byte 0x00000F22
_080F8560:
	.4byte gUnknown_08179FC4
_080F8564:
	.4byte gUnknown_08179FC8
_080F8568:
	.4byte 0x00001012
_080F856C:
	.4byte 0x00001032
_080F8570:
	cmp r0, #47
	bls _080F8584
	ldr r1, _080F8580  @ =0x00000F62
	add r0, r6, r1
	add r0, r4, r0
	mov r1, #0
	b _080F858C
	.byte 0x00
	.byte 0x00
_080F8580:
	.4byte 0x00000F62
_080F8584:
	ldr r2, _080F8594  @ =0x00000F62
	add r0, r6, r2
	add r0, r1, r0
	mov r1, #2
_080F858C:
	strb r1, [r0]
_080F858E:
	pop {r4-r7}
	pop {r0}
	bx r0
_080F8594:
	.4byte 0x00000F62
	THUMB_FUNC_END sub_080F8434


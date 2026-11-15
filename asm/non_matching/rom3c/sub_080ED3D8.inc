	THUMB_FUNC_START sub_080ED3D8
sub_080ED3D8: @ 0x080ED3D8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	mov r4, #0
	ldr r3, _080ED470  @ =gRam
	ldr r1, _080ED474  @ =0x00000D5B
	add r0, r3, r1
	add r0, r6, r0
	ldrb r0, [r0]
	add r2, r0, #0
	mov r0, #128
	and r0, r0, r2
	cmp r0, #0
	beq _080ED3FE
	mov r4, #255
_080ED3FE:
	ldr r0, _080ED478  @ =0x00000D16
	add r1, r3, r0
	lsl r0, r4, #8
	orr r0, r0, r2
	ldrh r2, [r1]
	add r0, r0, r2
	mov r2, #0
	strh r0, [r1]
	ldr r4, _080ED47C  @ =0x000015F9
	add r0, r3, r4
	strb r2, [r0]
	mov r12, r3
	add r7, r0, #0
	mov r0, #255
	mov r9, r0
	ldr r1, _080ED480  @ =0x00000D18
	add r1, r1, r12
	mov r8, r1
	mov r2, #128
	lsl r2, r2, #1
	mov r10, r2
_080ED428:
	ldrb r0, [r7]
	lsl r0, r0, #1
	ldr r3, _080ED484  @ =gUnknown_08178696
	add r0, r0, r3
	ldrh r0, [r0]
	ldr r4, _080ED488  @ =gUnknown_03002F46
	ldrh r4, [r4]
	add r0, r0, r4
	lsl r0, r0, #16
	lsr r3, r0, #16
	mov r1, #128
	lsl r1, r1, #16
	add r0, r0, r1
	lsr r5, r0, #16
	add r0, r3, #0
	mov r2, r9
	and r0, r0, r2
	lsl r0, r0, #1
	ldr r4, _080ED48C  @ =gUnknown_08173F38
	add r0, r0, r4
	ldrh r1, [r0]
	add r0, r5, #0
	and r0, r0, r2
	lsl r0, r0, #1
	add r0, r0, r4
	ldrh r4, [r0]
	add r0, r1, #0
	mov r2, #255
	lsl r2, r2, #8
	and r0, r0, r2
	cmp r0, #0
	beq _080ED490
	mov r1, r8
	ldrb r0, [r1]
	b _080ED4AA
	.byte 0x00
	.byte 0x00
_080ED470:
	.4byte gRam
_080ED474:
	.4byte 0x00000D5B
_080ED478:
	.4byte 0x00000D16
_080ED47C:
	.4byte 0x000015F9
_080ED480:
	.4byte 0x00000D18
_080ED484:
	.4byte gUnknown_08178696
_080ED488:
	.4byte gUnknown_03002F46
_080ED48C:
	.4byte gUnknown_08173F38
_080ED490:
	mov r2, r9
	and r1, r1, r2
	mov r2, r8
	ldrb r0, [r2]
	mul r0, r1, r0
	lsl r0, r0, #16
	lsr r2, r0, #24
	lsr r0, r0, #23
	mov r1, #1
	and r0, r0, r1
	add r2, r2, r0
	lsl r2, r2, #24
	lsr r0, r2, #24
_080ED4AA:
	mov r1, r10
	and r3, r3, r1
	cmp r3, #0
	beq _080ED4B8
	lsl r0, r0, #24
	neg r0, r0
	lsr r0, r0, #24
_080ED4B8:
	lsl r0, r0, #24
	asr r0, r0, #8
	lsr r3, r0, #16
	add r0, r4, #0
	mov r2, #255
	lsl r2, r2, #8
	and r0, r0, r2
	cmp r0, #0
	beq _080ED4D0
	mov r4, r8
	ldrb r2, [r4]
	b _080ED4EA
_080ED4D0:
	mov r0, r9
	and r4, r4, r0
	mov r1, r8
	ldrb r0, [r1]
	mul r0, r4, r0
	lsl r0, r0, #16
	lsr r2, r0, #24
	lsr r0, r0, #23
	mov r1, #1
	and r0, r0, r1
	add r2, r2, r0
	lsl r2, r2, #24
	lsr r2, r2, #24
_080ED4EA:
	add r0, r5, #0
	mov r4, r10
	and r0, r0, r4
	cmp r0, #0
	beq _080ED4FA
	lsl r0, r2, #24
	neg r0, r0
	lsr r2, r0, #24
_080ED4FA:
	lsl r0, r2, #24
	asr r0, r0, #24
	lsl r1, r0, #3
	sub r1, r1, r0
	lsl r1, r1, #13
	ldr r0, _080ED578  @ =0x00000D23
	add r0, r0, r12
	add r0, r6, r0
	ldrb r2, [r0]
	add r2, r2, r3
	ldr r0, _080ED57C  @ =0x00000D2B
	add r0, r0, r12
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	ldr r0, _080ED580  @ =0x00000D33
	add r0, r0, r12
	add r0, r6, r0
	lsr r1, r1, #16
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r0, _080ED584  @ =0x00000D3B
	add r0, r0, r12
	add r0, r6, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r1, r1, #4
	ldrb r0, [r7]
	ldr r3, _080ED588  @ =gUnknown_02003040
	add r0, r0, r3
	strb r2, [r0]
	ldrb r0, [r7]
	ldr r4, _080ED58C  @ =gUnknown_02003050
	add r0, r0, r4
	lsr r2, r2, #8
	strb r2, [r0]
	ldrb r0, [r7]
	ldr r2, _080ED590  @ =gUnknown_02003060
	add r0, r0, r2
	strb r1, [r0]
	ldrb r0, [r7]
	add r3, r3, #48
	add r0, r0, r3
	lsr r1, r1, #8
	strb r1, [r0]
	ldrb r0, [r7]
	add r0, r0, #1
	strb r0, [r7]
	lsl r0, r0, #24
	lsr r0, r0, #24
	cmp r0, #6
	beq _080ED568
	b _080ED428
_080ED568:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080ED578:
	.4byte 0x00000D23
_080ED57C:
	.4byte 0x00000D2B
_080ED580:
	.4byte 0x00000D33
_080ED584:
	.4byte 0x00000D3B
_080ED588:
	.4byte gUnknown_02003040
_080ED58C:
	.4byte gUnknown_02003050
_080ED590:
	.4byte gUnknown_02003060
	THUMB_FUNC_END sub_080ED3D8


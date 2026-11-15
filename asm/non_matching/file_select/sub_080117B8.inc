	THUMB_FUNC_START sub_080117B8
sub_080117B8: @ 0x080117B8
	push {r4,r5,lr}
	add r4, r0, #0
	ldr r0, _0801181C  @ =gUnknown_02016D60
	mov r5, #1
	strb r5, [r0, #27]
	add r0, r4, #0
	bl sub_08011870
	ldrb r0, [r4, #21]
	cmp r0, #0
	beq _08011814
	ldrb r1, [r4, #28]
	mov r0, #4
	neg r0, r0
	and r0, r0, r1
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	ldrb r2, [r4, #11]
	mov r0, #59
	mov r1, #4
	bl sub_0804C8A8
	str r0, [r4, #88]
	cmp r0, #0
	beq _08011814
	str r4, [r0, #84]
	ldr r0, [r4, #88]
	ldr r1, [r4, #84]
	str r1, [r0, #88]
	ldrb r2, [r4, #11]
	mov r0, #59
	mov r1, #4
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _08011814
	ldr r0, [r4, #88]
	str r0, [r1, #84]
	ldr r0, [r4, #84]
	str r0, [r1, #88]
	strb r5, [r1, #22]
_08011814:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801181C:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_080117B8


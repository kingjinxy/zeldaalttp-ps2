	THUMB_FUNC_START sub_0801189C
sub_0801189C: @ 0x0801189C
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	cmp r0, #0
	bne _080118E2
	mov r0, #1
	strb r0, [r4, #20]
	ldrb r0, [r4, #31]
	mov r3, #192
	orr r0, r0, r3
	strb r0, [r4, #31]
	ldrb r1, [r4, #28]
	mov r2, #4
	neg r2, r2
	add r0, r2, #0
	and r0, r0, r1
	mov r1, #2
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldrb r0, [r4, #29]
	orr r0, r0, r3
	strb r0, [r4, #29]
	add r1, r4, #0
	add r1, r1, #94
	ldrb r0, [r1]
	and r2, r2, r0
	strb r2, [r1]
	ldrb r0, [r4, #22]
	mov r1, #16
	cmp r0, #0
	beq _080118DC
	mov r1, #15
_080118DC:
	add r0, r4, #0
	add r0, r0, #33
	strb r1, [r0]
_080118E2:
	add r0, r4, #0
	bl sub_08011920
	ldr r3, _0801191C  @ =gUnknown_02016D60
	ldrb r1, [r3, #28]
	mov r0, #3
	and r0, r0, r1
	ldrb r1, [r4, #11]
	eor r0, r0, r1
	neg r1, r0
	orr r1, r1, r0
	asr r1, r1, #31
	mov r0, #2
	and r1, r1, r0
	ldrb r2, [r4, #28]
	sub r0, r0, #6
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r4, #28]
	ldrb r0, [r3, #26]
	cmp r0, #3
	bne _08011914
	add r0, r4, #0
	bl DeleteThisEntity
_08011914:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0801191C:
	.4byte gUnknown_02016D60
	THUMB_FUNC_END sub_0801189C


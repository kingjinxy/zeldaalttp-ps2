	THUMB_FUNC_START sub_08033C1C
sub_08033C1C: @ 0x08033C1C
	push {r4-r6,lr}
	add r6, r0, #0
	ldr r0, [r6, #84]
	add r1, r6, #0
	bl sub_0803D3D0
	mov r0, #58
	ldrsh r1, [r6, r0]
	mov r0, #20
	neg r0, r0
	cmp r1, r0
	bne _08033C6E
	mov r5, #0
	mov r4, #2
	strb r4, [r6, #20]
	mov r0, #90
	strb r0, [r6, #23]
	add r0, r6, #0
	bl sub_08003B94
	ldrb r2, [r6, #29]
	lsl r1, r2, #30
	lsr r1, r1, #30
	orr r1, r1, r4
	mov r0, #4
	neg r0, r0
	and r0, r0, r2
	orr r0, r0, r1
	strb r0, [r6, #29]
	mov r0, #128
	lsl r0, r0, #17
	str r0, [r6, #12]
	ldr r0, _08033C74  @ =gUnknown_03000488
	mov r1, #128
	lsl r1, r1, #1
	strh r1, [r0]
	strh r1, [r0, #2]
	strh r5, [r0, #4]
	add r1, r6, #0
	bl sub_0803D770
_08033C6E:
	pop {r4-r6}
	pop {r0}
	bx r0
_08033C74:
	.4byte gUnknown_03000488
	THUMB_FUNC_END sub_08033C1C


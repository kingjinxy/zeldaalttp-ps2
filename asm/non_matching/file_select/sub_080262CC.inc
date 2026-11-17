	THUMB_FUNC_START sub_080262CC
sub_080262CC: @ 0x080262CC
	push {lr}
	add r3, r0, #0
	add r0, r0, #65
	ldrb r0, [r0]
	cmp r0, #131
	bhi _0802630A
	mov r2, #0
	mov r0, #2
	strb r0, [r3, #20]
	strb r2, [r3, #24]
	ldrb r1, [r3, #28]
	sub r0, r0, #6
	and r0, r0, r1
	mov r1, #1
	orr r0, r0, r1
	strb r0, [r3, #28]
	add r0, r3, #0
	add r0, r0, #60
	strb r2, [r0]
	strh r2, [r3, #58]
	ldr r0, [r3, #76]
	str r0, [r3, #88]
	strh r2, [r0, #58]
	ldr r1, [r3, #84]
	ldr r0, [r3, #76]
	str r0, [r1, #100]
	add r0, r3, #0
	mov r1, #4
	bl sub_08003870
	b _08026310
_0802630A:
	add r0, r3, #0
	bl sub_080264E0
_08026310:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080262CC


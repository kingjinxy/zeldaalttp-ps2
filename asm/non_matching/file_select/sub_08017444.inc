	THUMB_FUNC_START sub_08017444
sub_08017444: @ 0x08017444
	push {r4,r5,lr}
	add r4, r0, #0
	add r5, r4, #0
	add r5, r5, #120
	ldrb r0, [r5]
	cmp r0, #1
	beq _080174A8
	cmp r0, #1
	bgt _0801745C
	cmp r0, #0
	beq _08017462
	b _08017536
_0801745C:
	cmp r0, #2
	beq _080174F0
	b _08017536
_08017462:
	mov r1, #128
	lsl r1, r1, #10
	add r0, r4, #0
	bl sub_08003594
	cmp r0, #0
	bne _08017536
	add r1, r4, #0
	add r1, r1, #67
	strb r0, [r1]
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	add r1, r1, #59
	mov r0, #240
	lsl r0, r0, #1
	strh r0, [r1]
	add r2, r4, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r0, #128
	orr r0, r0, r1
	strb r0, [r2]
	add r1, r4, #0
	add r1, r1, #63
	mov r0, #68
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #2
	bl sub_08003870
	mov r0, #22
	bl sub_08003DFC
	b _08017536
_080174A8:
	add r0, r4, #0
	bl GetNextFrame
	add r1, r4, #0
	add r1, r1, #126
	ldrh r0, [r1]
	sub r2, r0, #1
	strh r2, [r1]
	lsl r0, r2, #16
	lsr r0, r0, #16
	cmp r0, #0
	bne _080174D0
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	add r0, r4, #0
	mov r1, #3
	bl sub_08003870
	b _08017536
_080174D0:
	cmp r0, #59
	bhi _08017536
	ldr r0, _080174EC  @ =gUnknown_08139544
	mov r1, #3
	and r2, r2, r1
	add r0, r2, r0
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrh r1, [r4, #50]
	add r0, r0, r1
	strh r0, [r4, #50]
	b _08017536
	.byte 0x00
	.byte 0x00
_080174EC:
	.4byte gUnknown_08139544
_080174F0:
	add r0, r4, #0
	bl GetNextFrame
	add r0, r4, #0
	add r0, r0, #41
	ldrb r1, [r0]
	mov r2, #128
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	beq _08017536
	mov r1, #0
	strb r1, [r5]
	mov r0, #1
	strb r0, [r4, #20]
	strb r0, [r4, #23]
	mov r0, #16
	strb r0, [r4, #24]
	str r2, [r4, #12]
	add r0, r4, #0
	add r0, r0, #42
	strb r1, [r0]
	add r1, r4, #0
	add r1, r1, #63
	mov r0, #6
	strb r0, [r1]
	add r0, r4, #0
	add r0, r0, #125
	ldrb r0, [r0]
	add r1, r1, #6
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #0
	bl sub_08003870
_08017536:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08017444


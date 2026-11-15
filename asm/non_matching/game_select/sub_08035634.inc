	THUMB_FUNC_START sub_08035634
sub_08035634: @ 0x08035634
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #20]
	cmp r0, #0
	bne _08035678
	mov r2, #1
	mov r0, #1
	strb r0, [r4, #20]
	ldrb r1, [r4, #28]
	sub r0, r0, #5
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r4, #28]
	ldrb r2, [r4, #29]
	mov r1, #63
	add r0, r1, #0
	and r0, r0, r2
	mov r2, #64
	orr r0, r0, r2
	strb r0, [r4, #29]
	ldrb r0, [r4, #31]
	and r1, r1, r0
	orr r1, r1, r2
	strb r1, [r4, #31]
	add r2, r4, #0
	add r2, r2, #94
	ldrb r0, [r2]
	mov r1, #3
	orr r0, r0, r1
	strb r0, [r2]
	add r0, r4, #0
	mov r1, #1
	bl sub_08003870
_08035678:
	add r0, r4, #0
	bl GetNextFrame
	add r2, r4, #0
	add r2, r2, #41
	ldrb r1, [r2]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080356A2
	mov r0, #0
	strb r0, [r2]
	ldrb r0, [r4, #23]
	mov r1, #1
	eor r0, r0, r1
	strb r0, [r4, #23]
	cmp r0, #0
	beq _080356A2
	ldr r0, _080356BC  @ =0x0000021D
	bl play_sound
_080356A2:
	ldr r0, _080356C0  @ =gUnknown_0201F000
	ldr r0, [r0]
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080356B4
	add r0, r4, #0
	bl DeleteThisEntity
_080356B4:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080356BC:
	.4byte 0x0000021D
_080356C0:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08035634


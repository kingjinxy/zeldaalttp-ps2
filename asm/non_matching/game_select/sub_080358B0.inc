	THUMB_FUNC_START sub_080358B0
sub_080358B0: @ 0x080358B0
	push {r4,r5,lr}
	add r4, r0, #0
	ldrb r1, [r4, #20]
	cmp r1, #0
	bne _080358F8
	mov r2, #1
	mov r0, #1
	strb r0, [r4, #20]
	strb r1, [r4, #23]
	ldrb r1, [r4, #28]
	mov r5, #4
	neg r5, r5
	add r0, r5, #0
	and r0, r0, r1
	orr r0, r0, r2
	strb r0, [r4, #28]
	ldrb r0, [r4, #29]
	mov r1, #192
	orr r0, r0, r1
	strb r0, [r4, #29]
	ldrb r0, [r4, #11]
	mov r3, #2
	cmp r0, #0
	bne _080358E2
	mov r3, #3
_080358E2:
	add r2, r4, #0
	add r2, r2, #94
	ldrb r0, [r2]
	add r1, r5, #0
	and r1, r1, r0
	orr r1, r1, r3
	strb r1, [r2]
	ldrb r1, [r4, #11]
	add r0, r4, #0
	bl sub_08003870
_080358F8:
	add r0, r4, #0
	bl GetNextFrame
	ldrb r2, [r4, #11]
	cmp r2, #0
	bne _08035926
	add r1, r4, #0
	add r1, r1, #41
	ldrb r0, [r1]
	cmp r0, #1
	bne _08035926
	strb r2, [r1]
	ldrb r0, [r4, #23]
	cmp r0, #0
	bne _0803591C
	ldr r0, _08035940  @ =0x0000021D
	bl play_sound
_0803591C:
	ldrb r0, [r4, #23]
	add r0, r0, #1
	mov r1, #3
	and r0, r0, r1
	strb r0, [r4, #23]
_08035926:
	ldr r0, _08035944  @ =gUnknown_0201F000
	ldr r0, [r0]
	mov r1, #8
	and r0, r0, r1
	cmp r0, #0
	beq _08035938
	add r0, r4, #0
	bl DeleteThisEntity
_08035938:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08035940:
	.4byte 0x0000021D
_08035944:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_080358B0


	THUMB_FUNC_START sub_08054744
sub_08054744: @ 0x08054744
	push {r7,lr}
	sub sp, sp, #12
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl sub_08054974
	add r1, r7, #4
	strb r0, [r1]
	add r0, r7, #4
	ldr r1, [r7]
	ldrb r0, [r0]
	ldrb r1, [r1, #23]
	cmp r0, r1
	beq _0805480E
	ldr r0, [r7]
	ldr r1, [r0, #76]
	add r0, r1, #0
	add r0, r0, #108
	str r0, [r7, #8]
_0805476C:
	ldr r0, [r7]
	add r1, r7, #4
	ldrb r0, [r0, #23]
	ldrb r1, [r1]
	cmp r0, r1
	bne _0805477A
	b _0805480E
_0805477A:
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	add r0, r1, #0
	lsl r1, r0, #1
	ldr r0, [r7, #8]
	add r1, r1, r0
	ldrh r0, [r1]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #80
	ldrh r1, [r2]
	bl sub_0800932C
	lsl r1, r0, #16
	lsr r0, r1, #16
	mov r1, #135
	lsl r1, r1, #1
	cmp r0, r1
	bne _080547C2
	mov r0, #9
	bl play_sound
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	add r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	b _0805480C
_080547C2:
	mov r0, #3
	bl play_sound
	ldr r0, _08054808  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, _08054808  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, [r1]
	mov r1, #4
	orr r2, r2, r1
	str r2, [r0]
	ldr r0, [r7]
	ldr r1, [r0, #76]
	add r0, r1, #0
	bl sub_08054A38
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #20]
	b _08054850
_08054808:
	.4byte gUnknown_0201F000
_0805480C:
	b _0805476C
_0805480E:
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #6
	bne _08054850
	mov r0, #16
	bl play_sound
	ldr r0, _08054858  @ =gUnknown_0201F000
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #82
	ldrb r1, [r2]
	add r2, r1, #0
	lsl r1, r2, #2
	add r0, r0, r1
	ldr r1, _08054858  @ =gUnknown_0201F000
	ldr r3, [r7]
	add r2, r3, #0
	add r3, r3, #82
	ldrb r2, [r3]
	add r3, r2, #0
	lsl r2, r3, #2
	add r1, r1, r2
	ldr r2, [r1]
	mov r1, #8
	orr r2, r2, r1
	str r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #20]
_08054850:
	add sp, sp, #12
	pop {r7}
	pop {r0}
	bx r0
_08054858:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_08054744


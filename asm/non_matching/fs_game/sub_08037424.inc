	THUMB_FUNC_START sub_08037424
sub_08037424: @ 0x08037424
	push {r7,lr}
	mov r7, sp
	ldr r1, _08037438  @ =gUnknown_03000FC0
	ldrb r0, [r1, #1]
	cmp r0, #0
	beq _0803743C
	cmp r0, #1
	beq _08037468
	b _080374E4
	.byte 0x00
	.byte 0x00
_08037438:
	.4byte gUnknown_03000FC0
_0803743C:
	ldr r0, _08037464  @ =gUnknown_03000FC0
	ldrb r1, [r0, #2]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #2]
	ldr r1, _08037464  @ =gUnknown_03000FC0
	ldr r0, _08037464  @ =gUnknown_03000FC0
	ldr r1, _08037464  @ =gUnknown_03000FC0
	ldrb r2, [r1, #1]
	add r1, r2, #1
	ldrb r2, [r0, #1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #1]
	b _0803754C
_08037464:
	.4byte gUnknown_03000FC0
_08037468:
	ldr r0, _08037490  @ =gUnknown_03000FC0
	ldrb r1, [r0, #16]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #96
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #16]
	mov r0, #96
	bl sub_08037B5C
	cmp r0, #0
	beq _08037494
	mov r0, #1
	bl sub_08036770
	b _0803754C
	.byte 0x00
	.byte 0x00
_08037490:
	.4byte gUnknown_03000FC0
_08037494:
	ldr r1, _080374E0  @ =gUnknown_03000FC0
	ldr r0, _080374E0  @ =gUnknown_03000FC0
	ldr r1, _080374E0  @ =gUnknown_03000FC0
	ldrb r2, [r1, #2]
	add r1, r2, #1
	ldrb r2, [r0, #2]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strb r2, [r0, #2]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #29
	bls _080374DE
	ldr r1, _080374E0  @ =gUnknown_03000FC0
	ldr r0, _080374E0  @ =gUnknown_03000FC0
	ldr r1, _080374E0  @ =gUnknown_03000FC0
	ldrb r2, [r1, #1]
	add r1, r2, #1
	ldrb r2, [r0, #1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #1]
	ldr r0, _080374E0  @ =gUnknown_03000FC0
	mov r1, #4
	str r1, [r0, #8]
_080374DE:
	b _0803754C
_080374E0:
	.4byte gUnknown_03000FC0
_080374E4:
	ldr r0, _0803750C  @ =gUnknown_03000FC0
	ldrb r1, [r0, #16]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #96
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #16]
	mov r0, #96
	bl sub_08037B5C
	cmp r0, #0
	beq _08037510
	mov r0, #1
	bl sub_08036770
	b _0803754C
	.byte 0x00
	.byte 0x00
_0803750C:
	.4byte gUnknown_03000FC0
_08037510:
	ldr r1, _08037548  @ =gUnknown_03000FC0
	ldr r0, _08037548  @ =gUnknown_03000FC0
	ldr r1, _08037548  @ =gUnknown_03000FC0
	ldrb r2, [r1, #2]
	add r1, r2, #1
	ldrb r2, [r0, #2]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r1, #0
	orr r3, r3, r2
	add r2, r3, #0
	strb r2, [r0, #2]
	add r0, r1, #0
	mov r1, #0
	bic r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #179
	bls _08037544
	bl sub_08036760
	mov r0, #10
	bl set_main_state
_08037544:
	b _0803754C
	.byte 0x00
	.byte 0x00
_08037548:
	.4byte gUnknown_03000FC0
_0803754C:
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08037424

	.byte 0x00
	.byte 0x00

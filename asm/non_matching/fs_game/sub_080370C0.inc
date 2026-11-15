	THUMB_FUNC_START sub_080370C0
sub_080370C0: @ 0x080370C0
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	ldr r0, _08037170  @ =gUnknown_03000FC0
	mov r1, #3
	str r1, [r0, #8]
	ldr r0, _08037170  @ =gUnknown_03000FC0
	ldr r1, _08037170  @ =gUnknown_03000FC0
	ldrb r2, [r1, #16]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	mov r4, #80
	add r2, r3, #0
	orr r2, r2, r4
	add r3, r2, #0
	strb r3, [r1, #16]
	add r1, r0, #0
	add r0, r0, #36
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #80
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	mov r0, #80
	bl sub_08037B5C
	cmp r0, #0
	beq _08037174
	ldr r0, _08037170  @ =gUnknown_03000FC0
	ldrb r1, [r0, #3]
	mov r2, #1
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0803711C
	mov r0, #0
	bl sub_0803719C
_0803711C:
	ldr r0, _08037170  @ =gUnknown_03000FC0
	ldrb r1, [r0, #3]
	mov r2, #2
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08037136
	mov r0, #1
	bl sub_0803719C
_08037136:
	ldr r0, _08037170  @ =gUnknown_03000FC0
	ldrb r1, [r0, #3]
	mov r2, #4
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08037150
	mov r0, #2
	bl sub_0803719C
_08037150:
	ldr r0, _08037170  @ =gUnknown_03000FC0
	ldrb r1, [r0, #3]
	mov r2, #8
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0803716A
	mov r0, #3
	bl sub_0803719C
_0803716A:
	bl sub_08037300
	b _0803718E
_08037170:
	.4byte gUnknown_03000FC0
_08037174:
	ldr r1, _08037198  @ =gUnknown_03000FC0
	ldr r0, _08037198  @ =gUnknown_03000FC0
	ldr r1, _08037198  @ =gUnknown_03000FC0
	ldrh r2, [r1, #12]
	add r1, r2, #1
	ldrh r2, [r0, #12]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #12]
_0803718E:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08037198:
	.4byte gUnknown_03000FC0
	THUMB_FUNC_END sub_080370C0


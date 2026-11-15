	THUMB_FUNC_START sub_08036948
sub_08036948: @ 0x08036948
	push {r7,lr}
	mov r7, sp
	ldr r0, _080369AC  @ =gUnknown_03000BF0
	ldr r1, [r0]
	lsr r0, r1, #8
	mov r1, #15
	and r0, r0, r1
	ldr r1, _080369B0  @ =gUnknown_03000FC0
	ldrb r2, [r1, #3]
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	add r3, r1, #0
	lsl r2, r3, #24
	lsr r1, r2, #24
	cmp r0, r1
	beq _080369A6
	ldr r0, _080369B0  @ =gUnknown_03000FC0
	ldrb r1, [r0, #1]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #4
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #1]
	ldr r0, _080369B0  @ =gUnknown_03000FC0
	ldrb r1, [r0, #2]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #2]
	ldr r0, _080369B0  @ =gUnknown_03000FC0
	ldr r1, _080369B0  @ =gUnknown_03000FC0
	ldrb r2, [r1, #3]
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #3]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #3]
_080369A6:
	pop {r7}
	pop {r0}
	bx r0
_080369AC:
	.4byte gUnknown_03000BF0
_080369B0:
	.4byte gUnknown_03000FC0
	THUMB_FUNC_END sub_08036948


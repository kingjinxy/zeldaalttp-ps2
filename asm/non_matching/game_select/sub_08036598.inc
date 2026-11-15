	THUMB_FUNC_START sub_08036598
sub_08036598: @ 0x08036598
	push {r4,lr}
	add r4, r0, #0
	ldrb r0, [r4, #10]
	cmp r0, #0
	bne _080365AC
	add r0, r4, #0
	mov r1, #3
	bl 0x080037EC
	b _080365B2
_080365AC:
	add r0, r4, #0
	bl GetNextFrame
_080365B2:
	ldrb r0, [r4, #23]
	cmp r0, #0
	beq _080365E0
	ldr r0, _080365DC  @ =gUnknown_03000488
	ldrb r1, [r4, #23]
	mov r3, #128
	lsl r3, r3, #1
	add r2, r3, #0
	add r1, r1, r2
	mov r2, #0
	strh r1, [r0, #2]
	strh r1, [r0]
	strh r2, [r0, #4]
	add r1, r4, #0
	bl sub_0803D770
	ldrb r0, [r4, #23]
	lsr r1, r0, #4
	strh r1, [r4, #58]
	sub r0, r0, #4
	b _080365E8
_080365DC:
	.4byte gUnknown_03000488
_080365E0:
	ldrb r0, [r4, #20]
	add r0, r0, #1
	strb r0, [r4, #20]
	mov r0, #180
_080365E8:
	strb r0, [r4, #23]
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08036598


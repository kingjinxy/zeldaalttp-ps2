	THUMB_FUNC_START sub_080231D4
sub_080231D4: @ 0x080231D4
	push {r4,lr}
	add r4, r0, #0
	bl sub_0803DF84
	add r0, r4, #0
	add r0, r0, #125
	ldrb r0, [r0]
	cmp r0, #7
	bne _08023222
	ldrb r0, [r4, #23]
	sub r0, r0, #1
	strb r0, [r4, #23]
	lsl r0, r0, #24
	cmp r0, #0
	bne _08023222
	mov r0, #2
	strb r0, [r4, #20]
	mov r0, #180
	strb r0, [r4, #23]
	add r1, r4, #0
	add r1, r1, #110
	mov r0, #150
	lsl r0, r0, #3
	strh r0, [r1]
	mov r0, #206
	lsl r0, r0, #1
	bl play_sound
	ldr r3, _08023228  @ =gUnknown_03000450
	ldr r2, _0802322C  @ =gUnknown_03006A30
	ldr r0, _08023230  @ =gLCDRegisterBuffer
	ldrb r1, [r0]
	lsl r0, r1, #3
	add r0, r0, r1
	lsl r0, r0, #4
	add r2, r2, #40
	add r0, r0, r2
	ldr r0, [r0]
	str r0, [r3]
_08023222:
	pop {r4}
	pop {r0}
	bx r0
_08023228:
	.4byte gUnknown_03000450
_0802322C:
	.4byte gUnknown_03006A30
_08023230:
	.4byte gLCDRegisterBuffer
	THUMB_FUNC_END sub_080231D4


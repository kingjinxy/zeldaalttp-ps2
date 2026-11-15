	THUMB_FUNC_START sub_08010C48
sub_08010C48: @ 0x08010C48
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	ldr r0, _08010C94  @ =gUnknown_02016D60
	add r5, r0, #0
	add r5, r5, #34
	ldrb r0, [r5]
	cmp r0, #5
	bls _08010C5E
	mov r0, #5
	strb r0, [r5]
_08010C5E:
	ldr r2, _08010C98  @ =gUnknown_0200B250
	mov r3, #192
	lsl r3, r3, #18
	ldrb r0, [r3, #4]
	lsl r0, r0, #6
	ldrb r4, [r5]
	add r0, r0, r4
	add r2, r2, #8
	add r0, r0, r2
	mov r4, #0
	strb r1, [r0]
	ldrb r1, [r5]
	ldrb r0, [r3, #4]
	lsl r0, r0, #6
	add r0, r0, #1
	add r1, r1, r0
	add r1, r1, r2
	strb r4, [r1]
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	ldrb r0, [r3, #4]
	bl sub_08010D1C
	pop {r4,r5}
	pop {r0}
	bx r0
_08010C94:
	.4byte gUnknown_02016D60
_08010C98:
	.4byte gUnknown_0200B250
	THUMB_FUNC_END sub_08010C48


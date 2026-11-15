	THUMB_FUNC_START sub_08010AA4
sub_08010AA4: @ 0x08010AA4
	push {r4,lr}
	mov r4, #0
	mov r3, #0
	ldr r2, _08010AFC  @ =gUnknown_0200B250
	mov r0, #192
	lsl r0, r0, #18
	ldrb r0, [r0, #4]
	lsl r0, r0, #6
	add r1, r2, #0
	add r1, r1, #8
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _08010AE6
	cmp r0, #32
	bne _08010AEA
_08010AC4:
	add r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	mov r0, #192
	lsl r0, r0, #18
	ldrb r0, [r0, #4]
	lsl r0, r0, #6
	add r0, r3, r0
	add r1, r2, #0
	add r1, r1, #8
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _08010AE6
	cmp r0, #32
	beq _08010AC4
	mov r4, #1
_08010AE6:
	cmp r4, #0
	beq _08010B04
_08010AEA:
	mov r0, #8
	mov r1, #0
	bl sub_08010104
	bl sub_080107D8
	ldr r1, _08010B00  @ =gSubState
	mov r0, #4
	b _08010B20
_08010AFC:
	.4byte gUnknown_0200B250
_08010B00:
	.4byte gSubState
_08010B04:
	mov r0, #192
	lsl r0, r0, #18
	ldrb r0, [r0, #4]
	bl sub_08011184
	mov r0, #3
	mov r1, #16
	bl sub_0800C0B0
	ldr r1, _08010B28  @ =gUnknown_03000520
	mov r0, #31
	strb r0, [r1, #7]
	ldr r1, _08010B2C  @ =gSubState
	mov r0, #3
_08010B20:
	strb r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
_08010B28:
	.4byte gUnknown_03000520
_08010B2C:
	.4byte gSubState
	THUMB_FUNC_END sub_08010AA4


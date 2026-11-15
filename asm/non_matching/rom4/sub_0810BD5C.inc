	THUMB_FUNC_START sub_0810BD5C
sub_0810BD5C: @ 0x0810BD5C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _0810BD98
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _0810BD98
	ldr r0, _0810BD8C  @ =gRam
	ldr r1, _0810BD90  @ =0x000009C6
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #67
	bne _0810BD94
	bl sub_08124178
	b _0810BD98
_0810BD8C:
	.4byte gRam
_0810BD90:
	.4byte 0x000009C6
_0810BD94:
	bl sub_08123B0C
_0810BD98:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810BD5C

	.byte 0x00
	.byte 0x00

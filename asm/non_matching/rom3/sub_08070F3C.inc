	THUMB_FUNC_START sub_08070F3C
sub_08070F3C: @ 0x08070F3C
	push {r4,lr}
	ldr r4, _08070F78  @ =gRam
	ldr r1, _08070F7C  @ =0x000009AD
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #2
	bne _08070F6E
	ldr r2, _08070F80  @ =0x00000A4C
	add r0, r4, r2
	ldrh r0, [r0]
	cmp r0, #5
	bne _08070F72
	bl sub_0806D0C8
	ldr r1, _08070F84  @ =0x00000CF5
	add r0, r4, r1
	ldr r2, _08070F88  @ =0x00000CF6
	add r1, r4, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	beq _08070F6E
	bl sub_08130FF8
_08070F6E:
	bl sub_0806D7E4
_08070F72:
	pop {r4}
	pop {r0}
	bx r0
_08070F78:
	.4byte gRam
_08070F7C:
	.4byte 0x000009AD
_08070F80:
	.4byte 0x00000A4C
_08070F84:
	.4byte 0x00000CF5
_08070F88:
	.4byte 0x00000CF6
	THUMB_FUNC_END sub_08070F3C


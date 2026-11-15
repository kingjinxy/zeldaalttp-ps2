	THUMB_FUNC_START sub_08070EBC
sub_08070EBC: @ 0x08070EBC
	push {r4,lr}
	ldr r4, _08070EEC  @ =gRam
	ldr r1, _08070EF0  @ =0x00000CF5
	add r0, r4, r1
	ldr r2, _08070EF4  @ =0x00000CF6
	add r1, r4, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	beq _08070ED6
	bl sub_08130FF8
_08070ED6:
	bl sub_080792A4
	ldr r0, _08070EF8  @ =0x000009E8
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08070EEC:
	.4byte gRam
_08070EF0:
	.4byte 0x00000CF5
_08070EF4:
	.4byte 0x00000CF6
_08070EF8:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08070EBC


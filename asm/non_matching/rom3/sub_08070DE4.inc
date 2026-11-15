	THUMB_FUNC_START sub_08070DE4
sub_08070DE4: @ 0x08070DE4
	push {r4,lr}
	ldr r4, _08070E10  @ =gRam
	ldr r1, _08070E14  @ =0x00000CF5
	add r0, r4, r1
	ldr r2, _08070E18  @ =0x00000CF6
	add r1, r4, r2
	ldrb r2, [r0]
	ldrb r0, [r1]
	orr r0, r0, r2
	cmp r0, #0
	beq _08070E20
	bl sub_08130FF8
	ldr r1, _08070E1C  @ =0x00000CF8
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _08070E2A
	bl sub_08130FF8
	b _08070E2A
	.byte 0x00
	.byte 0x00
_08070E10:
	.4byte gRam
_08070E14:
	.4byte 0x00000CF5
_08070E18:
	.4byte 0x00000CF6
_08070E1C:
	.4byte 0x00000CF8
_08070E20:
	ldr r2, _08070E30  @ =0x000009E8
	add r1, r4, r2
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_08070E2A:
	pop {r4}
	pop {r0}
	bx r0
_08070E30:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08070DE4


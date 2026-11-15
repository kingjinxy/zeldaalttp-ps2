	THUMB_FUNC_START sub_08070CE4
sub_08070CE4: @ 0x08070CE4
	push {r4,lr}
	ldr r4, _08070D08  @ =gRam
	ldr r1, _08070D0C  @ =0x00000CF5
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _08070D14
	bl sub_08130FF8
	ldr r1, _08070D10  @ =0x00000CF8
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #0
	beq _08070D1E
	bl sub_08130FF8
	b _08070D1E
	.byte 0x00
	.byte 0x00
_08070D08:
	.4byte gRam
_08070D0C:
	.4byte 0x00000CF5
_08070D10:
	.4byte 0x00000CF8
_08070D14:
	ldr r0, _08070D24  @ =0x000009E8
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
_08070D1E:
	pop {r4}
	pop {r0}
	bx r0
_08070D24:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_08070CE4


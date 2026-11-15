	THUMB_FUNC_START sub_080E7D28
sub_080E7D28: @ 0x080E7D28
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r4, r0, #0
	ldr r0, _080E7D44  @ =gRam
	ldr r1, _080E7D48  @ =0x00000FA2
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #9
	beq _080E7D4C
	mov r0, #0
	b _080E7D64
	.byte 0x00
	.byte 0x00
_080E7D44:
	.4byte gRam
_080E7D48:
	.4byte 0x00000FA2
_080E7D4C:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E7D62
	add r0, r4, #0
	bl sub_080E7D6C
	mov r0, #0
	b _080E7D64
_080E7D62:
	mov r0, #1
_080E7D64:
	pop {r4}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080E7D28

	.byte 0x00
	.byte 0x00

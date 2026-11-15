	THUMB_FUNC_START sub_080D5A18
sub_080D5A18: @ 0x080D5A18
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	add r0, r5, #0
	bl sub_080D5954
	add r0, r5, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D5A82
	add r0, r5, #0
	bl sub_080C4F98
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D5A76
	ldr r0, _080D5A68  @ =gRam
	ldr r1, _080D5A6C  @ =0x00000FC2
	add r0, r0, r1
	add r1, r5, r0
	ldrb r2, [r1]
	cmp r2, #0
	bne _080D5A76
	mov r0, #16
	strb r0, [r1]
	ldr r4, _080D5A70  @ =gMagicMeter
	ldrb r0, [r4]
	cmp r0, #7
	bls _080D5A74
	mov r0, #38
	mov r1, #0
	bl sub_0812A324
	ldrb r0, [r4]
	sub r0, r0, #8
	strb r0, [r4]
	b _080D5A76
	.byte 0x00
	.byte 0x00
_080D5A68:
	.4byte gRam
_080D5A6C:
	.4byte 0x00000FC2
_080D5A70:
	.4byte gMagicMeter
_080D5A74:
	strb r2, [r4]
_080D5A76:
	add r0, r5, #0
	bl Sprite3_Move
	add r0, r5, #0
	bl sub_080CA2A4
_080D5A82:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080D5A18


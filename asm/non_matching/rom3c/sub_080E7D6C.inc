	THUMB_FUNC_START sub_080E7D6C
sub_080E7D6C: @ 0x080E7D6C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	add r0, r4, #0
	bl Sprite3_Move
	ldr r0, _080E7D9C  @ =gRam
	ldr r1, _080E7DA0  @ =0x00001062
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E7D8E
	add r0, r4, #0
	bl sub_080C6F48
_080E7D8E:
	add r0, r5, #0
	bl sub_080C811C
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E7D9C:
	.4byte gRam
_080E7DA0:
	.4byte 0x00001062
	THUMB_FUNC_END sub_080E7D6C


	THUMB_FUNC_START sub_0809E814
sub_0809E814: @ 0x0809E814
	push {r4,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	mov r4, #8
	ldr r2, _0809E834  @ =gUnknown_08168C40
_0809E81E:
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r1, r0
	beq _0809E838
	sub r0, r4, #1
	lsl r0, r0, #24
	lsr r4, r0, #24
	cmp r0, #0
	bge _0809E81E
	b _0809E854
	.byte 0x00
	.byte 0x00
_0809E834:
	.4byte gUnknown_08168C40
_0809E838:
	cmp r4, #2
	beq _0809E848
	cmp r4, #4
	bne _0809E848
	mov r0, #4
	bl Sprite_SpawnImmediatelySmashedTerrain
	b _0809E854
_0809E848:
	mov r0, #121
	bl sub_0809E49C
	add r0, r4, #0
	bl Sprite_SpawnImmediatelySmashedTerrain
_0809E854:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0809E814

	.byte 0x00
	.byte 0x00

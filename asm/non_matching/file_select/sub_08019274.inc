	THUMB_FUNC_START sub_08019274
sub_08019274: @ 0x08019274
	push {r4,r5,lr}
	add r4, r0, #0
	bl 0x08009624
	add r0, r4, #0
	add r0, r0, #69
	ldrb r0, [r0]
	cmp r0, #0
	beq _080192C0
	add r2, r4, #0
	add r2, r2, #117
	ldrb r1, [r2]
	mov r0, #68
	and r0, r0, r1
	add r5, r2, #0
	cmp r0, #68
	beq _080192BC
	ldr r2, [r4, #52]
	ldr r1, _080192C8  @ =0x0000FFFF
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, r1
	beq _080192A6
	add r0, r2, #1
	str r0, [r4, #52]
_080192A6:
	ldr r1, [r4, #120]
	add r0, r4, #0
	bl sub_0803D3D0
	ldr r1, [r4, #124]
	add r0, r4, #0
	bl sub_0803D3D0
	ldr r0, [r4, #52]
	sub r0, r0, #1
	str r0, [r4, #52]
_080192BC:
	mov r0, #0
	strb r0, [r5]
_080192C0:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080192C8:
	.4byte 0x0000FFFF
	THUMB_FUNC_END sub_08019274


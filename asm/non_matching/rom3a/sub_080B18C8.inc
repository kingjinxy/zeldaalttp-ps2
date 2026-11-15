	THUMB_FUNC_START sub_080B18C8
sub_080B18C8: @ 0x080B18C8
	push {r4,lr}
	ldr r4, _080B18E0  @ =gRam
	ldr r1, _080B18E4  @ =0x00000A56
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080B18E8
	bl sub_080B06A8
	bl sub_080AA6D8
	b _080B190A
_080B18E0:
	.4byte gRam
_080B18E4:
	.4byte 0x00000A56
_080B18E8:
	ldr r0, _080B1910  @ =0x00000CA2
	add r1, r4, r0
	mov r0, #1
	strh r0, [r1]
	bl sub_0812FA28
	ldr r0, _080B1914  @ =0x000009AD
	add r1, r4, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	bl sub_0806BDA4
	bl sub_080B06A8
	bl sub_080AA6D8
_080B190A:
	pop {r4}
	pop {r0}
	bx r0
_080B1910:
	.4byte 0x00000CA2
_080B1914:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080B18C8


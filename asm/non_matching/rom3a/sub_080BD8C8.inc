	THUMB_FUNC_START sub_080BD8C8
sub_080BD8C8: @ 0x080BD8C8
	push {r4,lr}
	lsl r0, r0, #24
	mov r1, #128
	lsl r1, r1, #18
	add r0, r0, r1
	lsr r3, r0, #24
	ldr r2, _080BD90C  @ =gRam
	ldr r1, _080BD910  @ =0x00000FC2
	add r0, r2, r1
	add r4, r3, r0
	ldrb r0, [r4]
	cmp r0, #0
	beq _080BD906
	ldr r1, _080BD914  @ =0x00001122
	add r0, r2, r1
	add r0, r3, r0
	mov r1, #2
	strb r1, [r0]
	ldr r0, _080BD918  @ =0x00000F92
	add r1, r2, r0
	add r1, r3, r1
	ldr r2, _080BD91C  @ =gUnknown_08170FEB
	ldrb r0, [r4]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r3, #0
	mov r1, #54
	mov r2, #2
	bl sub_080BD874
_080BD906:
	pop {r4}
	pop {r0}
	bx r0
_080BD90C:
	.4byte gRam
_080BD910:
	.4byte 0x00000FC2
_080BD914:
	.4byte 0x00001122
_080BD918:
	.4byte 0x00000F92
_080BD91C:
	.4byte gUnknown_08170FEB
	THUMB_FUNC_END sub_080BD8C8


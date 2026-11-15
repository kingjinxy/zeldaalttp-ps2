	THUMB_FUNC_START sub_080340CC
sub_080340CC: @ 0x080340CC
	push {r4,r5,lr}
	add r5, r0, #0
	ldrb r0, [r5, #23]
	cmp r0, #0
	beq _080340E2
	sub r0, r0, #1
	strb r0, [r5, #23]
	add r0, r5, #0
	bl sub_0803CC20
	b _08034114
_080340E2:
	ldr r0, _0803411C  @ =gUnknown_0201F000
	ldr r0, [r0]
	mov r1, #8
	and r0, r0, r1
	cmp r0, #0
	beq _08034114
	mov r0, #89
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	add r4, r0, #0
	cmp r4, #0
	beq _08034114
	add r0, r5, #0
	add r1, r4, #0
	bl sub_0803D3D0
	ldr r0, [r4, #52]
	add r0, r0, #1
	str r0, [r4, #52]
	mov r0, #4
	strb r0, [r5, #20]
	mov r0, #60
	strb r0, [r5, #23]
_08034114:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0803411C:
	.4byte gUnknown_0201F000
	THUMB_FUNC_END sub_080340CC


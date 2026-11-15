	THUMB_FUNC_START sub_080742C0
sub_080742C0: @ 0x080742C0
	push {r4,lr}
	ldr r4, _080742F4  @ =gRam
	bl sub_080CBCB4
	ldr r0, _080742F8  @ =0x00000B54
	add r1, r4, r0
	mov r0, #0
	strh r0, [r1]
	ldr r1, _080742FC  @ =0x0000165E
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #1
	bls _080742E8
	ldr r1, _08074300  @ =0x000009AD
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #18
	beq _080742E8
	bl sub_08130AB4
_080742E8:
	bl sub_08074304
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080742F4:
	.4byte gRam
_080742F8:
	.4byte 0x00000B54
_080742FC:
	.4byte 0x0000165E
_08074300:
	.4byte 0x000009AD
	THUMB_FUNC_END sub_080742C0


	THUMB_FUNC_START sub_0810A778
sub_0810A778: @ 0x0810A778
	push {r4,lr}
	lsl r0, r0, #24
	lsr r1, r0, #24
	add r4, r1, #0
	ldr r3, _0810A7A8  @ =gRam
	ldr r2, _0810A7AC  @ =0x00001022
	add r0, r3, r2
	add r2, r1, r0
	ldrb r0, [r2]
	cmp r0, #208
	bhi _0810A792
	mov r0, #208
	strb r0, [r2]
_0810A792:
	ldr r2, _0810A7B0  @ =0x00000FC2
	add r0, r3, r2
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _0810A7B4
	add r0, r1, #0
	bl sub_0810A7C4
	b _0810A7BC
	.byte 0x00
	.byte 0x00
_0810A7A8:
	.4byte gRam
_0810A7AC:
	.4byte 0x00001022
_0810A7B0:
	.4byte 0x00000FC2
_0810A7B4:
	add r0, r4, #0
	mov r1, #5
	bl sub_081098B0
_0810A7BC:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0810A778

	.byte 0x00
	.byte 0x00

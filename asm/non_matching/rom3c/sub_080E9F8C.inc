	THUMB_FUNC_START sub_080E9F8C
sub_080E9F8C: @ 0x080E9F8C
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r3, r0, #24
	ldr r4, _080E9FB4  @ =gRam
	ldr r1, _080E9FB8  @ =0x00000FC2
	add r0, r4, r1
	add r5, r3, r0
	ldrb r0, [r5]
	lsl r1, r0, #24
	lsr r2, r1, #24
	cmp r2, #0
	beq _080E9FC0
	ldr r2, _080E9FBC  @ =0x00000F92
	add r0, r4, r2
	add r0, r3, r0
	lsr r1, r1, #26
	mov r2, #1
	and r1, r1, r2
	strb r1, [r0]
	b _080E9FCC
_080E9FB4:
	.4byte gRam
_080E9FB8:
	.4byte 0x00000FC2
_080E9FBC:
	.4byte 0x00000F92
_080E9FC0:
	ldr r1, _080E9FD8  @ =0x00000F52
	add r0, r4, r1
	add r0, r3, r0
	strb r2, [r0]
	mov r0, #32
	strb r0, [r5]
_080E9FCC:
	add r0, r3, #0
	bl sub_080E9D14
	pop {r4,r5}
	pop {r0}
	bx r0
_080E9FD8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E9F8C


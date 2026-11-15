	THUMB_FUNC_START sub_080EAB4C
sub_080EAB4C: @ 0x080EAB4C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C3094
	add r0, r4, #0
	bl sub_080EAC34
	ldr r2, _080EAB84  @ =gRam
	ldr r1, _080EAB88  @ =0x00001142
	add r0, r2, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	ldr r0, _080EAB8C  @ =0x00000996
	add r2, r2, r0
	ldrb r1, [r2]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #31
	and r0, r0, r1
	cmp r0, #0
	beq _080EAB90
	add r0, r4, #0
	bl sub_080EA81C
	b _080EAB96
_080EAB84:
	.4byte gRam
_080EAB88:
	.4byte 0x00001142
_080EAB8C:
	.4byte 0x00000996
_080EAB90:
	add r0, r4, #0
	bl sub_080EAB9C
_080EAB96:
	pop {r4}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080EAB4C


	THUMB_FUNC_START sub_080F98B4
sub_080F98B4: @ 0x080F98B4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r1, _080F98E4  @ =gRam
	ldr r2, _080F98E8  @ =0x00000F12
	add r0, r1, r2
	add r3, r5, r0
	ldrb r2, [r3]
	mov r0, #150
	lsl r0, r0, #4
	add r4, r1, r0
	mov r0, #0
	ldrsb r0, [r4, r0]
	add r6, r1, #0
	cmp r2, r0
	beq _080F98F0
	ldrb r0, [r4]
	sub r0, r2, r0
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080F98EC
	sub r0, r2, #1
	b _080F98EE
_080F98E4:
	.4byte gRam
_080F98E8:
	.4byte 0x00000F12
_080F98EC:
	add r0, r2, #1
_080F98EE:
	strb r0, [r3]
_080F98F0:
	ldr r1, _080F9914  @ =0x00000F22
	add r0, r6, r1
	add r3, r5, r0
	ldrb r2, [r3]
	ldr r0, _080F9918  @ =0x00000961
	add r1, r6, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r2, r0
	beq _080F9920
	ldrb r0, [r1]
	sub r0, r2, r0
	mov r1, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080F991C
	sub r0, r2, #1
	b _080F991E
_080F9914:
	.4byte 0x00000F22
_080F9918:
	.4byte 0x00000961
_080F991C:
	add r0, r2, #1
_080F991E:
	strb r0, [r3]
_080F9920:
	pop {r4-r6}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080F98B4

	.byte 0x00
	.byte 0x00

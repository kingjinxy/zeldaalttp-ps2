	THUMB_FUNC_START sub_080EA788
sub_080EA788: @ 0x080EA788
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080EA808  @ =gRam
	ldr r1, _080EA80C  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080EA7B8
	add r0, r4, #0
	bl sub_080EAC34
	lsl r0, r0, #24
	cmp r0, #0
	beq _080EA7B8
	ldr r1, _080EA810  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
_080EA7B8:
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r5, _080EA808  @ =gRam
	ldr r1, _080EA814  @ =0x00001152
	add r0, r5, r1
	add r3, r4, r0
	ldrb r0, [r3]
	sub r0, r0, #2
	strb r0, [r3]
	sub r1, r1, #16
	add r0, r5, r1
	add r1, r4, r0
	mov r0, #0
	ldrsb r0, [r1, r0]
	cmp r0, #0
	bge _080EA7FA
	mov r0, #0
	strb r0, [r1]
	ldr r1, _080EA818  @ =0x00000FC2
	add r0, r5, r1
	add r1, r4, r0
	ldrb r2, [r1]
	cmp r2, #0
	bne _080EA7F6
	mov r0, #32
	strb r0, [r1]
	ldr r1, _080EA810  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
_080EA7F6:
	mov r0, #10
	strb r0, [r3]
_080EA7FA:
	add r0, r4, #0
	bl sub_080EAB14
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080EA808:
	.4byte gRam
_080EA80C:
	.4byte 0x00000996
_080EA810:
	.4byte 0x00000F52
_080EA814:
	.4byte 0x00001152
_080EA818:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080EA788


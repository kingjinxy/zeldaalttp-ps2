	THUMB_FUNC_START sub_080EAB9C
sub_080EAB9C: @ 0x080EAB9C
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	mov r1, #16
	bl sub_080C2CB4
	ldr r2, _080EABE0  @ =gRam
	ldr r0, _080EABE4  @ =0x00000F12
	add r1, r2, r0
	add r1, r4, r1
	mov r3, #150
	lsl r3, r3, #4
	add r0, r2, r3
	ldrb r0, [r0]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	ldr r0, _080EABE8  @ =0x00000F22
	add r1, r2, r0
	add r1, r4, r1
	add r3, r3, #1
	add r2, r2, r3
	ldrb r0, [r2]
	mvn r0, r0
	add r0, r0, #1
	strb r0, [r1]
	add r0, r4, #0
	bl sub_080EA81C
	pop {r4}
	pop {r0}
	bx r0
_080EABE0:
	.4byte gRam
_080EABE4:
	.4byte 0x00000F12
_080EABE8:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080EAB9C


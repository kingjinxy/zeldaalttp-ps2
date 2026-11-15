	THUMB_FUNC_START sub_080EE174
sub_080EE174: @ 0x080EE174
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080EE1BC  @ =gRam
	ldr r1, _080EE1C0  @ =0x00000F62
	add r0, r4, r1
	add r0, r5, r0
	ldr r1, _080EE1C4  @ =0x00000DA6
	add r2, r4, r1
	ldrb r1, [r2]
	strb r1, [r0]
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
	add r0, r5, #0
	bl sub_080C35C0
	ldr r2, _080EE1C8  @ =0x00000EE2
	add r4, r4, r2
	add r4, r5, r4
	ldrb r0, [r4]
	mov r1, #1
	cmp r0, #48
	bls _080EE1AC
	mov r1, #3
	cmp r0, #223
	bls _080EE1AC
	mov r1, #2
_080EE1AC:
	ldr r0, _080EE1BC  @ =gRam
	ldr r2, _080EE1CC  @ =0x00000FB2
	add r0, r0, r2
	add r0, r5, r0
	strb r1, [r0]
	pop {r4,r5}
	pop {r0}
	bx r0
_080EE1BC:
	.4byte gRam
_080EE1C0:
	.4byte 0x00000F62
_080EE1C4:
	.4byte 0x00000DA6
_080EE1C8:
	.4byte 0x00000EE2
_080EE1CC:
	.4byte 0x00000FB2
	THUMB_FUNC_END sub_080EE174


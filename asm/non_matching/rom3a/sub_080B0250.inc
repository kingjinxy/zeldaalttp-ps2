	THUMB_FUNC_START sub_080B0250
sub_080B0250: @ 0x080B0250
	push {r4,lr}
	ldr r2, _080B0288  @ =gRam
	ldr r0, _080B028C  @ =0x000017F0
	add r1, r2, r0
	mov r0, #0
	strb r0, [r1]
	mov r4, #0
	mov r3, #176
	ldr r1, _080B0290  @ =0x00000DCF
	add r0, r2, r1
	mov r1, #7
_080B0266:
	strb r3, [r0]
	strb r4, [r0, #20]
	add r0, r0, #1
	sub r1, r1, #1
	cmp r1, #0
	bge _080B0266
	ldr r0, _080B0294  @ =0x00000E15
	add r1, r2, r0
	mov r0, #1
	strb r0, [r1]
	ldr r0, _080B0298  @ =0x00001830
	add r1, r2, r0
	mov r0, #6
	strb r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
_080B0288:
	.4byte gRam
_080B028C:
	.4byte 0x000017F0
_080B0290:
	.4byte 0x00000DCF
_080B0294:
	.4byte 0x00000E15
_080B0298:
	.4byte 0x00001830
	THUMB_FUNC_END sub_080B0250


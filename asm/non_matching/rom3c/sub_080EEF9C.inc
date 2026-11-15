	THUMB_FUNC_START sub_080EEF9C
sub_080EEF9C: @ 0x080EEF9C
	push {r4-r6,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r5, _080EEFD8  @ =gRam
	ldr r1, _080EEFDC  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	mov r6, #0
	strb r6, [r0]
	bl GetRandomInt
	ldr r1, _080EEFE0  @ =0x00000FC2
	add r2, r5, r1
	add r2, r4, r2
	mov r1, #63
	and r1, r1, r0
	add r1, r1, #72
	strb r1, [r2]
	ldr r1, _080EEFE4  @ =0x00000F12
	add r0, r5, r1
	add r0, r4, r0
	strb r6, [r0]
	ldr r0, _080EEFE8  @ =0x00000F22
	add r5, r5, r0
	add r4, r4, r5
	strb r6, [r4]
	pop {r4-r6}
	pop {r0}
	bx r0
_080EEFD8:
	.4byte gRam
_080EEFDC:
	.4byte 0x00000F52
_080EEFE0:
	.4byte 0x00000FC2
_080EEFE4:
	.4byte 0x00000F12
_080EEFE8:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080EEF9C


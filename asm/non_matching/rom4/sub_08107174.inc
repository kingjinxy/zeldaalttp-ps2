	THUMB_FUNC_START sub_08107174
sub_08107174: @ 0x08107174
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _081071A4  @ =gRam
	ldr r3, _081071A8  @ =0x00000F52
	add r1, r2, r3
	add r1, r0, r1
	mov r3, #128
	strb r3, [r1]
	ldr r3, _081071AC  @ =0x00000FC2
	add r1, r2, r3
	add r1, r0, r1
	mov r3, #96
	strb r3, [r1]
	ldr r1, _081071B0  @ =0x00000FA2
	add r2, r2, r1
	add r2, r0, r2
	mov r1, #9
	strb r1, [r2]
	bl sub_080ED8C8
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_081071A4:
	.4byte gRam
_081071A8:
	.4byte 0x00000F52
_081071AC:
	.4byte 0x00000FC2
_081071B0:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_08107174


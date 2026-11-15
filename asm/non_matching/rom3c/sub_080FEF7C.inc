	THUMB_FUNC_START sub_080FEF7C
sub_080FEF7C: @ 0x080FEF7C
	push {r4,lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080FEFA8  @ =gRam
	ldr r2, _080FEFAC  @ =0x00000F52
	add r1, r3, r2
	add r1, r0, r1
	mov r4, #0
	mov r2, #4
	strb r2, [r1]
	ldr r2, _080FEFB0  @ =0x00000FC2
	add r1, r3, r2
	add r0, r0, r1
	mov r1, #255
	strb r1, [r0]
	ldr r0, _080FEFB4  @ =0x00000D16
	add r3, r3, r0
	strh r4, [r3]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FEFA8:
	.4byte gRam
_080FEFAC:
	.4byte 0x00000F52
_080FEFB0:
	.4byte 0x00000FC2
_080FEFB4:
	.4byte 0x00000D16
	THUMB_FUNC_END sub_080FEF7C


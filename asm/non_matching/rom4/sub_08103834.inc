	THUMB_FUNC_START sub_08103834
sub_08103834: @ 0x08103834
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080ED830
	lsl r0, r0, #24
	cmp r0, #0
	bne _08103858
	ldr r0, _08103860  @ =gRam
	ldr r1, _08103864  @ =0x00000FD2
	add r0, r0, r1
	add r0, r4, r0
	mov r1, #192
	strb r1, [r0]
	add r0, r4, #0
	bl sub_080C35C0
_08103858:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08103860:
	.4byte gRam
_08103864:
	.4byte 0x00000FD2
	THUMB_FUNC_END sub_08103834


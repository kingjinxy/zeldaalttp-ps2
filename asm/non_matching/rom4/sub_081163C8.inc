	THUMB_FUNC_START sub_081163C8
sub_081163C8: @ 0x081163C8
	push {lr}
	mov r1, #9
	ldr r2, _081163E4  @ =gRam
_081163CE:
	ldr r3, _081163E8  @ =0x00000E15
	add r0, r2, r3
	add r0, r1, r0
	ldrb r0, [r0]
	cmp r0, #60
	bne _081163EC
	lsl r0, r1, #24
	lsr r0, r0, #24
	bl sub_08116428
	b _081163F2
_081163E4:
	.4byte gRam
_081163E8:
	.4byte 0x00000E15
_081163EC:
	sub r1, r1, #1
	cmp r1, #0
	bge _081163CE
_081163F2:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_081163C8

	.byte 0x00
	.byte 0x00

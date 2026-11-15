	THUMB_FUNC_START sub_08117E0C
sub_08117E0C: @ 0x08117E0C
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _08117E40  @ =gRam
	ldr r1, _08117E44  @ =0x00000E1F
	add r2, r3, r1
	add r2, r0, r2
	ldrb r1, [r2]
	add r1, r1, #1
	strb r1, [r2]
	ldr r2, _08117E48  @ =0x00000E33
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #31
	strb r2, [r1]
	ldr r1, _08117E4C  @ =0x00000E5B
	add r3, r3, r1
	add r3, r0, r3
	mov r1, #8
	strb r1, [r3]
	mov r1, #37
	bl sub_080C19F8
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08117E40:
	.4byte gRam
_08117E44:
	.4byte 0x00000E1F
_08117E48:
	.4byte 0x00000E33
_08117E4C:
	.4byte 0x00000E5B
	THUMB_FUNC_END sub_08117E0C


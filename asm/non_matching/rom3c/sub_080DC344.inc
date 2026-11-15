	THUMB_FUNC_START sub_080DC344
sub_080DC344: @ 0x080DC344
	push {lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080DC368  @ =gRam
	ldr r2, _080DC36C  @ =0x00000F92
	add r1, r1, r2
	add r1, r0, r1
	mov r2, #1
	strb r2, [r1]
	ldr r1, _080DC370  @ =0x00000109
	mov r2, sp
	bl sub_080C9164
	add sp, sp, #4
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DC368:
	.4byte gRam
_080DC36C:
	.4byte 0x00000F92
_080DC370:
	.4byte 0x00000109
	THUMB_FUNC_END sub_080DC344


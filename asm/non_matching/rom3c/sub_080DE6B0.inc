	THUMB_FUNC_START sub_080DE6B0
sub_080DE6B0: @ 0x080DE6B0
	push {r4,lr}
	sub sp, sp, #4
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	mov r1, #58
	mov r2, sp
	bl sub_080C9564
	ldr r0, _080DE6D8  @ =gRam
	ldr r1, _080DE6DC  @ =0x00000F52
	add r0, r0, r1
	add r4, r4, r0
	mov r0, #0
	strb r0, [r4]
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_080DE6D8:
	.4byte gRam
_080DE6DC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080DE6B0


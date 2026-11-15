	THUMB_FUNC_START sub_080E066C
sub_080E066C: @ 0x080E066C
	push {lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080E0690  @ =gRam
	ldr r1, _080E0694  @ =0x00000F52
	add r2, r2, r1
	add r2, r0, r2
	ldrb r1, [r2]
	add r1, r1, #1
	strb r1, [r2]
	mov r1, #144
	mov r2, sp
	bl sub_080C9564
	add sp, sp, #4
	pop {r0}
	bx r0
_080E0690:
	.4byte gRam
_080E0694:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080E066C


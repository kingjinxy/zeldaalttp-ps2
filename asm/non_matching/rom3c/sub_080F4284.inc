	THUMB_FUNC_START sub_080F4284
sub_080F4284: @ 0x080F4284
	push {lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080F42A8  @ =gRam
	ldr r1, _080F42AC  @ =0x00000F52
	add r2, r2, r1
	add r2, r0, r2
	ldrb r1, [r2]
	add r1, r1, #1
	strb r1, [r2]
	mov r1, #40
	mov r2, sp
	bl sub_080C9564
	add sp, sp, #4
	pop {r0}
	bx r0
_080F42A8:
	.4byte gRam
_080F42AC:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080F4284


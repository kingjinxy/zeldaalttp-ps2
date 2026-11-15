	THUMB_FUNC_START sub_080FB0A4
sub_080FB0A4: @ 0x080FB0A4
	push {r4,lr}
	sub sp, sp, #4
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	ldr r1, _080FB0D0  @ =0x00000121
	add r0, r4, #0
	mov r2, sp
	bl sub_080C9564
	ldr r0, _080FB0D4  @ =gRam
	ldr r1, _080FB0D8  @ =0x00000F52
	add r0, r0, r1
	add r4, r4, r0
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FB0D0:
	.4byte 0x00000121
_080FB0D4:
	.4byte gRam
_080FB0D8:
	.4byte 0x00000F52
	THUMB_FUNC_END sub_080FB0A4


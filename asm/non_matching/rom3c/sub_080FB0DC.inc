	THUMB_FUNC_START sub_080FB0DC
sub_080FB0DC: @ 0x080FB0DC
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080FB110  @ =gRam
	ldr r1, _080FB114  @ =0x00000FC2
	add r0, r3, r1
	add r4, r2, r0
	ldrb r0, [r4]
	cmp r0, #0
	bne _080FB108
	ldr r0, _080FB118  @ =0x00000F52
	add r1, r3, r0
	add r1, r2, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080FB11C  @ =0x00001152
	add r0, r3, r1
	add r0, r2, r0
	mov r1, #16
	strb r1, [r0]
	strb r1, [r4]
_080FB108:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080FB110:
	.4byte gRam
_080FB114:
	.4byte 0x00000FC2
_080FB118:
	.4byte 0x00000F52
_080FB11C:
	.4byte 0x00001152
	THUMB_FUNC_END sub_080FB0DC


	THUMB_FUNC_START sub_080C8094
sub_080C8094: @ 0x080C8094
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r3, _080C80BC  @ =gRam
	ldr r2, _080C80C0  @ =0x00000FA2
	add r1, r3, r2
	add r1, r0, r1
	mov r2, #1
	strb r2, [r1]
	ldr r1, _080C80C4  @ =0x00000FC2
	add r3, r3, r1
	add r3, r0, r3
	mov r1, #31
	strb r1, [r3]
	mov r1, #108
	bl sub_080CF0AC
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C80BC:
	.4byte gRam
_080C80C0:
	.4byte 0x00000FA2
_080C80C4:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080C8094


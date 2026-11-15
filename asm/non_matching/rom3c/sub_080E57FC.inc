	THUMB_FUNC_START sub_080E57FC
sub_080E57FC: @ 0x080E57FC
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _080E5830  @ =gRam
	ldr r3, _080E5834  @ =0x00001142
	add r2, r1, r3
	add r2, r0, r2
	mov r3, #0
	strb r3, [r2]
	ldr r2, _080E5838  @ =0x00000F62
	add r3, r1, r2
	add r3, r0, r3
	sub r2, r2, #128
	add r1, r1, r2
	add r1, r0, r1
	ldrb r2, [r1]
	mov r1, #16
	and r1, r1, r2
	lsl r1, r1, #24
	lsr r1, r1, #28
	strb r1, [r3]
	bl sub_080C3774
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E5830:
	.4byte gRam
_080E5834:
	.4byte 0x00001142
_080E5838:
	.4byte 0x00000F62
	THUMB_FUNC_END sub_080E57FC


	THUMB_FUNC_START sub_080EC9D4
sub_080EC9D4: @ 0x080EC9D4
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r2, _080ECA00  @ =gRam
	ldr r3, _080ECA04  @ =0x00000FB2
	add r1, r2, r3
	add r1, r0, r1
	ldrb r1, [r1]
	sub r3, r3, #32
	add r2, r2, r3
	add r2, r0, r2
	lsl r1, r1, #1
	ldrb r2, [r2]
	add r1, r1, r2
	lsl r1, r1, #4
	ldr r2, _080ECA08  @ =gUnknown_08178510
	add r1, r1, r2
	mov r2, #2
	bl sub_080C9480
	pop {r0}
	bx r0
_080ECA00:
	.4byte gRam
_080ECA04:
	.4byte 0x00000FB2
_080ECA08:
	.4byte gUnknown_08178510
	THUMB_FUNC_END sub_080EC9D4


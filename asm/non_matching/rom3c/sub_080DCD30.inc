	THUMB_FUNC_START sub_080DCD30
sub_080DCD30: @ 0x080DCD30
	push {r4,lr}
	add r4, r0, #0
	lsl r4, r4, #24
	lsr r4, r4, #24
	add r0, r4, #0
	bl sub_080CBCE8
	ldr r1, _080DCD58  @ =gRam
	ldr r2, _080DCD5C  @ =0x00000FA2
	add r0, r1, r2
	add r4, r4, r0
	mov r0, #0
	strb r0, [r4]
	ldr r2, _080DCD60  @ =0x00001770
	add r1, r1, r2
	strb r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080DCD58:
	.4byte gRam
_080DCD5C:
	.4byte 0x00000FA2
_080DCD60:
	.4byte 0x00001770
	THUMB_FUNC_END sub_080DCD30


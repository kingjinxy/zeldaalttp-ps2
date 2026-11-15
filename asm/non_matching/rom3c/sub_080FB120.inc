	THUMB_FUNC_START sub_080FB120
sub_080FB120: @ 0x080FB120
	push {r4,lr}
	lsl r0, r0, #24
	lsr r2, r0, #24
	ldr r3, _080FB154  @ =gRam
	ldr r1, _080FB158  @ =0x00000FC2
	add r0, r3, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080FB14E
	ldr r4, _080FB15C  @ =0x00001142
	add r0, r3, r4
	add r0, r2, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _080FB14E
	ldr r4, _080FB160  @ =0x00000FA2
	add r0, r3, r4
	add r0, r2, r0
	strb r1, [r0]
	ldr r2, _080FB164  @ =0x00001770
	add r0, r3, r2
	strb r1, [r0]
_080FB14E:
	pop {r4}
	pop {r0}
	bx r0
_080FB154:
	.4byte gRam
_080FB158:
	.4byte 0x00000FC2
_080FB15C:
	.4byte 0x00001142
_080FB160:
	.4byte 0x00000FA2
_080FB164:
	.4byte 0x00001770
	THUMB_FUNC_END sub_080FB120


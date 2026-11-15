	THUMB_FUNC_START sub_080BEA00
sub_080BEA00: @ 0x080BEA00
	push {lr}
	ldr r0, _080BEA1C  @ =gRam
	ldr r2, _080BEA20  @ =0x00000A1C
	add r1, r0, r2
	mov r2, #134
	strh r2, [r1]
	ldr r1, _080BEA24  @ =0x00001672
	add r0, r0, r1
	strh r2, [r0]
	bl sub_080BE078
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080BEA1C:
	.4byte gRam
_080BEA20:
	.4byte 0x00000A1C
_080BEA24:
	.4byte 0x00001672
	THUMB_FUNC_END sub_080BEA00


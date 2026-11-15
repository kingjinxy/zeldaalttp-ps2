	THUMB_FUNC_START sub_0810A7FC
sub_0810A7FC: @ 0x0810A7FC
	push {lr}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _0810A818  @ =gRam
	ldr r2, _0810A81C  @ =0x00001022
	add r1, r1, r2
	add r1, r0, r1
	mov r2, #100
	strb r2, [r1]
	bl sub_08109960
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810A818:
	.4byte gRam
_0810A81C:
	.4byte 0x00001022
	THUMB_FUNC_END sub_0810A7FC


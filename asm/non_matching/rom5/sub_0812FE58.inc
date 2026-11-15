	THUMB_FUNC_START sub_0812FE58
sub_0812FE58: @ 0x0812FE58
	push {lr}
	bl sub_080AB73C
	ldr r0, _0812FE84  @ =gRam
	ldr r2, _0812FE88  @ =0x0000180D
	add r1, r0, r2
	mov r2, #0
	strb r2, [r1]
	ldr r3, _0812FE8C  @ =0x000016EA
	add r1, r0, r3
	strb r2, [r1]
	sub r3, r3, #2
	add r1, r0, r3
	strb r2, [r1]
	ldr r3, _0812FE90  @ =0x00001885
	add r1, r0, r3
	strb r2, [r1]
	ldr r1, _0812FE94  @ =0x00001770
	add r0, r0, r1
	strb r2, [r0]
	pop {r0}
	bx r0
_0812FE84:
	.4byte gRam
_0812FE88:
	.4byte 0x0000180D
_0812FE8C:
	.4byte 0x000016EA
_0812FE90:
	.4byte 0x00001885
_0812FE94:
	.4byte 0x00001770
	THUMB_FUNC_END sub_0812FE58


	THUMB_FUNC_START sub_0803A2E8
sub_0803A2E8: @ 0x0803A2E8
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	mov r0, #0
	str r0, [r7]
	ldr r1, _0803A314  @ =gUnknown_0201F020
	ldr r2, _0803A318  @ =0x05002C01
	add r0, r7, #0
	bl CpuSet
	mov r0, #0
	str r0, [r7, #4]
	add r0, r7, #4
	ldr r1, _0803A31C  @ =gUnknown_0200B320
	ldr r2, _0803A318  @ =0x05002C01
	bl CpuSet
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0803A314:
	.4byte gUnknown_0201F020
_0803A318:
	.4byte 0x05002C01
_0803A31C:
	.4byte gUnknown_0200B320
	THUMB_FUNC_END sub_0803A2E8


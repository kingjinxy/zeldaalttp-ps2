	THUMB_FUNC_START sub_0804CCBC
sub_0804CCBC: @ 0x0804CCBC
	push {r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r0, r7, #0
	mov r1, #0
	strh r1, [r0]
	add r0, r7, #0
	ldr r1, _0804CCDC  @ =gUnknown_0202A7E0
	ldr r2, _0804CCE0  @ =0x01000050
	bl CpuSet
	add sp, sp, #4
	pop {r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0804CCDC:
	.4byte gUnknown_0202A7E0
_0804CCE0:
	.4byte 0x01000050
	THUMB_FUNC_END sub_0804CCBC


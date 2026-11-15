	THUMB_FUNC_START sub_08013DE0
sub_08013DE0: @ 0x08013DE0
	push {lr}
	sub sp, sp, #4
	ldr r1, _08013E00  @ =gUnknown_0202A4F0
	mov r0, #0
	str r0, [r1]
	sub r0, r0, #1
	str r0, [sp]
	ldr r1, _08013E04  @ =gUnknown_02016350
	ldr r2, _08013E08  @ =0x05000020
	mov r0, sp
	bl CpuSet
	add sp, sp, #4
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08013E00:
	.4byte gUnknown_0202A4F0
_08013E04:
	.4byte gUnknown_02016350
_08013E08:
	.4byte 0x05000020
	THUMB_FUNC_END sub_08013DE0


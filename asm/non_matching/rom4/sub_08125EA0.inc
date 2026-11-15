	THUMB_FUNC_START sub_08125EA0
sub_08125EA0: @ 0x08125EA0
	push {lr}
	sub sp, sp, #4
	mov r0, #0
	str r0, [sp]
	ldr r1, _08125EB8  @ =gUnknown_0200F330
	ldr r2, _08125EBC  @ =0x01000200
	mov r0, sp
	bl CpuFastSet
	add sp, sp, #4
	pop {r0}
	bx r0
_08125EB8:
	.4byte gUnknown_0200F330
_08125EBC:
	.4byte 0x01000200
	THUMB_FUNC_END sub_08125EA0


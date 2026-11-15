	THUMB_FUNC_START sub_08077D98
sub_08077D98: @ 0x08077D98
	push {lr}
	ldr r0, _08077DB4  @ =gUnknown_02000800
	ldr r1, _08077DB8  @ =gUnknown_02000C00
	mov r2, #128
	lsl r2, r2, #1
	bl CpuFastSet
	ldr r0, _08077DBC  @ =gRam
	ldr r1, _08077DC0  @ =0x0000099B
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	pop {r0}
	bx r0
_08077DB4:
	.4byte gUnknown_02000800
_08077DB8:
	.4byte gUnknown_02000C00
_08077DBC:
	.4byte gRam
_08077DC0:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08077D98


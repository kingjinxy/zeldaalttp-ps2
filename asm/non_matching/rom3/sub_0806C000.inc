	THUMB_FUNC_START sub_0806C000
sub_0806C000: @ 0x0806C000
	push {r4,lr}
	sub sp, sp, #4
	bl sub_081334B4
	ldr r4, _0806C034  @ =gRam
	ldr r1, _0806C038  @ =0x000009E8
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #1
	beq _0806C02A
	mov r0, #0
	str r0, [sp]
	ldr r1, _0806C03C  @ =gUnknown_02000C00
	ldr r2, _0806C040  @ =0x01000080
	mov r0, sp
	bl CpuFastSet
	ldr r0, _0806C044  @ =0x0000099B
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
_0806C02A:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806C034:
	.4byte gRam
_0806C038:
	.4byte 0x000009E8
_0806C03C:
	.4byte gUnknown_02000C00
_0806C040:
	.4byte 0x01000080
_0806C044:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_0806C000


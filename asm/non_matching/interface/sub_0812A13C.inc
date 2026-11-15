	THUMB_FUNC_START sub_0812A13C
sub_0812A13C: @ 0x0812A13C
	push {r4,lr}
	sub sp, sp, #4
	ldr r4, _0812A180  @ =gUnknown_030000C8
	mov r3, #1
	neg r3, r3
	mov r2, #0
	ldr r0, _0812A184  @ =gUnknown_03000108
	mov r1, #1
_0812A14C:
	str r3, [r0]
	strb r2, [r0, #4]
	add r0, r0, #8
	sub r1, r1, #1
	cmp r1, #0
	bge _0812A14C
	ldr r1, _0812A188  @ =gUnknown_030000F0
	mov r2, #0
	add r0, r1, #0
	add r0, r0, #18
_0812A160:
	strb r2, [r0]
	sub r0, r0, #1
	cmp r0, r1
	bge _0812A160
	mov r0, sp
	ldr r2, _0812A18C  @ =0x0000FFFF
	add r1, r2, #0
	strh r1, [r0]
	ldr r2, _0812A190  @ =0x01000013
	add r1, r4, #0
	bl CpuSet
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_0812A180:
	.4byte gUnknown_030000C8
_0812A184:
	.4byte gUnknown_03000108
_0812A188:
	.4byte gUnknown_030000F0
_0812A18C:
	.4byte 0x0000FFFF
_0812A190:
	.4byte 0x01000013
	THUMB_FUNC_END sub_0812A13C


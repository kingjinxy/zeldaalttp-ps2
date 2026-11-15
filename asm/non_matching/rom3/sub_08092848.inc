	THUMB_FUNC_START sub_08092848
sub_08092848: @ 0x08092848
	push {lr}
	ldr r0, _08092864  @ =gUnknown_0815E114
	ldr r1, _08092868  @ =gUnknown_02002E40
	mov r2, #160
	bl CpuSet
	ldr r0, _0809286C  @ =gUnknown_0815E254
	ldr r1, _08092870  @ =gUnknown_02003000
	mov r2, #32
	bl CpuSet
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08092864:
	.4byte gUnknown_0815E114
_08092868:
	.4byte gUnknown_02002E40
_0809286C:
	.4byte gUnknown_0815E254
_08092870:
	.4byte gUnknown_02003000
	THUMB_FUNC_END sub_08092848


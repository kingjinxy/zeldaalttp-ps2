	THUMB_FUNC_START sub_08074A44
sub_08074A44: @ 0x08074A44
	push {lr}
	ldr r0, _08074A60  @ =gRam
	ldr r1, _08074A64  @ =0x0000165E
	add r0, r0, r1
	ldrb r0, [r0]
	cmp r0, #1
	bhi _08074A74
	ldr r0, _08074A68  @ =gUnknown_0814D7A4
	ldr r1, _08074A6C  @ =gUnknown_02002D40
	mov r2, #32
	bl CpuSet
	ldr r0, _08074A70  @ =gUnknown_0814D8A4
	b _08074A84
_08074A60:
	.4byte gRam
_08074A64:
	.4byte 0x0000165E
_08074A68:
	.4byte gUnknown_0814D7A4
_08074A6C:
	.4byte gUnknown_02002D40
_08074A70:
	.4byte gUnknown_0814D8A4
_08074A74:
	cmp r0, #3
	bne _08074AA0
	ldr r0, _08074A90  @ =gUnknown_0814D824
	ldr r1, _08074A94  @ =gUnknown_02002D40
	mov r2, #32
	bl CpuSet
	ldr r0, _08074A98  @ =gUnknown_0814D924
_08074A84:
	ldr r1, _08074A9C  @ =gUnknown_02002DC0
	mov r2, #32
	bl CpuSet
	b _08074AB4
	.byte 0x00
	.byte 0x00
_08074A90:
	.4byte gUnknown_0814D824
_08074A94:
	.4byte gUnknown_02002D40
_08074A98:
	.4byte gUnknown_0814D924
_08074A9C:
	.4byte gUnknown_02002DC0
_08074AA0:
	ldr r0, _08074AB8  @ =gUnknown_0814D7E4
	ldr r1, _08074ABC  @ =gUnknown_02002D40
	mov r2, #32
	bl CpuSet
	ldr r0, _08074AC0  @ =gUnknown_0814D8E4
	ldr r1, _08074AC4  @ =gUnknown_02002DC0
	mov r2, #32
	bl CpuSet
_08074AB4:
	pop {r0}
	bx r0
_08074AB8:
	.4byte gUnknown_0814D7E4
_08074ABC:
	.4byte gUnknown_02002D40
_08074AC0:
	.4byte gUnknown_0814D8E4
_08074AC4:
	.4byte gUnknown_02002DC0
	THUMB_FUNC_END sub_08074A44


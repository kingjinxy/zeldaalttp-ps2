	THUMB_FUNC_START sub_08077DC4
sub_08077DC4: @ 0x08077DC4
	push {r4,lr}
	sub sp, sp, #4
	mov r0, #0
	str r0, [sp]
	ldr r4, _08077E28  @ =gUnknown_02000C00
	ldr r2, _08077E2C  @ =0x01000100
	mov r0, sp
	add r1, r4, #0
	bl CpuFastSet
	ldr r0, _08077E30  @ =gUnknown_02000800
	add r1, r4, #0
	mov r2, #16
	bl CpuFastSet
	ldr r0, _08077E34  @ =gUnknown_02000900
	ldr r1, _08077E38  @ =gUnknown_02000D00
	mov r2, #1
	bl CpuFastSet
	ldr r0, _08077E3C  @ =gUnknown_02000920
	ldr r1, _08077E40  @ =gUnknown_02000D20
	mov r2, #1
	bl CpuFastSet
	ldr r0, _08077E44  @ =gUnknown_02000940
	ldr r1, _08077E48  @ =gUnknown_02000D40
	mov r2, #1
	bl CpuFastSet
	ldr r0, _08077E4C  @ =gUnknown_02000960
	ldr r1, _08077E50  @ =gUnknown_02000D60
	mov r2, #1
	bl CpuFastSet
	ldr r0, _08077E54  @ =gUnknown_02000AB0
	ldr r1, _08077E58  @ =gUnknown_02000EB0
	mov r2, #8
	bl CpuSet
	ldr r0, _08077E5C  @ =gUnknown_02000AE0
	ldr r1, _08077E60  @ =gUnknown_02000EE0
	mov r2, #4
	bl CpuFastSet
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08077E28:
	.4byte gUnknown_02000C00
_08077E2C:
	.4byte 0x01000100
_08077E30:
	.4byte gUnknown_02000800
_08077E34:
	.4byte gUnknown_02000900
_08077E38:
	.4byte gUnknown_02000D00
_08077E3C:
	.4byte gUnknown_02000920
_08077E40:
	.4byte gUnknown_02000D20
_08077E44:
	.4byte gUnknown_02000940
_08077E48:
	.4byte gUnknown_02000D40
_08077E4C:
	.4byte gUnknown_02000960
_08077E50:
	.4byte gUnknown_02000D60
_08077E54:
	.4byte gUnknown_02000AB0
_08077E58:
	.4byte gUnknown_02000EB0
_08077E5C:
	.4byte gUnknown_02000AE0
_08077E60:
	.4byte gUnknown_02000EE0
	THUMB_FUNC_END sub_08077DC4


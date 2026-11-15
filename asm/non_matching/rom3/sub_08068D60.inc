	THUMB_FUNC_START sub_08068D60
sub_08068D60: @ 0x08068D60
	push {r4-r6,lr}
	mov r6, r8
	push {r6}
	ldr r0, _08068E1C  @ =0x0812CF10
	ldr r5, _08068E20  @ =gRam
	mov r2, #128
	lsl r2, r2, #1
	add r1, r5, #0
	bl CpuSet
	ldr r0, _08068E24  @ =gUnknown_0814C7CC
	ldr r4, _08068E28  @ =gUnknown_03003E30
	add r1, r4, #0
	mov r2, #28
	bl CpuSet
	ldr r0, _08068E2C  @ =0x08068B7D
	mov r2, #128
	lsl r2, r2, #2
	add r1, r5, r2
	ldr r2, _08068E30  @ =0x040000C0
	bl CpuSet
	ldr r1, _08068E34  @ =0x00000201
	add r0, r5, r1
	str r0, [r4, #8]
	ldr r0, _08068E38  @ =gUnknown_03007FFC
	str r5, [r0]
	ldr r1, _08068E3C  @ =0x04000204
	ldr r2, _08068E40  @ =0x00004014
	add r0, r2, #0
	strh r0, [r1]
	ldr r1, _08068E44  @ =0x00000986
	add r0, r5, r1
	mov r4, #0
	strb r4, [r0]
	ldr r2, _08068E48  @ =0x00000997
	add r0, r5, r2
	strb r4, [r0]
	add r1, r1, #29
	add r0, r5, r1
	strb r4, [r0]
	add r2, r2, #13
	add r0, r5, r2
	strb r4, [r0]
	ldr r0, _08068E4C  @ =0x00000985
	add r6, r5, r0
	mov r1, #1
	mov r8, r1
	mov r2, r8
	strb r2, [r6]
	bl sub_08129E60
	ldr r1, _08068E50  @ =0x0000098C
	add r0, r5, r1
	strb r4, [r0]
	ldr r2, _08068E54  @ =0x00000995
	add r0, r5, r2
	strb r4, [r0]
	strb r4, [r6]
	ldr r0, _08068E58  @ =gUnknown_02000400
	strh r4, [r0]
	ldr r1, _08068E5C  @ =gUnknown_02000402
	ldr r2, _08068E60  @ =0x0000FFFF
	add r0, r2, #0
	strh r0, [r1]
	bl sub_08068CFC
	ldr r1, _08068E64  @ =0x04000004
	ldr r2, _08068E68  @ =0x0000050E
	add r0, r5, r2
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _08068E6C  @ =0x04000200
	add r2, r2, #2
	add r0, r5, r2
	ldrh r0, [r0]
	strh r0, [r1]
	ldr r1, _08068E70  @ =0x04000050
	ldr r0, _08068E74  @ =0x0000051E
	add r5, r5, r0
	ldrh r0, [r5]
	strh r0, [r1]
	ldr r0, _08068E78  @ =0x04000208
	mov r1, r8
	strh r1, [r0]
	bl sub_08069D00
	pop {r3}
	mov r8, r3
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08068E1C:
	.4byte 0x0812CF10
_08068E20:
	.4byte gRam
_08068E24:
	.4byte gUnknown_0814C7CC
_08068E28:
	.4byte gUnknown_03003E30
_08068E2C:
	.4byte 0x08068B7D
_08068E30:
	.4byte 0x040000C0
_08068E34:
	.4byte 0x00000201
_08068E38:
	.4byte gUnknown_03007FFC
_08068E3C:
	.4byte 0x04000204
_08068E40:
	.4byte 0x00004014
_08068E44:
	.4byte 0x00000986
_08068E48:
	.4byte 0x00000997
_08068E4C:
	.4byte 0x00000985
_08068E50:
	.4byte 0x0000098C
_08068E54:
	.4byte 0x00000995
_08068E58:
	.4byte gUnknown_02000400
_08068E5C:
	.4byte gUnknown_02000402
_08068E60:
	.4byte 0x0000FFFF
_08068E64:
	.4byte 0x04000004
_08068E68:
	.4byte 0x0000050E
_08068E6C:
	.4byte 0x04000200
_08068E70:
	.4byte 0x04000050
_08068E74:
	.4byte 0x0000051E
_08068E78:
	.4byte 0x04000208
	THUMB_FUNC_END sub_08068D60


	THUMB_FUNC_START sub_08099AA0
sub_08099AA0: @ 0x08099AA0
	push {r4,lr}
	ldr r4, _08099B28  @ =gRam
	ldr r0, _08099B2C  @ =0x000017E1
	add r1, r4, r0
	mov r0, #0
	strb r0, [r1]
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	mov r0, #2
	strb r0, [r1]
	bl sub_0809A138
	bl sub_080978AC
	ldr r1, _08099B30  @ =0x000016C8
	add r0, r4, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _08099B22
	bl sub_0809A190
	ldr r2, _08099B34  @ =0x00001718
	add r0, r4, r2
	ldrb r0, [r0]
	cmp r0, #4
	beq _08099AEA
	ldr r1, _08099B38  @ =0x000017D4
	add r0, r4, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _08099AEA
	mov r0, #13
	bl sub_0809E43C
_08099AEA:
	ldr r1, _08099B28  @ =gRam
	ldr r2, _08099B3C  @ =0x0000180D
	add r0, r1, r2
	mov r3, #0
	strb r3, [r0]
	ldr r2, _08099B40  @ =0x00001702
	add r0, r1, r2
	strb r3, [r0]
	ldr r0, _08099B44  @ =0x000016CF
	add r2, r1, r0
	mov r0, #255
	strb r0, [r2]
	ldr r0, _08099B30  @ =0x000016C8
	add r2, r1, r0
	mov r0, #1
	neg r0, r0
	strb r0, [r2]
	ldr r0, _08099B48  @ =0x000016C9
	add r2, r1, r0
	mov r0, #1
	neg r0, r0
	strb r0, [r2]
	ldr r2, _08099B4C  @ =0x000016F8
	add r0, r1, r2
	strb r3, [r0]
	ldr r0, _08099B50  @ =0x00001705
	add r1, r1, r0
	strb r3, [r1]
_08099B22:
	pop {r4}
	pop {r0}
	bx r0
_08099B28:
	.4byte gRam
_08099B2C:
	.4byte 0x000017E1
_08099B30:
	.4byte 0x000016C8
_08099B34:
	.4byte 0x00001718
_08099B38:
	.4byte 0x000017D4
_08099B3C:
	.4byte 0x0000180D
_08099B40:
	.4byte 0x00001702
_08099B44:
	.4byte 0x000016CF
_08099B48:
	.4byte 0x000016C9
_08099B4C:
	.4byte 0x000016F8
_08099B50:
	.4byte 0x00001705
	THUMB_FUNC_END sub_08099AA0


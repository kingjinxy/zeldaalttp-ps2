	THUMB_FUNC_START sub_08134940
sub_08134940: @ 0x08134940
	push {r4-r6,lr}
	sub sp, sp, #4
	add r5, r0, #0
	ldr r1, _08134A08  @ =0x04000084
	mov r0, #143
	strh r0, [r1]
	ldr r3, _08134A0C  @ =0x04000080
	mov r2, #0
	strh r2, [r3]
	ldr r0, _08134A10  @ =0x04000063
	mov r1, #8
	strb r1, [r0]
	add r0, r0, #6
	strb r1, [r0]
	add r0, r0, #16
	strb r1, [r0]
	sub r0, r0, #20
	mov r1, #128
	strb r1, [r0]
	add r0, r0, #8
	strb r1, [r0]
	add r0, r0, #16
	strb r1, [r0]
	sub r0, r0, #13
	strb r2, [r0]
	mov r0, #119
	strb r0, [r3]
	ldr r0, _08134A14  @ =gUnknown_03007FF0
	ldr r4, [r0]
	ldr r6, [r4]
	ldr r0, _08134A18  @ =0x68736D53
	cmp r6, r0
	bne _08134A00
	add r0, r6, #1
	str r0, [r4]
	ldr r1, _08134A1C  @ =gUnknown_02031A30
	ldr r0, _08134A20  @ =0x081358FD
	str r0, [r1, #32]
	ldr r0, _08134A24  @ =0x081345B9
	str r0, [r1, #68]
	ldr r0, _08134A28  @ =0x081345CD
	str r0, [r1, #76]
	ldr r0, _08134A2C  @ =0x08135A55
	str r0, [r1, #112]
	ldr r0, _08134A30  @ =0x08134551
	str r0, [r1, #116]
	ldr r0, _08134A34  @ =0x08134B7D
	str r0, [r1, #120]
	ldr r0, _08134A38  @ =0x081342DD
	str r0, [r1, #124]
	add r2, r1, #0
	add r2, r2, #128
	ldr r0, _08134A3C  @ =0x08134F61
	str r0, [r2]
	add r1, r1, #132
	ldr r0, _08134A40  @ =0x08135029
	str r0, [r1]
	str r5, [r4, #28]
	ldr r0, _08134A44  @ =0x0813523D
	str r0, [r4, #40]
	ldr r0, _08134A48  @ =0x08135185
	str r0, [r4, #44]
	ldr r0, _08134A4C  @ =0x081350DD
	str r0, [r4, #48]
	ldr r0, _08134A50  @ =0x00000000
	mov r1, #0
	strb r0, [r4, #12]
	str r1, [sp]
	ldr r2, _08134A54  @ =0x05000040
	mov r0, sp
	add r1, r5, #0
	bl CpuSet
	mov r0, #1
	strb r0, [r5, #1]
	mov r0, #17
	strb r0, [r5, #28]
	add r1, r5, #0
	add r1, r1, #65
	mov r0, #2
	strb r0, [r1]
	add r1, r1, #27
	mov r0, #34
	strb r0, [r1]
	add r1, r1, #37
	mov r0, #3
	strb r0, [r1]
	add r1, r1, #27
	mov r0, #68
	strb r0, [r1]
	add r1, r1, #36
	mov r0, #4
	strb r0, [r1, #1]
	mov r0, #136
	strb r0, [r1, #28]
	str r6, [r4]
_08134A00:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_08134A08:
	.4byte 0x04000084
_08134A0C:
	.4byte 0x04000080
_08134A10:
	.4byte 0x04000063
_08134A14:
	.4byte gUnknown_03007FF0
_08134A18:
	.4byte 0x68736D53
_08134A1C:
	.4byte gUnknown_02031A30
_08134A20:
	.4byte 0x081358FD
_08134A24:
	.4byte 0x081345B9
_08134A28:
	.4byte 0x081345CD
_08134A2C:
	.4byte 0x08135A55
_08134A30:
	.4byte 0x08134551
_08134A34:
	.4byte 0x08134B7D
_08134A38:
	.4byte 0x081342DD
_08134A3C:
	.4byte 0x08134F61
_08134A40:
	.4byte 0x08135029
_08134A44:
	.4byte 0x0813523D
_08134A48:
	.4byte 0x08135185
_08134A4C:
	.4byte 0x081350DD
_08134A50:
	.4byte 0x00000000
_08134A54:
	.4byte 0x05000040
	THUMB_FUNC_END sub_08134940


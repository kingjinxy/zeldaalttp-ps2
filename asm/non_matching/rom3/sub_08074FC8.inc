	THUMB_FUNC_START sub_08074FC8
sub_08074FC8: @ 0x08074FC8
	push {r4,r5,lr}
	sub sp, sp, #4
	mov r0, #1
	neg r0, r0
	str r0, [sp]
	mov r0, sp
	ldr r1, _08075024  @ =gUnknown_02001600
	ldr r2, _08075028  @ =0x01000080
	bl CpuFastSet
	ldr r4, _0807502C  @ =gRam
	ldr r0, _08075030  @ =0x00000BDC
	add r1, r4, r0
	mov r5, #0
	mov r0, #38
	strh r0, [r1]
	ldr r1, _08075034  @ =0x00000BDE
	add r0, r4, r1
	strh r5, [r0]
	bl sub_08074BC4
	ldr r3, _08075038  @ =0x000009E8
	add r1, r4, r3
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	mov r0, #1
	bl sub_0806BD6C
	ldr r0, _0807503C  @ =0x00000CFC
	add r2, r4, r0
	ldrh r0, [r2]
	sub r0, r0, #1
	ldr r3, _08075040  @ =0x00000CF8
	add r1, r4, r3
	strh r0, [r1]
	strh r5, [r2]
	ldr r0, _08075044  @ =0x00000CFA
	add r4, r4, r0
	mov r0, #2
	strh r0, [r4]
	add sp, sp, #4
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08075024:
	.4byte gUnknown_02001600
_08075028:
	.4byte 0x01000080
_0807502C:
	.4byte gRam
_08075030:
	.4byte 0x00000BDC
_08075034:
	.4byte 0x00000BDE
_08075038:
	.4byte 0x000009E8
_0807503C:
	.4byte 0x00000CFC
_08075040:
	.4byte 0x00000CF8
_08075044:
	.4byte 0x00000CFA
	THUMB_FUNC_END sub_08074FC8


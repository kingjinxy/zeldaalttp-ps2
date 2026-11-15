	THUMB_FUNC_START sub_0813370C
sub_0813370C: @ 0x0813370C
	push {r4,lr}
	sub sp, sp, #4
	ldr r4, _08133754  @ =gUnknown_02000800
	ldr r1, _08133758  @ =gUnknown_02010540
	mov r2, #128
	lsl r2, r2, #2
	add r0, r4, #0
	bl CpuSet
	mov r1, sp
	ldr r2, _0813375C  @ =0x00007FFF
	add r0, r2, #0
	strh r0, [r1]
	ldr r2, _08133760  @ =0x01000200
	mov r0, sp
	add r1, r4, #0
	bl CpuSet
	ldr r1, _08133764  @ =gRam
	ldr r0, _08133768  @ =0x00000CF8
	add r2, r1, r0
	mov r0, #0
	strh r0, [r2]
	ldr r0, _0813376C  @ =0x00000CFA
	add r2, r1, r0
	mov r0, #2
	strh r0, [r2]
	ldr r2, _08133770  @ =0x000009E8
	add r1, r1, r2
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
_08133754:
	.4byte gUnknown_02000800
_08133758:
	.4byte gUnknown_02010540
_0813375C:
	.4byte 0x00007FFF
_08133760:
	.4byte 0x01000200
_08133764:
	.4byte gRam
_08133768:
	.4byte 0x00000CF8
_0813376C:
	.4byte 0x00000CFA
_08133770:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0813370C


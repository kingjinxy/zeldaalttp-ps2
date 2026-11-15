	THUMB_FUNC_START sub_081333E8
sub_081333E8: @ 0x081333E8
	push {r4-r7,lr}
	ldr r4, _08133424  @ =gUnknown_083BF858
	mov r0, #144
	lsl r0, r0, #1
	add r4, r4, r0
	ldr r7, _08133428  @ =gUnknown_02000F20
	ldr r6, _0813342C  @ =gUnknown_02000B20
	mov r5, #63
_081333F8:
	ldrh r0, [r4]
	bl sub_08133468
	strh r0, [r6]
	ldrh r0, [r4]
	bl sub_08133468
	strh r0, [r7]
	add r4, r4, #2
	add r7, r7, #2
	add r6, r6, #2
	sub r5, r5, #1
	cmp r5, #0
	bge _081333F8
	ldr r0, _08133430  @ =gRam
	ldr r1, _08133434  @ =0x0000099B
	add r0, r0, r1
	mov r1, #1
	strb r1, [r0]
	pop {r4-r7}
	pop {r0}
	bx r0
_08133424:
	.4byte gUnknown_083BF858
_08133428:
	.4byte gUnknown_02000F20
_0813342C:
	.4byte gUnknown_02000B20
_08133430:
	.4byte gRam
_08133434:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_081333E8


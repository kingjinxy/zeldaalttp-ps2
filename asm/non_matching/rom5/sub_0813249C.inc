	THUMB_FUNC_START sub_0813249C
sub_0813249C: @ 0x0813249C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsl r1, r1, #24
	lsr r5, r1, #24
	lsl r2, r2, #24
	lsr r6, r2, #24
	ldr r1, _08132540  @ =gUnknown_0822BBF4
	lsr r0, r0, #23
	add r0, r0, r1
	ldrh r0, [r0]
	mov r4, #3
	lsl r0, r0, #1
	ldr r1, _08132544  @ =gUnknown_02030600
	add r3, r0, r1
	ldr r7, _08132548  @ =gUnknown_0822BBFE
	ldr r2, _0813254C  @ =gUnknown_0822BB64
	mov r12, r2
	ldr r0, _08132550  @ =gRam
	mov r8, r0
	ldr r2, _08132554  @ =gUnknown_02000EB0
	ldr r1, _08132558  @ =gUnknown_02000AB0
_081324CA:
	ldrh r0, [r3]
	strh r0, [r1]
	ldrh r0, [r3]
	strh r0, [r2]
	add r3, r3, #2
	add r2, r2, #2
	add r1, r1, #2
	sub r4, r4, #1
	cmp r4, #0
	bge _081324CA
	lsl r0, r5, #1
	add r0, r0, r7
	ldrh r0, [r0]
	mov r4, #3
	lsl r0, r0, #1
	ldr r2, _08132544  @ =gUnknown_02030600
	add r1, r0, r2
	lsl r5, r6, #1
	ldr r2, _0813255C  @ =gUnknown_02000EB8
	ldr r3, _08132560  @ =gUnknown_02000AB8
_081324F2:
	ldrh r0, [r1]
	strh r0, [r3]
	ldrh r0, [r1]
	strh r0, [r2]
	add r1, r1, #2
	add r2, r2, #2
	add r3, r3, #2
	sub r4, r4, #1
	cmp r4, #0
	bge _081324F2
	mov r1, r12
	add r0, r5, r1
	ldrh r0, [r0]
	mov r4, #15
	lsl r0, r0, #1
	ldr r1, _08132564  @ =gUnknown_02030160
	add r2, r0, r1
	ldr r1, _08132568  @ =gUnknown_02000EE0
	ldr r3, _0813256C  @ =gUnknown_02000AE0
_08132518:
	ldrh r0, [r2]
	strh r0, [r3]
	ldrh r0, [r2]
	strh r0, [r1]
	add r2, r2, #2
	add r1, r1, #2
	add r3, r3, #2
	sub r4, r4, #1
	cmp r4, #0
	bge _08132518
	ldr r1, _08132570  @ =0x0000099B
	add r1, r1, r8
	mov r0, #1
	strb r0, [r1]
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08132540:
	.4byte gUnknown_0822BBF4
_08132544:
	.4byte gUnknown_02030600
_08132548:
	.4byte gUnknown_0822BBFE
_0813254C:
	.4byte gUnknown_0822BB64
_08132550:
	.4byte gRam
_08132554:
	.4byte gUnknown_02000EB0
_08132558:
	.4byte gUnknown_02000AB0
_0813255C:
	.4byte gUnknown_02000EB8
_08132560:
	.4byte gUnknown_02000AB8
_08132564:
	.4byte gUnknown_02030160
_08132568:
	.4byte gUnknown_02000EE0
_0813256C:
	.4byte gUnknown_02000AE0
_08132570:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_0813249C


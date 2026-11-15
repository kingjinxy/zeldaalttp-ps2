	THUMB_FUNC_START sub_08133148
sub_08133148: @ 0x08133148
	push {r4,r5,lr}
	ldr r1, _08133188  @ =gUnknown_0822BBFE
	ldr r0, _0813318C  @ =gShield
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	mov r4, #3
	lsl r0, r0, #1
	ldr r1, _08133190  @ =gUnknown_02030600
	add r2, r0, r1
	ldr r5, _08133194  @ =gRam
	ldr r1, _08133198  @ =gUnknown_02000EB8
	ldr r3, _0813319C  @ =gUnknown_02000AB8
_08133164:
	ldrh r0, [r2]
	strh r0, [r3]
	ldrh r0, [r2]
	strh r0, [r1]
	add r2, r2, #2
	add r1, r1, #2
	add r3, r3, #2
	sub r4, r4, #1
	cmp r4, #0
	bge _08133164
	ldr r0, _081331A0  @ =0x0000099B
	add r1, r5, r0
	mov r0, #1
	strb r0, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08133188:
	.4byte gUnknown_0822BBFE
_0813318C:
	.4byte gShield
_08133190:
	.4byte gUnknown_02030600
_08133194:
	.4byte gRam
_08133198:
	.4byte gUnknown_02000EB8
_0813319C:
	.4byte gUnknown_02000AB8
_081331A0:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08133148


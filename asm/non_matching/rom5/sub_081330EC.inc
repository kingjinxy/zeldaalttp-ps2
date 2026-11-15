	THUMB_FUNC_START sub_081330EC
sub_081330EC: @ 0x081330EC
	push {r4,r5,lr}
	ldr r1, _0813312C  @ =gUnknown_0822BBF4
	ldr r0, _08133130  @ =gSword
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	mov r4, #3
	lsl r0, r0, #1
	ldr r1, _08133134  @ =gUnknown_02030600
	add r2, r0, r1
	ldr r5, _08133138  @ =gRam
	ldr r1, _0813313C  @ =gUnknown_02000EB0
	ldr r3, _08133140  @ =gUnknown_02000AB0
_08133108:
	ldrh r0, [r2]
	strh r0, [r3]
	ldrh r0, [r2]
	strh r0, [r1]
	add r2, r2, #2
	add r1, r1, #2
	add r3, r3, #2
	sub r4, r4, #1
	cmp r4, #0
	bge _08133108
	ldr r0, _08133144  @ =0x0000099B
	add r1, r5, r0
	mov r0, #1
	strb r0, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0813312C:
	.4byte gUnknown_0822BBF4
_08133130:
	.4byte gSword
_08133134:
	.4byte gUnknown_02030600
_08133138:
	.4byte gRam
_0813313C:
	.4byte gUnknown_02000EB0
_08133140:
	.4byte gUnknown_02000AB0
_08133144:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_081330EC


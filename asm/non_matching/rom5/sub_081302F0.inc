	THUMB_FUNC_START sub_081302F0
sub_081302F0: @ 0x081302F0
	push {r4,lr}
	ldr r1, _08130358  @ =gUnknown_0822BB64
	ldr r0, _0813035C  @ =gArmor
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	mov r4, #15
	lsl r0, r0, #1
	ldr r2, _08130360  @ =gUnknown_02030160
	add r1, r0, r2
	ldr r3, _08130364  @ =gUnknown_02000EE0
	ldr r2, _08130368  @ =gUnknown_02000AE0
_0813030A:
	ldrh r0, [r1]
	strh r0, [r2]
	ldrh r0, [r1]
	strh r0, [r3]
	add r1, r1, #2
	add r3, r3, #2
	add r2, r2, #2
	sub r4, r4, #1
	cmp r4, #0
	bge _0813030A
	ldr r1, _0813036C  @ =gGloves
	ldrb r0, [r1]
	cmp r0, #0
	beq _08130344
	add r4, r0, #0
	sub r4, r4, #1
	ldr r0, _08130370  @ =gUnknown_0822BC08
	lsl r4, r4, #1
	add r4, r4, r0
	ldrh r0, [r4]
	bl sub_08133468
	ldr r1, _08130374  @ =gUnknown_020009FA
	strh r0, [r1]
	ldrh r0, [r4]
	bl sub_08133468
	ldr r1, _08130378  @ =gUnknown_02000DFA
	strh r0, [r1]
_08130344:
	ldr r1, _0813037C  @ =gRam
	ldr r0, _08130380  @ =0x0000099B
	add r1, r1, r0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08130358:
	.4byte gUnknown_0822BB64
_0813035C:
	.4byte gArmor
_08130360:
	.4byte gUnknown_02030160
_08130364:
	.4byte gUnknown_02000EE0
_08130368:
	.4byte gUnknown_02000AE0
_0813036C:
	.4byte gGloves
_08130370:
	.4byte gUnknown_0822BC08
_08130374:
	.4byte gUnknown_020009FA
_08130378:
	.4byte gUnknown_02000DFA
_0813037C:
	.4byte gRam
_08130380:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_081302F0

